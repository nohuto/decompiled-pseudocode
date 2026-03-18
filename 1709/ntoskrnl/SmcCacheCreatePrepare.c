/*
 * XREFs of SmcCacheCreatePrepare @ 0x140739440
 * Callers:
 *     SmcProcessCreateRequest @ 0x14073950C (SmcProcessCreateRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x140738E04 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x14073C3A4 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  if ( (dword_14041B130 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart((PVOID *)&qword_14041B3E0);
    if ( v2 >= 0 )
      dword_14041B130 |= 8u;
  }
  if ( (dword_14041B130 & 4) == 0 && (dword_14041B130 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_14041B3E0);
    if ( v2 >= 0 )
      dword_14041B130 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
