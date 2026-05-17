/*
 * XREFs of sub_180011428 @ 0x180011428
 * Callers:
 *     sub_1800113A0 @ 0x1800113A0 (sub_1800113A0.c)
 * Callees:
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     sub_18006E678 @ 0x18006E678 (sub_18006E678.c)
 */

__int64 __fastcall sub_180011428(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rcx

  result = sub_180012820();
  if ( (*(_BYTE *)(result + 24) & 0xCu) < 8 )
  {
    *(_WORD *)(result + 8) |= 1u;
  }
  else
  {
    v5 = ((result - (result & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (result & *(_QWORD *)a1);
    if ( (*(_BYTE *)(result + 24) & 0xC) == 8 )
    {
      v6 = (unsigned __int16)qword_18015A448 ^ *(unsigned __int16 *)(v5 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v5 >> 12);
      result = 0x4000LL;
      *(_WORD *)(v6 + a2 - 2) |= 0x4000u;
    }
    else
    {
      return sub_18006E678(*(_QWORD *)(a1 + 88), a2, v5);
    }
  }
  return result;
}
