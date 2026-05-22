/*
 * XREFs of ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4
 * Callers:
 *     ?SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N@Z @ 0x18006E710 (-SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N@Z.c)
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x18006E7A0 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x18006EC74 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18006EE1C (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z @ 0x18006F23C (-ControllerDeviceUpdate_@RawInputProvidersTracing@@QEAAXJKPEAUDeviceInfo@@@Z.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x18006F398 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x18006F420 (-FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006F568 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x180070404 (-DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ.c)
 *     ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180070520 (-AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x180070E20 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180070FF0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180071130 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z @ 0x1800716E0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCControllerDeviceInfo@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180071BE0 (-NotifyFailure@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_.c)
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800754DC (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 *     ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x180075890 (-ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800E1670 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

struct RawInputProvidersTracing *RawInputProvidersTracing::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801362D8;
    qword_1801362D8 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1801362F0 = (TraceLoggingHProvider)&`RawInputProvidersTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    qword_1801362E0 = (__int64)qword_1801362F0;
    byte_1801362E8 = 1;
    TraceLoggingRegister(qword_1801362F0);
    dword_1801362EC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1801362D8 + 8))(&qword_1801362D8);
    InitOnceComplete(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 0, &qword_1801362D8);
  }
  return (struct RawInputProvidersTracing *)Context;
}
