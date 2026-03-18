/*
 * XREFs of HvlpFlushRangeListTb @ 0x140159DCC
 * Callers:
 *     HvlFlushRangeListTb @ 0x140159D7C (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpSlowFlushListTb @ 0x140159940 (HvlpSlowFlushListTb.c)
 *     HvlpCountFlushVaList @ 0x140159E70 (HvlpCountFlushVaList.c)
 *     HvlpPrepareFlushHeader @ 0x140159E8C (HvlpPrepareFlushHeader.c)
 *     HvlpFastFlushListTb @ 0x140159EE0 (HvlpFastFlushListTb.c)
 *     HvlpAllowFastFlushList @ 0x140159FB8 (HvlpAllowFastFlushList.c)
 */

__int64 __fastcall HvlpFlushRangeListTb(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  char v7; // bl
  __int64 v8; // rcx
  unsigned int v9; // r9d
  __int64 v10; // r10
  unsigned int v11; // r11d
  int v12; // edx
  int v13; // r8d
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a4;
  if ( a5 )
  {
    LOBYTE(a4) = a3;
    HvlpPrepareFlushHeader(v15, a1, a2, a4);
  }
  v11 = HvlpCountFlushVaList(a6, a7);
  if ( v11 > 0xB )
    return HvlpSlowFlushListTb((__int64)v15, v7, a5, v9, v10, v11);
  LOBYTE(v8) = v7;
  if ( !(unsigned __int8)HvlpAllowFastFlushList(v8, v9) )
    return HvlpSlowFlushListTb((__int64)v15, v7, a5, v9, v10, v11);
  LOBYTE(v13) = a5;
  LOBYTE(v12) = v7;
  return HvlpFastFlushListTb((unsigned int)v15, v12, v13, v9, v10, v11);
}
