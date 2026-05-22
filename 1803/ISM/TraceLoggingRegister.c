/*
 * XREFs of TraceLoggingRegister @ 0x180001078
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180003EC8 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     ?Instance@FeatureLogging@details@wil@@KAPEAV123@XZ @ 0x18002E478 (-Instance@FeatureLogging@details@wil@@KAPEAV123@XZ.c)
 *     ?Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x18003689C (-Provider@ControllerProcessorTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x18006F600 (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180074A24 (-Provider@RawInputProvidersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x18009B17C (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A4BB0 (-Instance@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

TLG_STATUS __stdcall TraceLoggingRegister(TraceLoggingHProvider hProvider)
{
  GUID v2; // xmm0
  signed int v3; // eax
  TLG_STATUS v4; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(GUID *)(*((_QWORD *)hProvider + 1) - 16LL);
  *((_QWORD *)hProvider + 5) = 0LL;
  *((_QWORD *)hProvider + 6) = 0LL;
  ProviderId = v2;
  v3 = EventRegister(&ProviderId, TlgEnableCallback, hProvider, (PREGHANDLE)hProvider + 4);
  v4 = v3;
  if ( v3 )
  {
    v4 = (unsigned __int16)v3 | 0x80070000;
    if ( v3 <= 0 )
      return v3;
  }
  else
  {
    EventSetInformation(
      *((_QWORD *)hProvider + 4),
      2LL,
      *((_QWORD *)hProvider + 1),
      **((unsigned __int16 **)hProvider + 1));
  }
  return v4;
}
