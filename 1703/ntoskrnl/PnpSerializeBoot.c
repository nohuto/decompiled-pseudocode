/*
 * XREFs of PnpSerializeBoot @ 0x140167714
 * Callers:
 *     NtSerializeBoot @ 0x1405D3C30 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x140809ED0 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
