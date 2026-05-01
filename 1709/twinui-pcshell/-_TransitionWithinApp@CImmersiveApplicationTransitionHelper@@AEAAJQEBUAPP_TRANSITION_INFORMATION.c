/*
 * XREFs of ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18003C360
 * Callers:
 *     ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18003BDC0 (-BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORM.c)
 * Callees:
 *     ?s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@@Z @ 0x18003C428 (-s_TransitionWindowWithRect@CImmersiveApplicationTransitionHelper@@AEAAXPEAUHWND__@@W4DWMTRANSIT.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
        CImmersiveApplicationTransitionHelper *this,
        HWND *a2)
{
  int v4; // edi
  unsigned int PropW; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  v4 = 0;
  PropW = (unsigned int)GetPropW(a2[4], L"AppWindowTransitionType");
  v6 = PropW;
  v7 = PropW | 1;
  if ( *((_DWORD *)a2 + 6) != 1 )
    v7 = PropW;
  if ( (v7 & 1) != 0 )
  {
    v4 = DwmpBeginTransitionRequestWithGUID(75LL, &unk_180221BF0);
    if ( v4 >= 0 )
    {
      if ( (~(v7 >> 1) & 1) != 0 )
      {
        v8 = 287309842LL;
        v9 = 291504146LL;
      }
      else
      {
        v8 = 285474834LL;
        v9 = 289669138LL;
      }
      *((_DWORD *)this + 18) = 75;
      if ( !v6 )
        v9 = (unsigned int)v8;
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(v8, a2[4], v9, a2[6]);
      CImmersiveApplicationTransitionHelper::s_TransitionWindowWithRect(v10, a2[5], 285212691LL, a2[6]);
    }
  }
  return (unsigned int)v4;
}
