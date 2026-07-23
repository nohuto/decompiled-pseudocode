/*
 * XREFs of LdrpEnableParallelLoading @ 0x180009F74
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDetectDetour @ 0x180006720 (LdrpDetectDetour.c)
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     TpAllocWork @ 0x18000A070 (TpAllocWork.c)
 *     TpSetPoolMaxThreads @ 0x18000A220 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18000A2A0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     TpAllocPoolInternal @ 0x18000AC04 (TpAllocPoolInternal.c)
 */

__int64 __fastcall LdrpEnableParallelLoading(unsigned int a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  LdrpDetectDetour();
  if ( a1 )
  {
    v3 = a1;
    if ( a1 > 0x10 )
      v3 = 16;
  }
  else
  {
    v3 = 4;
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v3 = 0;
  }
  if ( v3 > 1 && !LdrpDetourExist )
  {
    v2 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
      TpSetPoolMaxThreads(LdrpThreadPool, v3 - 1);
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = LdrpThreadPool;
      CallbackEnviron.Version = 3;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      return (unsigned int)TpAllocWork(&LdrpMapAndSnapWork, LdrpWorkCallback, 0LL, &CallbackEnviron);
    }
  }
  return (unsigned int)v2;
}
