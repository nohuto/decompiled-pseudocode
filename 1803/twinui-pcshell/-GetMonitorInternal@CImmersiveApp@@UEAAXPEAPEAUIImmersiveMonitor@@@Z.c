/*
 * XREFs of ?GetMonitorInternal@CImmersiveApp@@UEAAXPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C7B0
 * Callers:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180004038 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?GetMonitor@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18004C540 (-GetMonitor@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x18008BE60 (-s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::GetMonitorInternal(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  struct IImmersiveMonitor *v4; // rcx

  if ( *((_QWORD *)this + 78) )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 78);
    *a2 = (struct IImmersiveMonitor *)*((_QWORD *)this + 78);
  }
  else
  {
    v4 = (struct IImmersiveMonitor *)*((_QWORD *)this + 77);
    if ( v4 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v4 + 8LL))(v4);
      v4 = (struct IImmersiveMonitor *)*((_QWORD *)this + 77);
    }
    *a2 = v4;
  }
}
