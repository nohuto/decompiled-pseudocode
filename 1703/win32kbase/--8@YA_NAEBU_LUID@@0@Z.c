/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0068A68
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0068910 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0068998 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F47D8 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
