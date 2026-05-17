/*
 * XREFs of sub_180013330 @ 0x180013330
 * Callers:
 *     sub_180012F50 @ 0x180012F50 (sub_180012F50.c)
 *     sub_18002ACD0 @ 0x18002ACD0 (sub_18002ACD0.c)
 *     sub_18005C238 @ 0x18005C238 (sub_18005C238.c)
 * Callees:
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 */

__int64 *__fastcall sub_180013330(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 *v5; // r14
  __int64 v6; // r12
  __int64 v11; // rax
  int v12; // r8d
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // ebp
  __int64 v17; // rax
  int v18; // r8d
  int v19; // eax
  int v20; // ecx
  __int64 *v21; // rbx
  int v22; // ecx
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned int v26; // edx
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // r8
  int v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+48h] [rbp-40h]
  int v32; // [rsp+58h] [rbp-30h]

  v5 = *(__int64 **)(a2 + 32);
  v6 = (unsigned int)(a4 - *(_DWORD *)(a2 + 24));
  v11 = v5[1];
  if ( v5 == (__int64 *)v11 )
    return *(__int64 **)(a2 + 32);
  if ( a3 )
  {
    v12 = v11 - 16;
    v13 = *(_DWORD *)(v11 - 8);
    LOWORD(v30) = v13;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v30 = v13 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
        sub_18009A5F0(3, a1, v12, 0, 0LL, 0LL);
    }
    v14 = a5;
    v15 = a5 - (unsigned __int16)v30;
  }
  else
  {
    v14 = a5;
    v15 = a5 - *(_DWORD *)(v11 + 40);
  }
  v16 = v14;
  if ( v15 > 0 )
    return v5;
  v17 = *v5;
  if ( a3 )
  {
    v18 = v17 - 16;
    v19 = *(_DWORD *)(v17 - 8);
    LOWORD(v31) = v19;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v31 = v19 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v31) != ((unsigned __int8)v31 ^ (unsigned __int8)(BYTE1(v31) ^ BYTE2(v31))) )
        sub_18009A5F0(3, a1, v18, 0, 0LL, 0LL);
    }
    v20 = v14 - (unsigned __int16)v31;
  }
  else
  {
    v20 = v14 - *(_DWORD *)(v17 + 40);
  }
  if ( v20 <= 0 )
    return (__int64 *)*v5;
  if ( *(_QWORD *)a2 || a4 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v24 = *(_QWORD *)(a2 + 40);
    v25 = (unsigned int)v6 >> 5;
    v26 = *(_DWORD *)(v24 + 4 * v25) & ~((1 << (v6 & 0x1F)) - 1);
    v27 = v24 + 4 * v25;
    if ( v26 )
    {
LABEL_30:
      if ( (_WORD)v26 )
      {
        if ( (_BYTE)v26 )
          v28 = (unsigned __int8)byte_180119500[(unsigned __int8)v26];
        else
          v28 = (unsigned __int8)byte_180119500[BYTE1(v26)] + 8;
      }
      else if ( (v26 & 0xFF0000) != 0 )
      {
        v28 = (unsigned __int8)byte_180119500[BYTE2(v26)] + 16;
      }
      else
      {
        v28 = (unsigned __int8)byte_180119500[(unsigned __int64)v26 >> 24] + 24;
      }
      v29 = (unsigned int)(v28 + 32 * v25);
      if ( *(_DWORD *)(a2 + 12) )
        v29 = (unsigned int)(2 * v29);
      return *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v29);
    }
    while ( (unsigned int)v25 <= ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
    {
      v26 = *(_DWORD *)(v27 + 4);
      v27 += 4LL;
      LODWORD(v25) = v25 + 1;
      if ( v26 )
        goto LABEL_30;
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a2 + 12) )
    v6 = (unsigned int)(2 * v6);
  v21 = *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v6);
  if ( v5 == v21 )
    return 0LL;
  while ( 1 )
  {
    if ( a3 )
    {
      v32 = *((_DWORD *)v21 - 2);
      if ( *(_DWORD *)(a1 + 124) )
      {
        v32 = *((_DWORD *)v21 - 2) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
          sub_18009A5F0(3, a1, (_DWORD)v21 - 16, 0, 0LL, 0LL);
      }
      v22 = v14 - (unsigned __int16)v32;
      v16 = v14;
    }
    else
    {
      v22 = v16 - *((_DWORD *)v21 + 10);
    }
    if ( v22 <= 0 )
      break;
    v21 = (__int64 *)*v21;
    if ( v5 == v21 )
      return 0LL;
  }
  return v21;
}
