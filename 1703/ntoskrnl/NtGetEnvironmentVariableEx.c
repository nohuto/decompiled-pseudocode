/*
 * XREFs of NtGetEnvironmentVariableEx @ 0x14071D010
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetEnvironmentVariableEx @ 0x1406902FC (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtGetEnvironmentVariableEx(LPCWSTR pwsz, __int64 a2, __int64 a3, _DWORD *a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx

  if ( dword_140344B30 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(pwsz, a2, a3, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return EnvironmentVariable;
}
