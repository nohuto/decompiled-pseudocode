/*
 * XREFs of RawShutdown @ 0x1406E4FF0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     RawScanDeletedList @ 0x140422BA8 (RawScanDeletedList.c)
 *     IoUnregisterFileSystem @ 0x14059B5D0 (IoUnregisterFileSystem.c)
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
