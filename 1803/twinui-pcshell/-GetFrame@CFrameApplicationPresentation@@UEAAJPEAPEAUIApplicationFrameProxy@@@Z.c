/*
 * XREFs of ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013F50
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180049130 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180049F20 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x18004C330 (-GetFrameInternal@CImmersiveApp@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA?AW4ZBID@@XZ @ 0x18005DC88 (-GetApplicationBand@CImmersiveWindowCollection@CImmersiveApp@@QEBA-AW4ZBID@@XZ.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x1800879B8 (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::GetFrame(
        CFrameApplicationPresentation *this,
        struct IApplicationFrameProxy **a2)
{
  struct IApplicationFrameProxy *v4; // rcx

  if ( *((_DWORD *)this + 14) == 2 )
    return 2147947423LL;
  v4 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IApplicationFrameProxy *)*((_QWORD *)this + 15);
  }
  *a2 = v4;
  return 0LL;
}
