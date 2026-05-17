/*
 * XREFs of sub_180008820 @ 0x180008820
 * Callers:
 *     sub_18000853C @ 0x18000853C (sub_18000853C.c)
 * Callees:
 *     sub_180021E9C @ 0x180021E9C (sub_180021E9C.c)
 */

unsigned __int64 __fastcall sub_180008820(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r11
  int v12; // ecx
  _QWORD **v14; // rcx
  _QWORD *i; // rax

  if ( a3 == a2 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    {
      v14 = (_QWORD **)(a1 + 24);
      for ( i = *v14; i != v14; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)a2 )
          goto LABEL_14;
      }
      if ( i == (_QWORD *)a2 )
      {
LABEL_14:
        v7 = a2 + 48;
        goto LABEL_3;
      }
    }
    return 0LL;
  }
  v7 = 16
     * (WORD1(qword_18015BFA8) ^ *(unsigned __int16 *)(a3 - 16 + 2) ^ ((unsigned __int64)(unsigned int)(a3 - 16) >> 16))
     + a3
     - 16;
LABEL_3:
  v8 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  if ( v7 >= v8 )
    return 0LL;
  while ( ((HIDWORD(qword_18015BFA8) ^ HIDWORD(v7) ^ HIDWORD(*(_QWORD *)v7)) & 0xFF0000) == 0
       || (*(_DWORD *)(v7 + 8) & 0x200) != 0 )
  {
    v7 += 16 * (WORD1(qword_18015BFA8) ^ *(unsigned __int16 *)(v7 + 2) ^ ((unsigned __int64)(unsigned int)v7 >> 16));
    if ( v7 >= v8 )
      return 0LL;
  }
  v9 = v7 + 16;
  v10 = sub_180021E9C(v7 + 16, v8, a6);
  v12 = *(unsigned __int16 *)(v11 + 2);
  *a4 = v10;
  *a5 = 16 * (WORD1(qword_18015BFA8) ^ WORD1(v11) ^ v12) - v10 - 16;
  return v9;
}
