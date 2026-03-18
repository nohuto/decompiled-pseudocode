/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x14075D200
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x14070B1EC (PopEnableSystemSleepCheckpoint.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x1406BC168 (IoQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(
        unsigned int a1,
        struct _DEVICE_OBJECT **a2,
        __int64 *a3,
        __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariableInfo; // ebx

  if ( dword_14035E690 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariableInfo = IoQueryEnvironmentVariableInfoEx(a1, a2, a3, a4);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return EnvironmentVariableInfo;
}
