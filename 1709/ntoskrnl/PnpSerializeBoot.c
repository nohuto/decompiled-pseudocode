/*
 * XREFs of PnpSerializeBoot @ 0x14015B924
 * Callers:
 *     NtSerializeBoot @ 0x1405EF98C (NtSerializeBoot.c)
 *     IoInitSystem @ 0x14082FC9C (IoInitSystem.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpSerializeBoot()
{
  NTSTATUS result; // eax

  result = -1073741823;
  if ( PnPBootDriversInitialized )
    return KeWaitForSingleObject(&PnpSystemDeviceEnumerationComplete, Executive, 0, 0, 0LL);
  return result;
}
