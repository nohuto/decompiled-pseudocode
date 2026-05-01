/*
 * XREFs of ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18011C428
 * Callers:
 *     ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18008B7A0 (-BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORM.c)
 * Callees:
 *     ?s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@@Z @ 0x18011C4F4 (-s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSIT.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
        CImmersiveApplicationTransitionHelper *this,
        HWND *a2)
{
  int v4; // ebx
  unsigned int PropW; // eax
  unsigned int v6; // ebp
  char v7; // di
  __int64 v8; // rcx
  __int64 v9; // rcx

  v4 = 0;
  PropW = (unsigned int)GetPropW(a2[4], L"AppWindowTransitionType");
  v6 = PropW;
  v7 = PropW | 1;
  if ( *((_DWORD *)a2 + 6) != 1 )
    v7 = PropW;
  if ( (v7 & 1) != 0 )
  {
    v4 = DwmpBeginTransitionRequestWithGUID(75LL, &unk_180384BD8);
    if ( v4 >= 0 )
    {
      *((_DWORD *)this + 16) = 75;
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(
        v8,
        a2[4],
        (v6 != 0 ? 289406976 : 285212672) | ((v7 & 2) != 0 ? 262162 : 2097170),
        a2[6]);
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(v9, a2[5], 285212691LL, a2[6]);
    }
  }
  return (unsigned int)v4;
}
