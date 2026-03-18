/*
 * XREFs of AMLIValidateFirmwareMemoryAddress @ 0x1C005AF00
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C00A0B5C (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall AMLIValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  return AmlpValidateFirmwareMemoryAddress(a1, a2);
}
