/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x1405DC3A8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006D500 (RtlInsertElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

__int64 __fastcall PnpMapDeviceObjectToDeviceInstance(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a1;
  Buffer[1] = a2;
  ExAcquireFastMutex(&PnpDeviceReferenceTableLock);
  v2 = RtlInsertElementGenericTableAvl(&PnpDeviceReferenceTable, Buffer, 0x10u, 0LL) == 0LL ? 0xC0000001 : 0;
  KeReleaseGuardedMutex(&PnpDeviceReferenceTableLock);
  return v2;
}
