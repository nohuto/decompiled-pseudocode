/*
 * XREFs of SmcCacheRemove @ 0x14079F5C0
 * Callers:
 *     SmcCacheDelete @ 0x14079F2D0 (SmcCacheDelete.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheRemove(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF v3; // r14
  struct _EX_RUNDOWN_REF *v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[2], 0LL);
  if ( a2 >> 4 == (v4[3].Count & 0xFFF) && v4->Count )
  {
    ExWaitForRundownProtectionRelease(v4 + 1);
    v3.Count = v4->Count;
    v4->Count = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v4[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&v4[2], v6, v7, v8);
  KeAbPostRelease((ULONG_PTR)&v4[2]);
  KeLeaveCriticalRegion();
  return v3;
}
