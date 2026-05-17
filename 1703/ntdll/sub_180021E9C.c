/*
 * XREFs of sub_180021E9C @ 0x180021E9C
 * Callers:
 *     sub_180008820 @ 0x180008820 (sub_180008820.c)
 *     sub_180020FD8 @ 0x180020FD8 (sub_180020FD8.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180021E9C(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // r9
  __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // edx

  v3 = a1 - 16;
  if ( ((((unsigned __int64)(a1 - 16) >> 32) ^ HIDWORD(qword_18015BFA8) ^ (unsigned int)HIDWORD(*(_QWORD *)(a1 - 16))) & 0xFF0000) != 0 )
  {
    v5 = 16 * (WORD1(qword_18015BFA8) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 16;
    if ( (*(_DWORD *)(v3 + 8) & 0x100) != 0 )
    {
      v6 = *(unsigned __int16 *)(v5 + a1 - 2);
      if ( (unsigned __int16)v6 >= 0x8000u )
        LODWORD(v5) = 16 * (WORD1(qword_18015BFA8) ^ WORD1(v3) ^ *(unsigned __int16 *)(v3 + 2)) - 17;
      else
        LODWORD(v5) = v5 - (v6 & 0x1FFF);
      v7 = (v6 >> 14) & 1;
    }
    else
    {
      v7 = 0;
    }
    if ( a3 )
      *a3 = v7;
  }
  else
  {
    LODWORD(v5) = -1;
  }
  return (unsigned int)v5;
}
