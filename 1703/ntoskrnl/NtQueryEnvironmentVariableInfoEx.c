/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x14071D8F0
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x14069047C (IoQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(
        unsigned int a1,
        struct _DEVICE_OBJECT **a2,
        __int64 *a3,
        __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariableInfo; // ebx

  if ( dword_140344B30 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariableInfo = IoQueryEnvironmentVariableInfoEx(a1, a2, a3, a4);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return EnvironmentVariableInfo;
}
