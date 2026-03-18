/*
 * XREFs of FsRtlFastUnlockAllByKey @ 0x1401E3470
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAllByKey(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context)
{
  return FsRtlPrivateFastUnlockAll(
           (__int64)FileLock,
           (_RTL_SPLAY_LINKS *)FileObject,
           ProcessId,
           Key,
           1,
           (__int64)Context);
}
