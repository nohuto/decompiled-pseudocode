/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x14075A890
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1407581E0 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14075DF18 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x140132124 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14056EEE8 (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x1406BC2DC (IoSetEnvironmentVariableEx.c)
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
