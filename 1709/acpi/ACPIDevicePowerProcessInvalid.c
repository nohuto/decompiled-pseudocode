/*
 * XREFs of ACPIDevicePowerProcessInvalid @ 0x1C0048AC0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteRequest @ 0x1C0005908 (ACPIDeviceCompleteRequest.c)
 */

__int64 __fastcall ACPIDevicePowerProcessInvalid(__int64 a1)
{
  *(_DWORD *)(a1 + 256) = -1073741585;
  ACPIDeviceCompleteRequest((struct _SLIST_ENTRY *)a1);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  AcpiPowerDpcFlags |= 2u;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  return 3221225711LL;
}
