/*
 * XREFs of ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x18014FF10
 * Callers:
 *     ?EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x18014FE60 (-EnterFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_MODE@@W4FULL_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800F5440 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_a0147b3457b18c7355ad2e033d70a460___ @ 0x18014F060 (ShellPositionerHelpers--PerformCallbackOnView__lambda_a0147b3457b18c7355ad2e033d70a460___.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F3DC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18014F850 (--1FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180150D9C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPosit.c)
 *     ?StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180150FFC (-StartActivity@FSMEnterFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180151734 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 */

__int64 __fastcall CFullScreenManager::EnterFullScreenForView(
        CFullScreenManager *a1,
        struct IApplicationView *a2,
        __int64 a3,
        unsigned int a4)
{
  int IsViewFullScreen; // ebx
  __int64 v8; // rdx
  IUnknown *v9; // rcx
  HRESULT Service; // eax
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int128 ppvOut; // [rsp+28h] [rbp-D8h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v17[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  IsViewFullScreen = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v15);
  if ( IsViewFullScreen >= 0 )
  {
    if ( !v15 )
    {
      IsViewFullScreen = -2147024809;
      v8 = 138LL;
      goto LABEL_3;
    }
    IsViewFullScreen = CFullScreenManager::IsViewFullScreen(a1, a2, &v16);
    if ( IsViewFullScreen < 0 )
    {
      v8 = 141LL;
      goto LABEL_3;
    }
    if ( v16 )
    {
      IsViewFullScreen = -2147024809;
      v8 = 142LL;
      goto LABEL_3;
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v17,
      (__int64)"FSMEnterFullScreenForView");
    v17[0] = &FullScreenManagerTelemetry::FSMEnterFullScreenForView::`vftable';
    FullScreenManagerTelemetry::FSMEnterFullScreenForView::StartActivity(v17, a2, a4);
    LOBYTE(v13) = 0;
    wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsageToService();
    v9 = (IUnknown *)*((_QWORD *)a1 - 9);
    *((_QWORD *)&ppvOut + 1) = &v13;
    *(_QWORD *)&ppvOut = a2;
    ShellPositionerHelpers::PerformCallbackOnView__lambda_a0147b3457b18c7355ad2e033d70a460___(v9, (__int64)a2, &ppvOut);
    if ( !(_BYTE)v13 )
    {
      *(_QWORD *)&ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Service = IUnknown_QueryService(
                  *((IUnknown **)a1 - 9),
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  (void **)&ppvOut);
      IsViewFullScreen = Service;
      if ( Service < 0 )
      {
        v11 = 167LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)Service);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_18:
        FullScreenManagerTelemetry::FSMEnterFullScreenForView::~FSMEnterFullScreenForView((FullScreenManagerTelemetry::FSMEnterFullScreenForView *)v17);
        return (unsigned int)IsViewFullScreen;
      }
      Service = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(*(_QWORD *)ppvOut + 24LL))(
                  ppvOut,
                  a2,
                  3LL);
      IsViewFullScreen = Service;
      if ( Service < 0 )
      {
        v11 = 168LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
    IsViewFullScreen = 0;
    goto LABEL_18;
  }
  v8 = 137LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)IsViewFullScreen);
  return (unsigned int)IsViewFullScreen;
}
