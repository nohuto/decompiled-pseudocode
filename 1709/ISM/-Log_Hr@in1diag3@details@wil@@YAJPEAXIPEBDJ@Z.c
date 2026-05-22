/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50
 * Callers:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88 (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ?StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ @ 0x18008CE60 (-StopActivity@DeviceAttached@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18008D47C (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?StopActivity@FinalizeControllerInitialization@RawInputProvidersTracing@@MEAAXXZ @ 0x18008D8E0 (-StopActivity@FinalizeControllerInitialization@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?StopActivity@DeviceRemoved@RawInputProvidersTracing@@MEAAXXZ @ 0x18008DEF0 (-StopActivity@DeviceRemoved@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?StopActivity@OnHolographicDisplayChanged@RawInputProvidersTracing@@MEAAXXZ @ 0x18008E660 (-StopActivity@OnHolographicDisplayChanged@RawInputProvidersTracing@@MEAAXXZ.c)
 *     ?Stop@OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z @ 0x18008EC20 (-Stop@OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z.c)
 *     ?Stop@?$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800969AC (-Stop@-$ActivityBase@VRawInputProvidersTracing@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Stop@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180097258 (-Stop@-$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x1800AF880 (-StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x1800AFF20 (-StopActivity@OpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x1800B05A0 (-StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@CloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x1800B0BC0 (-StopActivity@CloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ?StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1800B2940 (-StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1800B2F70 (-StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA1EC (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BA76C (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BB018 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003094 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
  return v4;
}
