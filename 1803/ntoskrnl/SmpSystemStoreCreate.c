/*
 * XREFs of SmpSystemStoreCreate @ 0x140650800
 * Callers:
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x1406506E8 (SmProcessConfigRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SmpDirtyStoreCreate @ 0x14052B5B0 (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // edi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1404661B8, 0LL);
  if ( dword_1404661B0 == -1 )
  {
    v4 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_1403CBD88 + 6864LL) >> 8) >> 1,
           0,
           &v6);
    if ( v4 >= 0 )
      dword_1404661B0 = v6;
  }
  else
  {
    v4 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1404661B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1404661B8, v1, v2, v3);
  KeAbPostRelease((ULONG_PTR)&qword_1404661B8);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
