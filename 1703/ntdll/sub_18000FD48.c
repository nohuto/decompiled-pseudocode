/*
 * XREFs of sub_18000FD48 @ 0x18000FD48
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlGetSuiteMask @ 0x18000FC90 (RtlGetSuiteMask.c)
 *     TpSetPoolMaxThreads @ 0x18000FE40 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x18000FEC0 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     sub_1800115C8 @ 0x1800115C8 (sub_1800115C8.c)
 *     TpAllocWork @ 0x1800147E0 (TpAllocWork.c)
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 */

__int64 __fastcall sub_18000FD48(unsigned int a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  sub_18001A9B4();
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
  if ( v3 > 1 && !byte_18015B260 )
  {
    v2 = sub_1800115C8(&Pool, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(Pool, -300000000LL);
      TpSetPoolMaxThreads(Pool, v3 - 1);
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = Pool;
      CallbackEnviron.Version = 3;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      return (unsigned int)TpAllocWork(&Work, Callback, 0LL, &CallbackEnviron);
    }
  }
  return (unsigned int)v2;
}
