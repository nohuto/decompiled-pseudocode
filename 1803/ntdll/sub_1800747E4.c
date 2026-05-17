/*
 * XREFs of sub_1800747E4 @ 0x1800747E4
 * Callers:
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 * Callees:
 *     sub_18007483C @ 0x18007483C (sub_18007483C.c)
 */

__int64 __fastcall sub_1800747E4(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  if ( a1
    && a2 <= qword_180159758
    && (v2 = byte_1801190F0[((a2 + 23) >> 4) - 1], (unsigned int)v2 < 0x81)
    && (*(_QWORD *)(a1 + 8 * v2 + 1192) || (int)sub_18007483C(a1, byte_1801190F0[((a2 + 23) >> 4) - 1]) >= 0) )
  {
    return (unsigned __int16)v2;
  }
  else
  {
    return 0xFFFFLL;
  }
}
