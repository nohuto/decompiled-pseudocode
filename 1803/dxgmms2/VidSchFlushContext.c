/*
 * XREFs of VidSchFlushContext @ 0x1C0079050
 * Callers:
 *     VidSchTerminateContext @ 0x1C0078DA0 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0012AC4 (VidSchiCancelDelayTimerContext.c)
 *     VidSchiInterlockedReadUlong @ 0x1C0012B74 (VidSchiInterlockedReadUlong.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0012BA4 (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C0012BF8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0078FEC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(_QWORD *DeferredContext, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  union _LARGE_INTEGER v9; // [rsp+28h] [rbp-59h]
  _QWORD v10[20]; // [rsp+38h] [rbp-49h] BYREF

  if ( DeferredContext && a2 )
  {
    v5 = *(_QWORD *)(DeferredContext[13] + 32LL);
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>((__int64)DeferredContext, v5, *a2, a4, v9);
    VidSchiCleanupDeferredWaiterContext((__int64)DeferredContext);
    if ( *((_DWORD *)DeferredContext + 194) )
    {
      memset(v10, 0, sizeof(v10));
      v7 = DeferredContext[12];
      LODWORD(v10[4]) |= 0x50u;
      LODWORD(v10[2]) = 1;
      v10[5] = DeferredContext + 97;
      LODWORD(v10[6]) = *(unsigned __int16 *)(v7 + 4);
      VidSchiWaitFlushCompletion(v5, (__int64)v10, 0x16u);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v5 + 1904), (_DWORD *)DeferredContext + 194);
    if ( *((_DWORD *)DeferredContext + 196) )
    {
      memset(v10, 0, sizeof(v10));
      LODWORD(v10[4]) |= 0x10u;
      LODWORD(v10[2]) = 3;
      v10[5] = DeferredContext + 98;
      VidSchiWaitFlushCompletion(v5, (__int64)v10, 0x16u);
    }
    VidSchiCancelDelayTimerContext((char *)DeferredContext);
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(DeferredContext, a2);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
}
