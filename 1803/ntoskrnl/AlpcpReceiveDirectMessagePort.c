/*
 * XREFs of AlpcpReceiveDirectMessagePort @ 0x140558B14
 * Callers:
 *     AlpcpReceiveMessage @ 0x1404C9B10 (AlpcpReceiveMessage.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x1404DFF2C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpLogReceiveMessage @ 0x140749514 (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveDirectMessagePort(__int64 *a1, __int64 a2, int a3, ULONG_PTR *a4, int a5)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG_PTR v11; // rsi
  volatile signed __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  ULONG_PTR v20; // rbx
  ULONG_PTR BugCheckParameter2[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(_DWORD)a2 )
    return 3221225485LL;
  v6 = *a1;
  result = AlpcpLookupMessage(*a1, a2, a3, BugCheckParameter2);
  if ( (int)result < 0 )
    return result;
  v11 = BugCheckParameter2[0];
  if ( (*(_DWORD *)(BugCheckParameter2[0] + 40) & 7) != 4 )
  {
    AlpcpUnlockMessage(BugCheckParameter2[0], v8, v9, v10);
    return 3221225485LL;
  }
  v12 = (volatile signed __int64 *)(v6 + 352);
  ExAcquirePushLockSharedEx(v6 + 352, 0LL);
  v16 = *(_DWORD *)(v6 + 416);
  if ( (v16 & 0x40) != 0 )
  {
    AlpcpUnlockMessage(v11, v13, v14, v15);
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    KeAbPostRelease(v6 + 352);
    return 3221227264LL;
  }
  else if ( (v16 & 0x10) != 0 )
  {
    AlpcpUnlockMessage(v11, v13, v14, v15);
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    KeAbPostRelease(v6 + 352);
    return 3221225537LL;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v6 + 200, 0LL);
    --*(_DWORD *)(v6 + 460);
    *(_DWORD *)(v11 + 40) &= 0xFFFFFFF8;
    *(_QWORD *)(v11 + 16) = 0LL;
    **(_QWORD **)(v11 + 8) = *(_QWORD *)v11;
    *(_QWORD *)(*(_QWORD *)v11 + 8LL) = *(_QWORD *)(v11 + 8);
    v18 = *(_QWORD *)(v11 + 136) != 0LL ? 0x80000000 : 0;
    LODWORD(v18) = v18 | 0x40000000;
    if ( !*(_QWORD *)(v11 + 144) )
      v18 = *(_QWORD *)(v11 + 136) != 0LL ? 0x80000000 : 0;
    v19 = (unsigned int)v18;
    LODWORD(v19) = v18 | 0x10000000;
    if ( !*(_QWORD *)(v11 + 152) )
      v19 = (unsigned int)v18;
    if ( ((unsigned int)v19 & a5) != 0 )
    {
      *(_WORD *)(v11 + 244) |= 0x2000u;
      AlpcpInsertMessagePendingQueue(v6, v11);
    }
    else
    {
      *(_WORD *)(v11 + 244) &= ~0x2000u;
      --*(_WORD *)(v11 - 30);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 200), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 200), v19, v18, v17);
    KeAbPostRelease(v6 + 200);
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    KeAbPostRelease(v6 + 352);
    v20 = BugCheckParameter2[0];
    if ( AlpcpLogEnabled )
      AlpcpLogReceiveMessage(BugCheckParameter2[0]);
    *a4 = v20;
    return 0LL;
  }
}
