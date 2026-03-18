/*
 * XREFs of KiProcessThreadWaitList @ 0x14001C060
 * Callers:
 *     KiPriQueueThreadPriorityChanged @ 0x14002CE38 (KiPriQueueThreadPriorityChanged.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KiProcessExpiredTimerList @ 0x1400E40B0 (KiProcessExpiredTimerList.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KeRemovePriQueue @ 0x1400FC3E0 (KeRemovePriQueue.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     KiReadyThread @ 0x1400E2E20 (KiReadyThread.c)
 *     EtwTraceReadyThread @ 0x140253B0C (EtwTraceReadyThread.c)
 */

__int64 __fastcall KiProcessThreadWaitList(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 **v4; // r14
  __int64 v8; // rax
  __int64 *v9; // rsi
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  volatile signed __int32 *v12; // rbp
  __int64 *v13; // rcx
  __int64 **v14; // rax
  __int64 result; // rax

  v4 = *(__int64 ***)(a1 + 11528);
  *(_QWORD *)(a1 + 11528) = 0LL;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64 *)(v4 - 27);
    v10 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v11 = &v10[6 * v8];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        KiAcquireKobjectLockSafe(v12);
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          v14 = (__int64 **)v10[1];
          if ( *(__int64 **)(*v10 + 8) != v10 || *v14 != v10 )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *((_BYTE *)v9 + 566) = a2;
    *((_BYTE *)v9 + 567) = a3;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, a3, a4);
    result = KiReadyThread(a1, v9);
  }
  while ( v4 );
  return result;
}
