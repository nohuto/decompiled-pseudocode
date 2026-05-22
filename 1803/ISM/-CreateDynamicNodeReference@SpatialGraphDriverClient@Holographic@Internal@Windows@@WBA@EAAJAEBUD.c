/*
 * XREFs of ?CreateDynamicNodeReference@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x1800D2C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::CreateDynamicNodeReference(
        __int64 a1,
        const struct Windows::Internal::Holographic::DynamicNodeInfo *a2,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference **a3)
{
  return Windows::Internal::Holographic::SpatialGraphDriverClient::CreateDynamicNodeReference(
           (Windows::Internal::Holographic::SpatialGraphDriverClient *)(a1 - 16),
           a2,
           a3);
}
