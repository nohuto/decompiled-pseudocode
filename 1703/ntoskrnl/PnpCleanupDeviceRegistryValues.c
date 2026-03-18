/*
 * XREFs of PnpCleanupDeviceRegistryValues @ 0x14056E118
 * Callers:
 *     PiBuildDeviceNodeInstancePath @ 0x14044C490 (PiBuildDeviceNodeInstancePath.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PpDeviceRegistration @ 0x1404D9BDC (PpDeviceRegistration.c)
 */

__int64 __fastcall PnpCleanupDeviceRegistryValues(__int64 a1)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  Buffer[1] = a1;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  RtlDeleteElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer);
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return PpDeviceRegistration(a1, 0LL, 0LL, 1);
}
