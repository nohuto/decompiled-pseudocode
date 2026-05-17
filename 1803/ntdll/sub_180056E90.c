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
  int v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+28h] [rbp-50h]
  __int64 v7; // [rsp+30h] [rbp-48h]
  __int64 v8; // [rsp+38h] [rbp-40h]
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+60h] [rbp-18h]

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
    v2 = sub_180057618(&qword_18015D110, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(qword_18015D110, -300000000LL);
      TpSetPoolMaxThreads(qword_18015D110, v3 - 1);
      v7 = 0LL;
      v8 = 0LL;
      v10 = 0LL;
      v11 = 0;
      v9 = 0LL;
      v6 = qword_18015D110;
      v5 = 3;
      v12 = 1;
      v13 = 72;
      return (unsigned int)((__int64 (__fastcall *)(__int64 *, void (*)(), _QWORD, int *))TpAllocWork)(
                             &qword_18015C1F0,
                             sub_180042660,
                             0LL,
                             &v5);
    }
  }
  return (unsigned int)v2;
}
