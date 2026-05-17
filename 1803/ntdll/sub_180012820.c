/*
 * XREFs of sub_180012820 @ 0x180012820
 * Callers:
 *     sub_180011428 @ 0x180011428 (sub_180011428.c)
 *     sub_180011560 @ 0x180011560 (sub_180011560.c)
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_180012010 @ 0x180012010 (sub_180012010.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180063ACC @ 0x180063ACC (sub_180063ACC.c)
 *     sub_180083574 @ 0x180083574 (sub_180083574.c)
 * Callees:
 *     sub_180105970 @ 0x180105970 (sub_180105970.c)
 */

__int64 __fastcall sub_180012820(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  __int64 result; // rax

  if ( (dword_180159760 & 1) != 0 )
  {
    result = sub_180105970();
  }
  else
  {
    v4 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v4 ^ qword_18015A440 ^ *(_QWORD *)(v4 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      result = v4 + 32 * ((unsigned __int64)(unsigned int)(a2 - v4) >> *(_BYTE *)(a1 + 8));
    else
      result = 0LL;
  }
  if ( !result || (*(_BYTE *)(result + 24) & 1) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(result + 24) & 2) == 0 )
  {
    result += -32LL * *(unsigned __int8 *)(result + 31);
    if ( (*(_BYTE *)(result + 24) & 1) != 0
      && (*(_BYTE *)(result + 24) & 2) != 0
      && (*(_BYTE *)(result + 24) & 0xCu) >= 8 )
    {
      return result;
    }
    return 0LL;
  }
  if ( (*(_BYTE *)(result + 24) & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
    return 0LL;
  return result;
}
