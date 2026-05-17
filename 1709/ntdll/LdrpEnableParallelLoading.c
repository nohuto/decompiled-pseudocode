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
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+60h] [rbp-18h]

  v2 = 0;
  LdrpDetectDetour();
  if ( a1 )
  {
    v5 = a1;
    if ( a1 > 0x10 )
      v5 = 16;
  }
  else
  {
    v5 = 4;
    if ( (RtlGetSuiteMask(v4, v3) & 0x10000) != 0 )
      v5 = 0;
  }
  if ( v5 > 1 && !LdrpDetourExist )
  {
    v2 = TpAllocPoolInternal(&LdrpThreadPool, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(LdrpThreadPool, -300000000LL);
      TpSetPoolMaxThreads(LdrpThreadPool, v5 - 1);
      v9 = 0LL;
      v10 = 0LL;
      v12 = 0LL;
      v13 = 0;
      v11 = 0LL;
      v8 = LdrpThreadPool;
      v7 = 3;
      v14 = 1;
      v15 = 72;
      return (unsigned int)((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(), _QWORD, int *))TpAllocWork)(
                             &LdrpMapAndSnapWork,
                             LdrpWorkCallback,
                             0LL,
                             &v7);
    }
  }
  return (unsigned int)v2;
}
