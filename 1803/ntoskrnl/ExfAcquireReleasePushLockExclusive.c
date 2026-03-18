/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x1400C5D80
 * Callers:
 *     PspLockUnlockProcessExclusive @ 0x1400C5D40 (PspLockUnlockProcessExclusive.c)
 *     EtwpLockUnlockBufferList @ 0x1400D3E98 (EtwpLockUnlockBufferList.c)
 *     PfpRpCHashDeleteEntries @ 0x1404930FC (PfpRpCHashDeleteEntries.c)
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     AlpcReferenceBlobByHandle @ 0x1404D03B0 (AlpcReferenceBlobByHandle.c)
 *     PsLookupThreadByThreadId @ 0x1404D75A0 (PsLookupThreadByThreadId.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14077A398 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1407B292C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockExclusive @ 0x140063AA0 (ExfReleasePushLockExclusive.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 */

signed __int64 __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  __int64 v2; // rbx
  signed __int64 result; // rax

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (ULONG_PTR)BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
