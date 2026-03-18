/*
 * XREFs of RawShutdown @ 0x14071D3E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     RawScanDeletedList @ 0x140554840 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x1405F20D0 (IoUnregisterFileSystem.c)
 */

__int64 __fastcall RawShutdown(__int64 a1, IRP *a2)
{
  RawScanDeletedList();
  IoUnregisterFileSystem(RawDeviceDiskObject);
  IoUnregisterFileSystem(RawDeviceCdRomObject);
  IoUnregisterFileSystem(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceTapeObject);
  IoDeleteDevice(RawDeviceCdRomObject);
  IoDeleteDevice(RawDeviceDiskObject);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 1);
  return 0LL;
}
