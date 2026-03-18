/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x140792E40
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  PVOID *v6; // rax
  SE_LOGON_SESSION_TERMINATED_ROUTINE *v7; // r8
  PVOID *v8; // rdx
  PVOID *v9; // r9
  bool v10; // zf

  v1 = 0;
  if ( !CallbackRoutine )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v5 = (PVOID *)SeFileSystemNotifyRoutinesHead;
  v6 = &SeFileSystemNotifyRoutinesHead;
  if ( !SeFileSystemNotifyRoutinesHead )
    goto LABEL_11;
  while ( 1 )
  {
    v7 = (SE_LOGON_SESSION_TERMINATED_ROUTINE *)v5[1];
    v8 = v5;
    v9 = v6;
    v10 = v7 == CallbackRoutine;
    if ( v7 == CallbackRoutine )
      break;
    v6 = v5;
    v5 = (PVOID *)*v5;
    if ( !v5 )
    {
      v10 = v7 == CallbackRoutine;
      break;
    }
  }
  if ( v10 )
    v8 = v9;
  if ( v5 )
  {
    *v8 = *v5;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
LABEL_11:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741275;
  }
  return v1;
}
