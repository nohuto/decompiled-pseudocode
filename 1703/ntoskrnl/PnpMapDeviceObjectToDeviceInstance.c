/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x1404B8088
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
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
