/*
 * XREFs of VidSchFlushContext @ 0x1C004FDC0
 * Callers:
 *     VidSchTerminateContext @ 0x1C006BE20 (VidSchTerminateContext.c)
 * Callees:
 *     VidSchiCancelDelayTimerContext @ 0x1C0002174 (VidSchiCancelDelayTimerContext.c)
 *     VidSchiInterlockedReadUlong @ 0x1C0002224 (VidSchiInterlockedReadUlong.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C0002254 (VidSchiCleanupDeferredWaiterContext.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AX0@Z@Z @ 0x1C00022A8 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C004F99C (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchFlushContext(_QWORD *DeferredContext, int *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  union _LARGE_INTEGER v8; // [rsp+28h] [rbp-59h]
  _QWORD v9[20]; // [rsp+38h] [rbp-49h] BYREF

  if ( DeferredContext && a2 )
  {
    v5 = *(_QWORD *)(DeferredContext[13] + 32LL);
    VidSchRundownUnorderedWaiter<_VIDSCH_CONTEXT>((__int64)DeferredContext, v5, *a2, a4, v8);
    VidSchiCleanupDeferredWaiterContext((__int64)DeferredContext);
    if ( *((_DWORD *)DeferredContext + 198) )
    {
      memset(v9, 0, sizeof(v9));
      LODWORD(v9[2]) = 1;
      v9[5] = DeferredContext + 99;
      LODWORD(v9[4]) |= 0x14u;
      LODWORD(v9[6]) = *(unsigned __int16 *)(DeferredContext[12] + 4LL);
      VidSchiWaitFlushCompletion(v5, (__int64)v9, 0x16u);
    }
    VidSchiInterlockedReadUlong((KSPIN_LOCK *)(v5 + 1880), (_DWORD *)DeferredContext + 198);
    if ( *((_DWORD *)DeferredContext + 200) )
    {
      memset(v9, 0, sizeof(v9));
      LODWORD(v9[4]) |= 4u;
      LODWORD(v9[2]) = 3;
      v9[5] = DeferredContext + 100;
      VidSchiWaitFlushCompletion(v5, (__int64)v9, 0x16u);
    }
    VidSchiCancelDelayTimerContext((char *)DeferredContext);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdAssertion(DeferredContext, a2);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
