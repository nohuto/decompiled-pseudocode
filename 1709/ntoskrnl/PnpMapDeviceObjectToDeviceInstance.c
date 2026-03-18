/*
 * XREFs of PnpMapDeviceObjectToDeviceInstance @ 0x140595710
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
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
