/*
 * XREFs of FsRtlCancellableWaitForSingleObject @ 0x14054B3A0
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x14015EB9C (FsRtlpWaitOnIrp.c)
 * Callees:
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14054B3E0 (FsRtlCancellableWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForSingleObject(PVOID Object, PLARGE_INTEGER Timeout, PIRP Irp)
{
  PVOID v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = Object;
  return FsRtlCancellableWaitForMultipleObjects(1u, &v4, WaitAll, Timeout, 0LL, Irp);
}
