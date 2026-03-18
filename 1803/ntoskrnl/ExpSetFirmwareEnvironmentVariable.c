/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x1407C17BC
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BEE40 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1407C4F40 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140068300 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400B9118 (ExUnlockUserBuffer.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExLockUserBuffer @ 0x14055FA68 (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x140721290 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(
        LPCWSTR pwsz,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        KPROCESSOR_MODE a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+38h] [rbp-10h] BYREF

  if ( a4 )
  {
    ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v12, (struct _MDL **)&P);
  }
  else
  {
    v12 = 0LL;
    P = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v10 = IoSetEnvironmentVariableEx(pwsz, a2, v12, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( P )
    ExUnlockUserBuffer((struct _MDL *)P);
  return v10;
}
