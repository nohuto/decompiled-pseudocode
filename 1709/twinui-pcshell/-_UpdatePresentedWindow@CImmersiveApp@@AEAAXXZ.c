/*
 * XREFs of ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800596D4
 * Callers:
 *     ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0004@@@Z @ 0x1800549B0 (-RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0316_0004@@@Z.c)
 *     ?HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ @ 0x180057250 (-HandleGhostAnimationWaitCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x180057280 (-HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180057780 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 * Callees:
 *     WPP_SF_Sd @ 0x180052138 (WPP_SF_Sd.c)
 *     ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x1800588F4 (-_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005A984 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005AD2C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18005B270 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005B7EC (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::_UpdatePresentedWindow(CImmersiveApp *this)
{
  HWND v1; // rsi
  CImmersiveApp::CImmersiveWindowCollection *v3; // rdi
  __int64 v4; // r8
  bool v5; // dl
  char v6[4]; // [rsp+20h] [rbp-18h]
  char v7[4]; // [rsp+20h] [rbp-18h]

  v1 = (HWND)*((_QWORD *)this + 48);
  if ( v1
    && (v3 = (CImmersiveApp *)((char *)this + 264), !*((_DWORD *)this + 115))
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 47) + 240LL))(*((_QWORD *)this + 47)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_DWORD *)v6 = *((_DWORD *)this + 138);
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
        *((const wchar_t **)this + 68),
        *(_DWORD *)v6);
    }
    CImmersiveApp::_SetApplicationWindowSynch((__int64)this, v1, v4, *((_DWORD *)this + 98));
    CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(v3);
  }
  else if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 264))
         && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost((CImmersiveApp *)((char *)this + 264)) )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_DWORD *)v7 = *((_DWORD *)this + 138);
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
        *((const wchar_t **)this + 68),
        *(_DWORD *)v7);
    }
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp *)((char *)this + 264), v5);
  }
}
