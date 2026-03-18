/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C005BA68
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00A37AC (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C0027AA8 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 __fastcall AMLIValidateFirmwareMemoryAddress(const void **a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
