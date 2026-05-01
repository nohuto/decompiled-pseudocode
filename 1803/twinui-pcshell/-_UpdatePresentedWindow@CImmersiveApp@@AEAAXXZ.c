/*
 * XREFs of ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x180132104
 * Callers:
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0004@@@Z @ 0x18009DCD0 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0318_0004@@@Z.c)
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x18012EA40 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x18012EC30 (-HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1801303A0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005C1A8 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005CE5C (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005D3A0 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005DC0C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18012D660 (-CanShowPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x180131DE8 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     WPP_SF_Sd @ 0x180132780 (WPP_SF_Sd.c)
 */

void __fastcall CImmersiveApp::_UpdatePresentedWindow(CImmersiveApp *this)
{
  HWND v1; // rsi
  CImmersiveApp::CImmersiveWindowCollection *v2; // rdi
  int v4; // r8d
  int v5; // edx
  int v6; // r8d

  v1 = (HWND)*((_QWORD *)this + 48);
  v2 = (CImmersiveApp *)((char *)this + 264);
  if ( v1
    && CImmersiveApp::CImmersiveWindowCollection::CanShowPendingApplicationWindow((CImmersiveApp *)((char *)this + 264)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14,
        (unsigned int)&WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
        *((_QWORD *)this + 68),
        *((_DWORD *)this + 138));
    CImmersiveApp::_SetApplicationWindowSynch((__int64)this, v1, v4, *((_DWORD *)this + 98));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(v2);
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v2)
         && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v2, v5, v6) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15,
        (unsigned int)&WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
        *((_QWORD *)this + 68),
        *((_DWORD *)this + 138));
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v2);
  }
}
