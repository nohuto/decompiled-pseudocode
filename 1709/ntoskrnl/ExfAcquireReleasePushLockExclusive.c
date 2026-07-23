/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x1401324CC
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x1400E091C (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x1401261EC (PspLockUnlockProcessExclusive.c)
 *     PfpRpCHashDeleteEntries @ 0x14043E6DC (PfpRpCHashDeleteEntries.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140450E0C (EtwpUpdateLoggerSecurityDescriptor.c)
 *     AlpcReferenceBlobByHandle @ 0x140462188 (AlpcReferenceBlobByHandle.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PsLookupThreadByThreadId @ 0x1404C5690 (PsLookupThreadByThreadId.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140716250 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockExclusive @ 0x1400A7EC0 (ExfReleasePushLockExclusive.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 */

char __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  PRTL_BALANCED_NODE v2; // rbx
  char result; // al

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, (__int64)v2, (__int16 *)BugCheckParameter2);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
