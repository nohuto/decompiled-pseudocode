/*
 * XREFs of RawShutdown @ 0x140780C10
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     RawScanDeletedList @ 0x1404953E0 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x1405F3EA0 (IoUnregisterFileSystem.c)
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
