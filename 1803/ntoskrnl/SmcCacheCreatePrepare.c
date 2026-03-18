/*
 * XREFs of SmcCacheCreatePrepare @ 0x14079C678
 * Callers:
 *     SmcProcessCreateRequest @ 0x14079C744 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SmRegistrationCtxStart @ 0x14065314C (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x14079F3A8 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140466160, 0LL);
  if ( (dword_140466140 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart(&qword_1404663F0);
    if ( v2 >= 0 )
      dword_140466140 |= 8u;
  }
  if ( (dword_140466140 & 4) == 0 && (dword_140466140 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_1404663F0);
    if ( v2 >= 0 )
      dword_140466140 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466160, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)&qword_140466160);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
