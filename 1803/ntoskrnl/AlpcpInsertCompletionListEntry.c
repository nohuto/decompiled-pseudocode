/*
 * XREFs of AlpcpInsertCompletionListEntry @ 0x1407486A4
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404CD0A0 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall AlpcpInsertCompletionListEntry(__int64 a1, int a2)
{
  __int64 v2; // r13
  unsigned int v3; // r12d
  int v4; // edi
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rax
  volatile signed __int64 *v14; // rsi
  signed __int64 v15; // rax
  __int64 v17; // rdi

  v2 = *(_QWORD *)(a1 + 360);
  v3 = 0;
  v4 = a2;
  v6 = *(_QWORD *)(v2 + 80);
  v7 = *(_QWORD *)(v2 + 96) >> 2;
  if ( v7 )
  {
    do
    {
      ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 360) + 24LL, 0LL);
      v10 = *(_QWORD *)(v6 + 64);
      v11 = v10 >> 24;
      if ( (v10 & (v10 >> 24) & 0xFFFFFF) == 0xFFFFFF )
      {
        **(_DWORD **)(v2 + 88) = v4;
        v12 = v10 & 0xFFFF000000000000uLL;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v10 & 0xFFFF000000000000uLL, v10);
        v14 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
        if ( v13 == v10 )
        {
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v14, v11, v8, v9);
          KeAbPostRelease((ULONG_PTR)v14);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
          return v12 < 0x1000000000000LL ? 3 : 1;
        }
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14, v11, v8, v9);
        v4 = a2;
      }
      else
      {
        if ( (v10 & 0xFFFFFF) >= v7
          || (v11 &= 0xFFFFFFuLL, v11 >= v7)
          || (v11 = v10 ^ (v10 ^ (((v11 + 1) % v7) << 24)) & 0xFFFFFF000000LL,
              v8 = (v11 >> 24) & 0xFFFFFF,
              v8 == (v11 & 0xFFFFFF)) )
        {
          v17 = *(_QWORD *)(a1 + 360);
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 24), v11, v8, v9);
          KeAbPostRelease(v17 + 24);
          return 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v2 + 88) + 4 * v8) = v4;
        v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v11, v10);
        v14 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 360) + 24LL);
        if ( v15 == v10 )
        {
          if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v14, v11, v8, v9);
          KeAbPostRelease((ULONG_PTR)v14);
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 128));
          return 1LL;
        }
        if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v14, v11, v8, v9);
      }
      KeAbPostRelease((ULONG_PTR)v14);
      ++v3;
    }
    while ( v3 < v7 );
  }
  return 0LL;
}
