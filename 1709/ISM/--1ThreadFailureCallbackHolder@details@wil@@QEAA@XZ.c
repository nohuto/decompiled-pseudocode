/*
 * XREFs of ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x18008CA88
 * Callers:
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18008D264 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1FinalizeControllerInitialization@RawInputProvidersTracing@@QEAA@XZ @ 0x18008DCD0 (--1FinalizeControllerInitialization@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1DeviceRemoved@RawInputProvidersTracing@@QEAA@XZ @ 0x18008E2E8 (--1DeviceRemoved@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ??1OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAA@XZ @ 0x18008EA58 (--1OnHolographicDisplayChanged@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092FFC (-DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0 (-FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 *     _lambda_f0fb12180c22145fe0b52491eb1f97bd_::operator() @ 0x180093BA4 (_lambda_f0fb12180c22145fe0b52491eb1f97bd_--operator().c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x180094A70 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     ??1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x1800AFC70 (--1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ.c)
 *     ??1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x1800B0338 (--1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ.c)
 *     ??1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x1800B2D58 (--1CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ.c)
 *     ??1DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ @ 0x1800B3388 (--1DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAA@XZ.c)
 *     ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x1800B41E8 (-CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z.c)
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800B67B0 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x1800B6A84 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 *     ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x1800B6D94 (-Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@W4Handle.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18008CA50 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder(
        wil::details::ThreadFailureCallbackHolder *this)
{
  _QWORD *i; // rax
  wil::details::ThreadFailureCallbackHolder *v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (__int64)"internal\\sdk\\inc\\wil\\result.h",
        (const char *)0x8007029CLL);
    *((_DWORD *)this + 6) = 0;
    for ( i = *(_QWORD **)this; *i; *(_QWORD *)this = i )
    {
      v3 = **(wil::details::ThreadFailureCallbackHolder ***)this;
      if ( v3 == this )
      {
        **(_QWORD **)this = *((_QWORD *)this + 2);
        break;
      }
      i = (_QWORD *)((char *)v3 + 16);
    }
    *(_QWORD *)this = 0LL;
  }
}
