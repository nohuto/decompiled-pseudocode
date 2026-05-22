/*
 * XREFs of ?GetDynamicNodeButtonLatencyMicroseconds@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAH@Z @ 0x1800D2C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeButtonLatencyMicroseconds(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        int *a3)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeButtonLatencyMicroseconds(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 16),
           a2,
           a3);
}
