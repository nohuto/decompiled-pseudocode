/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1406F7350
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeUnregisterLogonSessionTerminatedRoutineEx(PVOID a1, PVOID a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v7; // rbx
  PVOID *v8; // rdx

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v7 = (PVOID *)SeFileSystemNotifyRoutinesExHead;
  v8 = &SeFileSystemNotifyRoutinesExHead;
  if ( !SeFileSystemNotifyRoutinesExHead )
    goto LABEL_9;
  do
  {
    if ( v7[1] == a1 && v7[2] == a2 )
      break;
    v8 = v7;
    v7 = (PVOID *)*v7;
  }
  while ( v7 );
  if ( v7 )
  {
    *v8 = *v7;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
LABEL_9:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741275;
  }
  return v2;
}
