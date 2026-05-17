/*
 * XREFs of sub_180009D5C @ 0x180009D5C
 * Callers:
 *     sub_180009BD0 @ 0x180009BD0 (sub_180009BD0.c)
 *     sub_180009CF8 @ 0x180009CF8 (sub_180009CF8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180009D5C(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  __int64 v5; // r11
  unsigned int v8; // r10d
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  __int64 result; // rax

  v5 = 16 * (WORD1(qword_18015BFA8) ^ WORD1(a1) ^ *(unsigned __int16 *)(a1 + 2));
  v8 = ((v5 + (unsigned __int64)(a1 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v5 + 4095) >> 12);
  v9 = (a1 - a2 + 4127) & 0xFFFFF000;
  v10 = (a1 + v5 - a2) & 0xFFFFF000;
  if ( v9 < v10 )
  {
    v11 = v10 - v9;
    v12 = *(_QWORD *)(a2 + 16) & (-1LL << (v9 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v10 - 1) >> 12)));
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
  }
  result = v8;
  *a3 = v11 >> 12;
  *a4 = v12;
  return result;
}
