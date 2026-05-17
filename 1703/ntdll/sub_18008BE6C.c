/*
 * XREFs of sub_18008BE6C @ 0x18008BE6C
 * Callers:
 *     sub_180007C18 @ 0x180007C18 (sub_180007C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008BE6C(__int64 a1, __int64 a2, int a3, int *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // edx
  int v6; // edx

  v4 = (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v5 = *(unsigned __int16 *)(((unsigned __int16)qword_18015BFE8 ^ (unsigned __int64)(unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12)))
                             + a2
                             - 2);
    if ( (unsigned __int16)v5 >= 0x8000u )
      --v4;
    else
      v4 -= v5 & 0x3FFF;
    v6 = (v5 >> 14) & 1;
  }
  else
  {
    v6 = 0;
  }
  if ( a4 )
    *a4 = v6;
  return v4;
}
