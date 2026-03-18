/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x14071AFF4
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1407189E0 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x14071E604 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14003C654 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExLockUserBuffer @ 0x14055C224 (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x1406905FC (IoSetEnvironmentVariableEx.c)
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
  struct _MDL *v13; // [rsp+38h] [rbp-10h] BYREF

  if ( a4 )
  {
    ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v12, &v13);
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v10 = IoSetEnvironmentVariableEx(pwsz, a2, v12, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v13 )
    ExUnlockUserBuffer(v13);
  return v10;
}
