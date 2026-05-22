/*
 * XREFs of ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A1100
 * Callers:
 *     SpatialInteractionDevices::ReadPosePosition @ 0x18009D9DC (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadPoseOrientation @ 0x18009DA9C (SpatialInteractionDevices--ReadPoseOrientation.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1800C1840 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 *     ?HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@PEAX@Z @ 0x1800C1C94 (-HandlePropertyRequestCompletion@Holographic@Internal@Windows@@YAXAEAV-$map@PEAVV2PropertyReques.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C70E0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800C74E0 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 * Callees:
 *     ?_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z @ 0x1800A10C0 (-_FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD01PEAD@Z.c)
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
    JUMPOUT(0x1800A112ELL);
  }
  return 0;
}
