/*
 * XREFs of KiProcessThreadWaitList @ 0x1401122C0
 * Callers:
 *     KeRemovePriQueue @ 0x140061A80 (KeRemovePriQueue.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x14006E1D0 (KiSwapThread.c)
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x1400939C0 (KiProcessExpiredTimerList.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140122D70 (KiPriQueueThreadPriorityChanged.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiReadyThread @ 0x1400932D0 (KiReadyThread.c)
 *     EtwTraceReadyThread @ 0x14027B7EC (EtwTraceReadyThread.c)
 */

int __fastcall KiProcessThreadWaitList(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned int a4)
{
  __int64 **v4; // r14
  unsigned __int8 v5; // r12
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  volatile signed __int32 *v12; // rsi
  __int64 *v13; // rax
  __int64 **v14; // rcx
  int result; // eax
  int v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+20h]

  v17 = a4;
  v4 = *(__int64 ***)(a1 + 11528);
  v5 = a3;
  *(_QWORD *)(a1 + 11528) = 0LL;
  do
  {
    v8 = *((unsigned __int8 *)v4 + 371);
    v9 = (__int64)(v4 - 27);
    v10 = *(v4 - 1);
    v4 = (__int64 **)*v4;
    v11 = &v10[6 * v8];
    do
    {
      if ( *((_BYTE *)v10 + 17) < 5u )
      {
        v12 = (volatile signed __int32 *)v10[4];
        v16 = 0;
        while ( _interlockedbittestandset(v12, 7u) )
        {
          do
            KeYieldProcessorEx(&v16);
          while ( (*v12 & 0x80u) != 0 );
        }
        if ( *((_BYTE *)v10 + 17) == 4 )
        {
          v13 = (__int64 *)*v10;
          if ( *(__int64 **)(*v10 + 8) != v10 || (v14 = (__int64 **)v10[1], *v14 != v10) )
            __fastfail(3u);
          *v14 = v13;
          v13[1] = (__int64)v14;
        }
        _InterlockedAnd(v12, 0xFFFFFF7F);
      }
      v10 += 6;
    }
    while ( v10 != v11 );
    *(_BYTE *)(v9 + 566) = a2;
    *(_BYTE *)(v9 + 567) = v5;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceReadyThread(v9, a2, v5, v17);
    result = KiReadyThread(a1, v9, a3);
  }
  while ( v4 );
  return result;
}
