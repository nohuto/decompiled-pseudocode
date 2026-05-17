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
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]
  int v17; // [rsp+60h] [rbp-18h]

  v2 = 0;
  sub_18001A9B4();
  if ( a1 )
  {
    v7 = a1;
    if ( a1 > 0x10 )
      v7 = 16;
  }
  else
  {
    v7 = 4;
    if ( (RtlGetSuiteMask(v4, v3, v5, v6) & 0x10000) != 0 )
      v7 = 0;
  }
  if ( v7 > 1 && !byte_18015B260 )
  {
    v2 = sub_1800115C8(&qword_18015B208, 1LL);
    if ( v2 >= 0 )
    {
      TpSetPoolWorkerThreadIdleTimeout(qword_18015B208, -300000000LL);
      TpSetPoolMaxThreads(qword_18015B208, v7 - 1);
      v11 = 0LL;
      v12 = 0LL;
      v14 = 0LL;
      v15 = 0;
      v13 = 0LL;
      v10 = qword_18015B208;
      v9 = 3;
      v16 = 1;
      v17 = 72;
      return (unsigned int)((__int64 (__fastcall *)(__int64 *, __int64 (__fastcall *)(), _QWORD, int *))TpAllocWork)(
                             &qword_18015B1D0,
                             sub_180018970,
                             0LL,
                             &v9);
    }
  }
  return (unsigned int)v2;
}
