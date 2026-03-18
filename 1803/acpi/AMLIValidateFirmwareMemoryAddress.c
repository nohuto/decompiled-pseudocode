/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C0044458
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C0080A9C (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C0046204 (AmlpValidateFirmwareMemoryAddress.c)
 */

__int64 AMLIValidateFirmwareMemoryAddress()
{
  return AmlpValidateFirmwareMemoryAddress();
}
