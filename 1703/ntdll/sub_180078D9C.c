/*
 * XREFs of sub_180078D9C @ 0x180078D9C
 * Callers:
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 * Callees:
 *     sub_180078DF4 @ 0x180078DF4 (sub_180078DF4.c)
 */

__int64 __fastcall sub_180078D9C(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  if ( a1
    && a2 <= qword_180158678
    && (v2 = (unsigned __int8)byte_1801196F0[((a2 + 23) >> 4) - 1], (unsigned int)v2 < 0x81)
    && (*(_QWORD *)(a1 + 8 * v2 + 1192)
     || (int)sub_180078DF4(a1, (unsigned __int8)byte_1801196F0[((a2 + 23) >> 4) - 1]) >= 0) )
  {
    return (unsigned __int16)v2;
  }
  else
  {
    return 0xFFFFLL;
  }
}
