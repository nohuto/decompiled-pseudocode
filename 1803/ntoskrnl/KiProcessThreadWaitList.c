/*
 * XREFs of KiProcessThreadWaitList @ 0x1400B19F0
 * Callers:
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400AF234 (KiPriQueueThreadPriorityChanged.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 *     KiProcessExpiredTimerList @ 0x140108660 (KiProcessExpiredTimerList.c)
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 *     EtwTraceReadyThread @ 0x1402AF168 (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiProcessThreadWaitList(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  __int64 **v3; // r14
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 result; // rax
  volatile signed __int32 *v12; // rsi
  __int64 *v13; // rax
  __int64 **v14; // rcx

  v3 = *(__int64 ***)(a1 + 11528);
  *(_QWORD *)(a1 + 11528) = 0LL;
  do
  {
    v7 = *((unsigned __int8 *)v3 + 371);
    v8 = (__int64 *)(v3 - 27);
    v9 = *(v3 - 1);
    v3 = (__int64 **)*v3;
    v10 = &v9[6 * v7];
    do
    {
      if ( *((_BYTE *)v9 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v9[4];
        KiAcquireKobjectLockSafe(v12);
        if ( *((_BYTE *)v9 + 17) == 4 )
        {
          v13 = (__int64 *)*v9;
          if ( *(__int64 **)(*v9 + 8) != v9 || (v14 = (__int64 **)v9[1], *v14 != v9) )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v9 += 6;
    }
    while ( v9 != v10 );
    *((_BYTE *)v8 + 566) = a2;
    *((_BYTE *)v8 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v8, a2, a3);
    result = KiReadyThread(a1, v8);
  }
  while ( v3 );
  return result;
}
