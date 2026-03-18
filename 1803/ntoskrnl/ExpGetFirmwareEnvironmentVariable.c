/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x1407C0090
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14057FEC8 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x14057FF60 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400B9118 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140720FA4 (IoGetEnvironmentVariableEx.c)
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
