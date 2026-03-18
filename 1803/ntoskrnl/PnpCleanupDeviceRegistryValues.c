/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x1405C9DB0
 * Callers:
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1405E4F04 (PiBuildDeviceNodeInstancePath.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     PpDeviceRegistration @ 0x1405CC4FC (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  __int64 v2; // r9
  __int64 Buffer; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  Buffer = 0LL;
  v5 = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, &Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  LOBYTE(v2) = 1;
  return PpDeviceRegistration(a1, 0LL, 0LL, v2, Buffer, v5);
}
