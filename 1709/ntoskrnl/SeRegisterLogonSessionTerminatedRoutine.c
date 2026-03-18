/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutine @ 0x14072ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall SeRegisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  _QWORD *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !CallbackRoutine )
    return -1073741811;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x53466553u);
  if ( !PoolWithTag )
    return -1073741670;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *PoolWithTag = SeFileSystemNotifyRoutinesHead;
  PoolWithTag[1] = CallbackRoutine;
  SeFileSystemNotifyRoutinesHead = PoolWithTag;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0;
}
