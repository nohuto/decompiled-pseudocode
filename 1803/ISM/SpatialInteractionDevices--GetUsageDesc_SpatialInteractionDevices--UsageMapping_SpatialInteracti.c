/*
 * XREFs of SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::ValueUsage__1___ @ 0x18009F844
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x18009E954 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
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
  if ( (a2[33] != 1 || a2[32] != 15)
    && a2[33] == *(_WORD *)(a3 + 20)
    && a2[32] == *(_WORD *)(a3 + 22)
    && ((v3 = *(_WORD *)(a3 + 16)) == 0 && !*(_WORD *)(a3 + 18) || a2[22] == v3 && a2[23] == *(_WORD *)(a3 + 18)) )
  {
    *a1 = *(_OWORD *)(a3 + 24);
  }
  return a1;
}
