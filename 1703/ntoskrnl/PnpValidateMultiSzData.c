/*
 * XREFs of PnpValidateMultiSzData @ 0x14014FC5C
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x14014FC24 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x1401F99C0 (PnpValidateRegistryValue.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405944B0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406991C4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpValidateMultiSzData(_WORD *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8

  result = 0LL;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( !a1[v3 - 1] && !a1[v3 - 2] )
      return 1LL;
  }
  if ( a2 == 2 && !*a1 )
    return 1LL;
  return result;
}
