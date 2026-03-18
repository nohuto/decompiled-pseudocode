/*
 * XREFs of SmcCacheAdd @ 0x140703E34
 * Callers:
 *     SmcProcessCreateRequest @ 0x140701444 (SmcProcessCreateRequest.c)
 * Callees:
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SmcCacheAdd(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // esi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v10; // eax

  v3 = 0;
  v5 = 0;
  while ( 1 )
  {
    v8 = a1 + 32LL * v5;
    if ( !*(_QWORD *)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
      if ( !*(_QWORD *)v8 )
      {
        *(_QWORD *)v8 = a2;
        do
        {
          *(_DWORD *)(v8 + 24) ^= (*(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) + 1)) & 0xFFF;
          v10 = v5 | (16 * (*(_DWORD *)(v8 + 24) & 0xFFF));
          *a2 = v10;
        }
        while ( v10 == -1 );
        *a3 = v10;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v8 + 8), 0LL);
        ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
      KeAbPostRelease(v8 + 16);
      KeLeaveCriticalRegion();
      if ( !a2 )
        break;
    }
    if ( ++v5 >= 0x10 )
      return (unsigned int)-1073741671;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return v3;
}
