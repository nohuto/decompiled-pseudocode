/*
 * XREFs of SmcCacheCreatePrepare @ 0x140701378
 * Callers:
 *     SmcProcessCreateRequest @ 0x140701444 (SmcProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x1405DA870 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x1407040A0 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi
  char v4; // al

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403FA180, 0LL);
  v4 = dword_1403FA160;
  if ( (dword_1403FA160 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart(&qword_1403FA410);
    v4 = dword_1403FA160;
    if ( v2 >= 0 )
    {
      v4 = dword_1403FA160 | 8;
      dword_1403FA160 |= 8u;
    }
  }
  if ( (v4 & 4) == 0 && (v4 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_1403FA410);
    if ( v2 >= 0 )
      dword_1403FA160 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403FA180, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403FA180);
  KeAbPostRelease((ULONG_PTR)&qword_1403FA180);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
