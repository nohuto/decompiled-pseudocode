/*
 * XREFs of SmcCacheAdd @ 0x14079F13C
 * Callers:
 *     SmcProcessCreateRequest @ 0x14079C744 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall SmcCacheAdd(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // esi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // ecx

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
          v13 = *(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) ^ (*(_DWORD *)(v8 + 24) + 1)) & 0xFFF;
          *(_DWORD *)(v8 + 24) = v13;
          v14 = v5 | (16 * (v13 & 0xFFF));
          *a2 = v14;
        }
        while ( v14 == -1 );
        *a3 = v14;
        a2 = 0LL;
        _InterlockedExchange64((volatile __int64 *)(v8 + 8), 0LL);
        ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v8 + 8));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16), v10, v11, v12);
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
