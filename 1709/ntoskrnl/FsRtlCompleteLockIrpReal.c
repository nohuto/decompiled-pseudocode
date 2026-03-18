/*
 * XREFs of FsRtlCompleteLockIrpReal @ 0x1401577FC
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x1401053A4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateLock @ 0x140105960 (FsRtlPrivateLock.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106C24 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlUninitializeFileLock @ 0x14012FC00 (FsRtlUninitializeFileLock.c)
 *     FsRtlProcessFileLock @ 0x1401576D0 (FsRtlProcessFileLock.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E77B0 (FsRtlPrivateCancelFileLockIrp.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlCompleteLockIrpReal(
        __int64 (__fastcall *a1)(__int64, IRP *),
        __int64 a2,
        IRP *a3,
        NTSTATUS a4,
        NTSTATUS *a5,
        __int64 a6)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a6 )
      *(_QWORD *)(a6 + 120) = 0LL;
    a3->IoStatus.Status = a4;
    result = a1(a2, a3);
    *a5 = result;
  }
  else
  {
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 1);
    result = (__int64)a5;
    *a5 = a4;
  }
  return result;
}
