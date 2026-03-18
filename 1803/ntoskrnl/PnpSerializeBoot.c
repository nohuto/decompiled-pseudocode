/*
 * XREFs of PnpSerializeBoot @ 0x1401863D4
 * Callers:
 *     NtSerializeBoot @ 0x140653D54 (NtSerializeBoot.c)
 *     IoInitSystem @ 0x1408A6040 (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
