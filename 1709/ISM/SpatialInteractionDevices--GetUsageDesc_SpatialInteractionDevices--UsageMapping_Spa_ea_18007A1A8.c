/*
 * XREFs of SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___ @ 0x18007A1A8
 * Callers:
 *     ?ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z @ 0x180078A48 (-ListSupportedValues@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@IPEAPEAUHSTRING__@@@Z.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall SpatialInteractionDevices::GetUsageDesc_SpatialInteractionDevices::UsageMapping_SpatialInteractionDevices::UsageDesc_SpatialInteractionDevices::BitUsage_enum_SpatialInteractionDevices::ButtonFlags____1___(
        _OWORD *a1,
        _WORD *a2)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int16 v5; // ax

  *a1 = *(_OWORD *)&off_1800D98D0;
  if ( a2[53] != 1 || a2[52] != 15 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( 1 )
    {
      if ( a2[53] == *(_WORD *)((char *)&off_1800D98D0 + v4 + 20)
        && a2[52] == *(_WORD *)((char *)&off_1800D98D0 + v4 + 22) )
      {
        v5 = *(_WORD *)((char *)&off_1800D98D0 + v4 + 16);
        if ( !v5 && !*(_WORD *)((char *)&off_1800D98D0 + v4 + 18) )
          break;
        if ( a2[44] == v5 && a2[45] == *(_WORD *)((char *)&off_1800D98D0 + v4 + 18) )
          break;
      }
      ++v3;
      v4 += 24LL;
      if ( v4 >= 0x18 )
        return a1;
    }
    *a1 = *(_OWORD *)(&off_1800D98D0 + 3 * v3 + 3);
  }
  return a1;
}
