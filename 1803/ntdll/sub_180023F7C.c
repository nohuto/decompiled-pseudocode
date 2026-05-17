/*
 * XREFs of sub_180023F7C @ 0x180023F7C
 * Callers:
 *     sub_1800235C8 @ 0x1800235C8 (sub_1800235C8.c)
 *     sub_180023F18 @ 0x180023F18 (sub_180023F18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180023F7C(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 *a4)
{
  int v4; // r11d
  __int64 v6; // rcx
  unsigned int v9; // r10d
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned __int64 v13; // r8
  __int64 result; // rax

  v4 = a1;
  v6 = 16 * (WORD1(qword_18015A440) ^ *(unsigned __int16 *)(a1 + 2) ^ WORD1(a1));
  v9 = ((v6 + (unsigned __int64)(v4 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v6 + 4095) >> 12);
  v10 = (v4 - a2 + 4127) & 0xFFFFF000;
  v11 = (v4 + v6 - a2) & 0xFFFFF000;
  if ( v10 < v11 )
  {
    v12 = v11 - v10;
    v13 = *(_QWORD *)(a2 + 16) & (-1LL << (v10 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v11 - 1) >> 12)));
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
  }
  result = v9;
  *a3 = v12 >> 12;
  *a4 = v13;
  return result;
}
