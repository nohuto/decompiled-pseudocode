/*
 * XREFs of sub_1800021C8 @ 0x1800021C8
 * Callers:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 * Callees:
 *     sub_18006B2D8 @ 0x18006B2D8 (sub_18006B2D8.c)
 */

__int64 __fastcall sub_1800021C8(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // ecx
  unsigned __int64 v14; // rdx
  unsigned __int64 i; // rax

  if ( a3 == a2 )
  {
    v14 = a1 + 32;
    for ( i = *(_QWORD *)v14 ^ v14; i != v14; i ^= *(_QWORD *)i )
    {
      if ( i == a2 )
        goto LABEL_13;
    }
    if ( i == a2 )
    {
LABEL_13:
      v9 = a2 + 48;
      goto LABEL_4;
    }
  }
  else
  {
    v8 = a3 - 16;
    if ( (*(_BYTE *)(a1 + 112) & 1) != 0 && (a3 & 0xFFF) == 0 )
      v8 = a3 - 32;
    v9 = 16 * (WORD1(qword_18015A440) ^ *(unsigned __int16 *)(v8 + 2) ^ ((unsigned __int64)(unsigned int)v8 >> 16)) + v8;
LABEL_4:
    while ( v9 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
    {
      if ( ((v9 ^ qword_18015A440 ^ *(_QWORD *)v9) & 0xFF000000000000LL) != 0 && (*(_DWORD *)(v9 + 8) & 0x200) == 0 )
      {
        v10 = v9 + 16;
        if ( (*(_BYTE *)(a1 + 112) & 1) != 0 && ((v9 + 32) & 0xFFF) == 0 )
          v10 = v9 + 32;
        v11 = sub_18006B2D8(a1, v10, a3, a6);
        v12 = *(unsigned __int16 *)(v9 + 2);
        *a4 = v11;
        *a5 = 16 * (WORD1(qword_18015A440) ^ WORD1(v9) ^ v12) - v11 - 16;
        return v10;
      }
      v9 += 16 * (WORD1(qword_18015A440) ^ *(unsigned __int16 *)(v9 + 2) ^ ((unsigned __int64)(unsigned int)v9 >> 16));
    }
  }
  return 0LL;
}
