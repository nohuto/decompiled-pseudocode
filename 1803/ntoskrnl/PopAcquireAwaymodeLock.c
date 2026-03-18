/*
 * XREFs of PopAcquireAwaymodeLock @ 0x140470BD4
 * Callers:
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x14075D6C0 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
