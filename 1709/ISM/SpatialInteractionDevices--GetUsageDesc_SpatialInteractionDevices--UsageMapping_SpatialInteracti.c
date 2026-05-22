/*
 * XREFs of SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x18007A114
 * Callers:
 *     ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x180078A48 (-ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___(
        _OWORD *a1,
        _WORD *a2,
        __int64 a3)
{
  __int16 v3; // ax

  *a1 = *(_OWORD *)a3;
  if ( (a2[53] != 1 || a2[52] != 15)
    && a2[53] == *(_WORD *)(a3 + 20)
    && a2[52] == *(_WORD *)(a3 + 22)
    && ((v3 = *(_WORD *)(a3 + 16)) == 0 && !*(_WORD *)(a3 + 18) || a2[44] == v3 && a2[45] == *(_WORD *)(a3 + 18)) )
  {
    *a1 = *(_OWORD *)(a3 + 24);
  }
  return a1;
}
