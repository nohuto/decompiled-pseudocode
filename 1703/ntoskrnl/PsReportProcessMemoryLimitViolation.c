/*
 * XREFs of PsReportProcessMemoryLimitViolation @ 0x1406E1060
 * Callers:
 *     MiChargeProcessCommitment @ 0x1400D0ED0 (MiChargeProcessCommitment.c)
 * Callees:
 *     PspSendJobNotification @ 0x140039434 (PspSendJobNotification.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404797EC (PspUnlockJobMemoryLimitsShared.c)
 */

__int64 PsReportProcessMemoryLimitViolation()
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v3; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  result = Process[1].Affinity.Bitmap[16];
  v3 = *(_QWORD *)(result + 816);
  if ( v3 && (*(_DWORD *)(v3 + 256) & 0x100) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v3 + 1032, 0LL);
    if ( *(_QWORD *)(v3 + 456) && (*(_DWORD *)(v3 + 876) & 0x200) != 0 && (Process[1].DirectoryTableBase & 0x24) == 4 )
    {
      _InterlockedOr((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0x20u);
      PspSendJobNotification(v3, 9LL, (int)Process[1].Header.WaitListHead.Flink, 1);
    }
    return PspUnlockJobMemoryLimitsShared(v3, (__int64)CurrentThread);
  }
  return result;
}
