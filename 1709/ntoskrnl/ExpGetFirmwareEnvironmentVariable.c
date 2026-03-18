/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x1407591A4
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1405E97F0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405E9890 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x1406BBFF0 (IoGetEnvironmentVariableEx.c)
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
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  if ( *a4 )
  {
    result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v13, (struct _MDL **)&P);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    P = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(pwsz, a2, v13, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return EnvironmentVariable;
}
