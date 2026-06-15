/*
 * XREFs of ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800D8DF4
 * Callers:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x1800D89B0 (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800D8E14 (-GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800D9850 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x1800D9DF0 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800DA2E0 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800DA400 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800DA724 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x1800DAB44 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
        __int64 a1,
        __int64 a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  return a2 + 16;
}
