/*
 * XREFs of RtlpHpAcquireLockShared @ 0x1402975A4
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14029B8A4 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLargeLockAcquireShared @ 0x14029ED38 (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (_DWORD)a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, a2);
  return -1;
}
