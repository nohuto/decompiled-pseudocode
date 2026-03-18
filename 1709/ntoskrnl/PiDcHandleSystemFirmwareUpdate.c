/*
 * XREFs of PiDcHandleSystemFirmwareUpdate @ 0x1406C33CC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     PiDcContainerRequiresConfiguration @ 0x1405C60D8 (PiDcContainerRequiresConfiguration.c)
 */

__int64 PiDcHandleSystemFirmwareUpdate()
{
  return PiDcContainerRequiresConfiguration((wchar_t *)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
}
