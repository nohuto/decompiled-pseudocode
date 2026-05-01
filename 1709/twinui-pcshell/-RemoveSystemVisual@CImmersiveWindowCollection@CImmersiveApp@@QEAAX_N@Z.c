/*
 * XREFs of ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x18005AD2C
 * Callers:
 *     ?OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z @ 0x180055070 (-OnViewReadinessChanged@CImmersiveApp@@UEAAJPEAUITaskWindow@@_N@Z.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800564F0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180057050 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180057290 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x1800583A0 (-IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1800596D4 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x18005A6E0 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005BA88 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 * Callees:
 *     WPP_SF_Sd @ 0x180052138 (WPP_SF_Sd.c)
 *     ?SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005B7EC (-SchedulePresentedWindowChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     ?EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18005BFD8 (-EnsurePositionOffsetAsync@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // r9
  char v3[4]; // [rsp+20h] [rbp-18h]

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v2 = *((_QWORD *)this + 18);
    *(_DWORD *)v3 = *(_DWORD *)(v2 + 552);
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      &WPP_6f54c26325303d06ba2693269ff4d199_Traceguids,
      *(const wchar_t **)(v2 + 544),
      *(_DWORD *)v3);
  }
  if ( *((_DWORD *)this + 48) == 2 )
    *((_DWORD *)this + 48) = 0;
  if ( *((_QWORD *)this + 20) )
    (*(void (__fastcall **)(_QWORD))(***((_QWORD ***)this + 19) + 72LL))(**((_QWORD **)this + 19));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 17) + 40LL))(*((_QWORD *)this + 17), 0LL);
  CImmersiveApp::CImmersiveWindowCollection::EnsurePositionOffsetAsync(this);
  CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged(this);
  CSplashScreen::OnSystemVisualChanged(*((_QWORD *)this + 29), 0LL);
}
