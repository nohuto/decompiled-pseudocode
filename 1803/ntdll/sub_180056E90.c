/*
 * XREFs of sub_180056E90 @ 0x180056E90
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 *     TpAllocWork @ 0x180056F90 (TpAllocWork.c)
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 *     TpSetPoolMaxThreads @ 0x180059670 (TpSetPoolMaxThreads.c)
 *     TpSetPoolWorkerThreadIdleTimeout @ 0x180059740 (TpSetPoolWorkerThreadIdleTimeout.c)
 *     RtlGetSuiteMask @ 0x18005A990 (RtlGetSuiteMask.c)
 */

__int64 __fastcall sub_180056E90(unsigned int a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-58h] BYREF

  v2 = 0;
  sub_180056DF4();
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
  if ( v3 > 1 && !byte_18015C280 )
  {
    v2 = sub_180057618(&Pool, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(Pool, -300000000LL);
      TpSetPoolMaxThreads(Pool, v3 - 1);
      memset(&CallbackEnviron.CleanupGroup, 0, 44);
      CallbackEnviron.Pool = Pool;
      CallbackEnviron.Version = 3;
      CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
      CallbackEnviron.Size = 72;
      return (unsigned int)TpAllocWork(&Work, (PTP_WORK_CALLBACK)sub_180042660, 0LL, &CallbackEnviron);
    }
  }
  return (unsigned int)v2;
}
