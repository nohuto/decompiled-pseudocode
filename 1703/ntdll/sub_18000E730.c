/*
 * XREFs of sub_18000E730 @ 0x18000E730
 * Callers:
 *     sub_18000E6BC @ 0x18000E6BC (sub_18000E6BC.c)
 *     sub_18001C638 @ 0x18001C638 (sub_18001C638.c)
 * Callees:
 *     sub_18000E97C @ 0x18000E97C (sub_18000E97C.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 */

_QWORD *__fastcall sub_18000E730(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  _QWORD *i; // rdi
  __int64 v18; // r8
  unsigned int *v19; // r9
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // r8
  int v23; // [rsp+38h] [rbp-28h]
  int v24; // [rsp+50h] [rbp-10h]
  int v25; // [rsp+A8h] [rbp+48h]

  v25 = a4;
  v5 = *(_QWORD **)(a2 + 32);
  v6 = (unsigned int)(a4 - *(_DWORD *)(a2 + 24));
  v7 = 0LL;
  v11 = v5[1];
  if ( v5 == (_QWORD *)v11 )
    return v5;
  if ( a3 )
  {
    v23 = *(_DWORD *)(v11 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v23 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v11 - 16 + 8);
      if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE2(v23) ^ BYTE1(v23))) )
        sub_1800A4DFC(3, a1, v11 - 16, 0, 0LL, 0LL);
    }
    v12 = a5;
    v13 = a5 - (unsigned __int16)v23;
  }
  else
  {
    v12 = a5;
    v13 = a5 - *(_DWORD *)(v11 + 40);
  }
  if ( v13 > 0 )
    return v5;
  v14 = *v5;
  if ( a3 )
  {
    v24 = *(_DWORD *)(v14 - 16 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v24 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v14 - 16 + 8);
      if ( HIBYTE(v24) != ((unsigned __int8)v24 ^ (unsigned __int8)(BYTE1(v24) ^ BYTE2(v24))) )
        sub_1800A4DFC(3, a1, v14 - 16, 0, 0LL, 0LL);
    }
    v15 = v12 - (unsigned __int16)v24;
  }
  else
  {
    v15 = v12 - *(_DWORD *)(v14 + 40);
  }
  if ( v15 <= 0 )
    return (_QWORD *)*v5;
  if ( *(_QWORD *)a2 || v25 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v18 = (unsigned int)v6 >> 5;
    v19 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v18);
    v20 = *v19 & ~((1 << (v6 & 0x1F)) - 1);
    if ( v20 )
      goto LABEL_27;
    do
    {
      if ( (unsigned int)v18 > ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
        break;
      ++v19;
      LODWORD(v18) = v18 + 1;
      v20 = *v19;
    }
    while ( !*v19 );
    if ( v20 )
    {
LABEL_27:
      if ( (_WORD)v20 )
      {
        if ( (_BYTE)v20 )
          v21 = (unsigned __int8)byte_180119B00[(unsigned __int8)v20];
        else
          v21 = (unsigned __int8)byte_180119B00[BYTE1(v20)] + 8;
      }
      else if ( (v20 & 0xFF0000) != 0 )
      {
        v21 = (unsigned __int8)byte_180119B00[BYTE2(v20)] + 16;
      }
      else
      {
        v21 = (unsigned __int8)byte_180119B00[(unsigned __int64)v20 >> 24] + 24;
      }
      v22 = (unsigned int)(v21 + 32 * v18);
      if ( *(_DWORD *)(a2 + 12) )
        v22 = (unsigned int)(2 * v22);
      return *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v22);
    }
  }
  else
  {
    if ( *(_DWORD *)(a2 + 12) )
      v6 = (unsigned int)(2 * v6);
    for ( i = *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v6); v5 != i; i = (_QWORD *)*i )
    {
      LOBYTE(a4) = a3;
      if ( (int)sub_18000E97C(a1, i, v12, a4) <= 0 )
        return i;
    }
  }
  return (_QWORD *)v7;
}
