/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0052E00
 * Callers:
 *     ?GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z @ 0x1C0052D90 (-GetPerMonitorData@@YAPEAUtagPER_MONITOR_DATA@@U_LUID@@I@Z.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00CC738 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00D0670 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C00D2AD0 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
