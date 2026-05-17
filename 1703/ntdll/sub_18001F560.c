/*
 * XREFs of sub_18001F560 @ 0x18001F560
 * Callers:
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_1801006CC @ 0x1801006CC (sub_1801006CC.c)
 * Callees:
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 */

__int64 __fastcall sub_18001F560(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  result = sub_180020EF0(a1, a2);
  if ( (*(_BYTE *)(result + 24) & 0x21) != 0 )
  {
    v4 = (result & 0xFFFFFFFFFFF00000uLL)
       + ((unsigned int)((__int64)(result - (result & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    if ( (*(_BYTE *)(result + 24) & 1) != 0 )
    {
      result = (unsigned __int16)qword_18015BFE8;
      v5 = (unsigned __int16)qword_18015BFE8 ^ *(unsigned __int16 *)(v4 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)v4 >> 12);
    }
    else
    {
      result = WORD1(qword_18015BFA8);
      v5 = 16 * (WORD1(qword_18015BFA8) ^ ((unsigned int)(a2 - 16) >> 16) ^ *(unsigned __int16 *)(a2 - 16 + 2)) - 16;
    }
    *(_WORD *)(v5 + a2 - 2) |= 0x4000u;
  }
  else
  {
    *(_WORD *)(result + 4) |= 1u;
  }
  return result;
}
