/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x1401F0CD4
 * Callers:
 *     HvlFlushSingleTb @ 0x140141058 (HvlFlushSingleTb.c)
 *     HvlFlushRangeListTb @ 0x140141198 (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpCountFlushVaList @ 0x140141260 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTbEx @ 0x1401F0BB4 (HvlpFastFlushListTbEx.c)
 *     HvlpSlowFlushListTbEx @ 0x1401F0E2C (HvlpSlowFlushListTbEx.c)
 */

__int64 __fastcall HvlpFlushRangeListTbEx(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r10d
  char v11; // r11
  __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v13[0] = a1;
  v7 = (a3 == 0 ? 4 : 0) | 2u;
  if ( a1 )
    v7 = a3 == 0 ? 4 : 0;
  v13[1] = v7;
  v8 = HvlpCountFlushVaList(a5, a6);
  if ( v8 + (((unsigned int)HvlpFlags >> 8) & 0xF) + 5 <= 0xE
    && (HvlEnlightenments & 0x80u) != 0
    && (!v11 || v10 + 1 <= 0xC) )
  {
    return HvlpFastFlushListTbEx(v13, a2, v11, v10, a6, v8);
  }
  LOBYTE(v9) = v11;
  return HvlpSlowFlushListTbEx((unsigned int)v13, a2, v9, v10, (__int64)a6, v8);
}
