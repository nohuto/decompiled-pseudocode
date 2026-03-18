/*
 * XREFs of PnpValidateStringData @ 0x14014FF38
 * Callers:
 *     PnpValidateRegistryString @ 0x14014FF00 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1401F9854 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1401F99C0 (PnpValidateRegistryValue.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14058E87C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1405944B0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14069A874 (PiDevCfgMakeServiceBootStart.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateStringData(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
