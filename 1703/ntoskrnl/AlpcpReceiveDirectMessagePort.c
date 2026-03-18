/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x1404705E8
 * Callers:
 *     AlpcpReceiveMessage @ 0x140522600 (AlpcpReceiveMessage.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140470D0C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcpLogReceiveMessage @ 0x1406B28DC (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(_QWORD *a1, __int64 a2, __int64 a3, ULONG_PTR *a4, int a5)
{
  __int64 v6; // rbp
  __int64 result; // rax
  ULONG_PTR v8; // rsi
  volatile signed __int64 *v9; // rdi
  int v10; // eax
  unsigned int v11; // r8d
  int v12; // edx
  ULONG_PTR v13; // rbx
  ULONG_PTR v14[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(_DWORD)a2 )
    return 3221225485LL;
  v6 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, v14);
  if ( (int)result < 0 )
    return result;
  v8 = v14[0];
  if ( (*(_DWORD *)(v14[0] + 40) & 7) != 4 )
  {
    AlpcpUnlockMessage(v14[0]);
    return 3221225485LL;
  }
  v9 = (volatile signed __int64 *)(v6 + 352);
  ExAcquirePushLockSharedEx(v6 + 352, 0LL);
  v10 = *(_DWORD *)(v6 + 416);
  if ( (v10 & 0x40) != 0 )
  {
    AlpcpUnlockMessage(v8);
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    KeAbPostRelease(v6 + 352);
    return 3221227264LL;
  }
  else if ( (v10 & 0x10) != 0 )
  {
    AlpcpUnlockMessage(v8);
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    KeAbPostRelease(v6 + 352);
    return 3221225537LL;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v6 + 200, 0LL);
    --*(_DWORD *)(v6 + 460);
    *(_DWORD *)(v8 + 40) &= 0xFFFFFFF8;
    *(_QWORD *)(v8 + 16) = 0LL;
    **(_QWORD **)(v8 + 8) = *(_QWORD *)v8;
    *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v8 + 8);
    v11 = (*(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v8 + 144) )
      v11 = *(_QWORD *)(v8 + 136) != 0LL ? 0x80000000 : 0;
    v12 = v11 | 0x10000000;
    if ( !*(_QWORD *)(v8 + 152) )
      v12 = v11;
    if ( (v12 & a5) != 0 )
    {
      *(_WORD *)(v8 + 244) |= 0x2000u;
      AlpcpInsertMessagePendingQueue(v6, v8);
    }
    else
    {
      *(_WORD *)(v8 + 244) &= ~0x2000u;
      --*(_WORD *)(v8 - 30);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 200));
    KeAbPostRelease(v6 + 200);
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    KeAbPostRelease(v6 + 352);
    v13 = v14[0];
    if ( AlpcpLogEnabled )
      AlpcpLogReceiveMessage(v14[0]);
    *a4 = v13;
    return 0LL;
  }
}
