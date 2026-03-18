/*
 * XREFs of RtlpHpFixedVsAllocate @ 0x140244F50
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall RtlpHpFixedVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, char a4)
{
  __int64 v4; // r14
  int v7; // ebp
  __int64 v8; // rsi
  unsigned __int64 v9; // r9

  v4 = a2;
  v7 = a4 & 1;
  if ( (a4 & 1) == 0 )
    ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v8 = *(_QWORD *)(a1 + 96);
  v9 = a1 + (*(_QWORD *)(a1 + 24) << 12);
  if ( v8 + v4 <= v9 )
  {
    *(_QWORD *)(a1 + 96) = v8 + v4;
    if ( a3 )
      *a3 = 0;
  }
  else
  {
    if ( a3 )
      *a3 = v9 - v8;
    v8 = 0LL;
  }
  if ( !v7 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
    KeAbPostRelease(a1 + 56);
  }
  return v8;
}
