/*
 * XREFs of ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18003B0F8
 * Callers:
 *     ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18003AB50 (-BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORM.c)
 * Callees:
 *     ?s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@@Z @ 0x18003B1C8 (-s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSIT.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
        CImmersiveApplicationTransitionHelper *this,
        HWND *a2)
{
  int v4; // esi
  unsigned int PropW; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r8d
  __int64 v11; // rcx

  v4 = 0;
  PropW = (unsigned int)GetPropW(a2[4], L"AppWindowTransitionType");
  v6 = PropW;
  v7 = PropW | 1;
  if ( *((_DWORD *)a2 + 6) != 1 )
    v7 = PropW;
  if ( (v7 & 1) != 0 )
  {
    v4 = DwmpBeginTransitionRequestWithGUID(75LL, &unk_1801C8EE0);
    if ( v4 >= 0 )
    {
      v9 = v6 != 0 ? 289406976 : 285212672;
      if ( (~(v7 >> 1) & 1) != 0 )
        v10 = v9 | 0x200000;
      else
        v10 = v9 | 0x40000;
      *((_DWORD *)this + 14) = 75;
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(v8, a2[4], v10 | 0x12u, a2[6]);
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(v11, a2[5], 285212691LL, a2[6]);
    }
  }
  return (unsigned int)v4;
}
