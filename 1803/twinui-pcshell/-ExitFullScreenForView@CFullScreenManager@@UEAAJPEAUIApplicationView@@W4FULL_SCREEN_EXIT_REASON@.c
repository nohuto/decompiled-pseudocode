/*
 * XREFs of ?ExitFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x180150180
 * Callers:
 *     ?ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801500E0 (-ExitFullScreen@CFullScreenManager@@UEAAJPEAUIImmersiveApplication@@W4FULL_SCREEN_EXIT_REASON@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800F5440 (-IsViewFullScreen@CFullScreenManager@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18014EB84 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ShellPositionerHelpers::PerformCallbackOnView__lambda_c3737f3ad336e56436bbe3e31d4979f5___ @ 0x18014F19C (ShellPositionerHelpers--PerformCallbackOnView__lambda_c3737f3ad336e56436bbe3e31d4979f5___.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F3DC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ @ 0x18014F878 (--1FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180150D9C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPosit.c)
 *     ?StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W4FULL_SCREEN_EXIT_REASON@@@Z @ 0x1801511E8 (-StartActivity@FSMExitFullScreenForView@FullScreenManagerTelemetry@@QEAAXPEAUIApplicationView@@W.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180151734 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 */

__int64 __fastcall CFullScreenManager::ExitFullScreenForView(
        CFullScreenManager *a1,
        FullScreenPositionerHelpers *a2,
        unsigned int a3)
{
  struct IApplicationView *v6; // rdx
  unsigned int v7; // ebx
  IUnknown *v8; // rcx
  HRESULT Service; // eax
  __int64 v10; // rdx
  int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int128 ppvOut; // [rsp+28h] [rbp-D8h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v15[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( (int)CFullScreenManager::IsViewFullScreen(a1, a2, &v14) >= 0 && v14 )
  {
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v15,
      (__int64)"FSMExitFullScreenForView");
    v15[0] = &FullScreenManagerTelemetry::FSMExitFullScreenForView::`vftable';
    FullScreenManagerTelemetry::FSMExitFullScreenForView::StartActivity(v15, a2, a3);
    if ( FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(a2, v6) )
    {
      v7 = -2147024809;
LABEL_11:
      FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView((FullScreenManagerTelemetry::FSMExitFullScreenForView *)v15);
      return v7;
    }
    LOBYTE(v12) = 0;
    wil::Feature<__WilFeatureTraits_Feature_AddFullScreenOptionalHandlingToPositioners>::ReportUsageToService();
    v8 = (IUnknown *)*((_QWORD *)a1 - 9);
    *((_QWORD *)&ppvOut + 1) = &v12;
    *(_QWORD *)&ppvOut = a2;
    ShellPositionerHelpers::PerformCallbackOnView__lambda_c3737f3ad336e56436bbe3e31d4979f5___(v8, (__int64)a2, &ppvOut);
    if ( !(_BYTE)v12 )
    {
      *(_QWORD *)&ppvOut = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Service = IUnknown_QueryService(
                  *((IUnknown **)a1 - 9),
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                  (void **)&ppvOut);
      v7 = Service;
      if ( Service < 0 )
      {
        v10 = 206LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
          (const char *)(unsigned int)Service);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_11;
      }
      Service = (*(__int64 (__fastcall **)(_QWORD, FullScreenPositionerHelpers *, __int64))(*(_QWORD *)ppvOut + 32LL))(
                  ppvOut,
                  a2,
                  3LL);
      v7 = Service;
      if ( Service < 0 )
      {
        v10 = 207LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    }
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v15);
    FullScreenManagerTelemetry::FSMExitFullScreenForView::~FSMExitFullScreenForView((FullScreenManagerTelemetry::FSMExitFullScreenForView *)v15);
  }
  return 0LL;
}
