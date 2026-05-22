/*
 * XREFs of ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x1800BE9B4
 * Callers:
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_NI@Z @ 0x1800BEAE0 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBUSPATIAL_NODE_ID@@_J2222W4Tr.c)
 *     ?GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@KPEBU3@PEBUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800BEE34 (-GetStaticNodePoses_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NOD.c)
 *     ?GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@2@Z @ 0x1800BEF24 (-GetStaticNodeForPose_@HolographicDriverClientContinuousTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_N.c)
 *     ?HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@QEAAXKKPEBXAEBU_GUID@@@Z @ 0x1800BF000 (-HolographicDriverHandleWrapper_DeviceIoControlFailed_@HolographicDriverClientContinuousTrace@@Q.c)
 *     ?StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1800BF0E0 (-StopActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800BF510 (-StartActivity@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU.c)
 *     ?StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ @ 0x1800BF6B0 (-StopActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAAXXZ.c)
 *     ?StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x1800BFAB8 (-StartActivity@DestroySpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@QEAAXAEB.c)
 *     ?NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z @ 0x1800BFC3C (-NoPoseReceivedYet_@HolographicDriverClientContinuousTrace@@QEAAXAEBUSPATIAL_NODE_ID@@J@Z.c)
 *     ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800BFD94 (--1-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800C006C (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1800C1840 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@AEBUXMFLOAT4X3@DirectX@@PEAU5@@Z @ 0x1800C4B30 (-GetStaticNodeForPose@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NO.c)
 *     ?GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@KPEBU5@PEAUSPATIAL_GRAPH_STATIC_NODE_POSE@@@Z @ 0x1800C4C50 (-GetStaticNodePoses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE.c)
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x1800C78E0 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 *     _lambda_2e90b6ae67ad76cbf474a8c31d64668a_::operator() @ 0x1800C7D00 (_lambda_2e90b6ae67ad76cbf474a8c31d64668a_--operator().c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800C9C10 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C9F3C (-Stop@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1800E1670 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

struct HolographicDriverClientContinuousTrace *HolographicDriverClientContinuousTrace::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(
         &`HolographicDriverClientContinuousTrace::Instance'::`2'::wrapper,
         0,
         &fPending,
         &Context)
    && fPending )
  {
    Context = &qword_180136998;
    qword_180136998 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_1801369B0 = (TraceLoggingHProvider)&`HolographicDriverClientContinuousTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    qword_1801369A0 = (__int64)qword_1801369B0;
    byte_1801369A8 = 1;
    TraceLoggingRegister(qword_1801369B0);
    dword_1801369AC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180136998 + 8))(&qword_180136998);
    InitOnceComplete(&`HolographicDriverClientContinuousTrace::Instance'::`2'::wrapper, 0, &qword_180136998);
  }
  return (struct HolographicDriverClientContinuousTrace *)Context;
}
