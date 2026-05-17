/*
 * XREFs of sub_18008A7B4 @ 0x18008A7B4
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     sub_18008A858 @ 0x18008A858 (sub_18008A858.c)
 *     sub_1800FEA34 @ 0x1800FEA34 (sub_1800FEA34.c)
 */

unsigned __int8 __fastcall sub_18008A7B4(__int16 a1, int a2)
{
  int v4; // r8d
  unsigned __int8 result; // al

  sub_18008A858();
  v4 = dword_18015BFDC;
  if ( (a1 & 8) != 0 )
  {
    v4 = dword_18015BFDC | 0x10;
    dword_18015BFDC |= 0x10u;
  }
  if ( (a1 & 4) != 0 )
  {
    v4 |= 8u;
    dword_18015BFDC = v4;
  }
  if ( (a2 & 0x100000) != 0 || (a1 & 2) != 0 )
  {
    v4 |= 2u;
    dword_18015BFDC = v4;
  }
  result = (a1 & 1) == 0;
  if ( (((v4 & 2) == 0) & result) == 0 )
    dword_18015BFDC = v4 | 4;
  if ( (a1 & 0xFF00) != 0 )
  {
    result = HIBYTE(a1);
    dword_180158688 = HIBYTE(a1);
  }
  if ( (a1 & 0x10) != 0 )
    result = sub_1800FEA34();
  if ( (a1 & 0x20) != 0 )
    byte_18015BFBC |= 4u;
  return result;
}
