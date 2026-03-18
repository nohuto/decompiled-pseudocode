/*
 * XREFs of AlpcpInsertCompletionListEntry @ 0x14056A87C
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x140525120 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInsertCompletionListEntry(__int64 a1, int a2)
{
  __int64 v2; // r13
  unsigned int v3; // r15d
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  v2 = *(_QWORD *)(a1 + 360);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 80);
  v7 = *(_QWORD *)(v2 + 96) >> 2;
  if ( v7 )
  {
    do
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 360) + 24LL, 0LL);
      v8 = *(_QWORD *)(v6 + 64);
      if ( (v8 & (v8 >> 24) & 0xFFFFFF) == 0xFFFFFF )
      {
        **(_DWORD **)(v2 + 88) = a2;
        v9 = v8 & 0xFFFF000000000000uLL;
        if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v8 & 0xFFFF000000000000uLL, v8) )
        {
          v10 = *(_QWORD *)(a1 + 360);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 24));
          KeAbPostRelease(v10 + 24);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
          return v9 < 0x1000000000000LL ? 3 : 1;
        }
      }
      else
      {
        if ( (v8 & 0xFFFFFF) >= v7
          || (v12 = (*(_QWORD *)(v6 + 64) >> 24) & 0xFFFFFFLL, v12 >= v7)
          || (v13 = v8 ^ (v8 ^ (((v12 + 1) % v7) << 24)) & 0xFFFFFF000000LL,
              v14 = (v13 >> 24) & 0xFFFFFF,
              v14 == (v13 & 0xFFFFFF)) )
        {
          v17 = *(_QWORD *)(a1 + 360);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 24));
          KeAbPostRelease(v17 + 24);
          return 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v2 + 88) + 4 * v14) = a2;
        if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v13, v8) )
        {
          v15 = *(_QWORD *)(a1 + 360);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 24));
          KeAbPostRelease(v15 + 24);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
          return 1LL;
        }
      }
      v16 = *(_QWORD *)(a1 + 360);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v16 + 24));
      KeAbPostRelease(v16 + 24);
      ++v3;
    }
    while ( v3 < v7 );
  }
  return 0LL;
}
