/*
 * XREFs of HvlpFlushRangeListTb @ 0x1401411D8
 * Callers:
 *     HvlFlushSingleTb @ 0x140141058 (HvlFlushSingleTb.c)
 *     HvlFlushRangeListTb @ 0x140141198 (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpSlowFlushListTb @ 0x140140D44 (HvlpSlowFlushListTb.c)
 *     HvlpCountFlushVaList @ 0x140141260 (HvlpCountFlushVaList.c)
 *     HvlpPrepareFlushHeader @ 0x140141280 (HvlpPrepareFlushHeader.c)
 *     HvlpFastFlushListTb @ 0x1401412D4 (HvlpFastFlushListTb.c)
 */

__int64 __fastcall HvlpFlushRangeListTb(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int a5, __int64 a6)
{
  char v6; // bl
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // r10d
  __int64 v10; // r11
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a4;
  LOBYTE(a4) = a3;
  HvlpPrepareFlushHeader(v12, a1, a2, a4);
  v7 = HvlpCountFlushVaList(a5, a6);
  if ( v7 > 0xB || (HvlEnlightenments & 0x80u) == 0 || v6 && v9 + 1 > 0xC )
    return HvlpSlowFlushListTb((__int64)v12, v6, v9, v10, v7);
  LOBYTE(v8) = v6;
  return HvlpFastFlushListTb((unsigned int)v12, v8, v9, v10, v7);
}
