/*
 * XREFs of SmpSystemStoreCreate @ 0x1405D9864
 * Callers:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x1405D9750 (SmProcessConfigRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x140568384 (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403FA1D8, 0LL);
  if ( dword_1403FA1D0 == -1 )
  {
    v1 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5584LL) >> 8) >> 1,
           0,
           &v3);
    if ( v1 >= 0 )
      dword_1403FA1D0 = v3;
  }
  else
  {
    v1 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403FA1D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403FA1D8);
  KeAbPostRelease((ULONG_PTR)&qword_1403FA1D8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
