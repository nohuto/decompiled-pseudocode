/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x1407199A0
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x140585BC8 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405D62A0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x1406902FC (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(
        LPCWSTR pwsz,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        int *a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  struct _MDL *v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  if ( *a4 )
  {
    result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v13, &v12);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(pwsz, a2, v13, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v12 )
    ExUnlockUserBuffer(v12);
  return EnvironmentVariable;
}
