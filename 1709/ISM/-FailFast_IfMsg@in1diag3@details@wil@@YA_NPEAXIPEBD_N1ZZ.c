/*
 * XREFs of ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18007BCB4
 * Callers:
 *     SpatialInteractionDevices::ReadPosePosition @ 0x180078250 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadPoseOrientation @ 0x180078310 (SpatialInteractionDevices--ReadPoseOrientation.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B76EC (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B7AD8 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 * Callees:
 *     ?_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z @ 0x18007BC74 (-_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z.c)
 */

bool wil::details::in1diag3::FailFast_IfMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int16 *a5,
        const char *a6,
        ...)
{
  const char *retaddr; // [rsp+38h] [rbp+0h]

  if ( (_BYTE)a4 )
  {
    wil::details::in1diag3::_FailFast_UnexpectedMsg(this, a2, a3, retaddr, a5, (char *)&a6);
    JUMPOUT(0x18007BCE2LL);
  }
  return 0;
}
