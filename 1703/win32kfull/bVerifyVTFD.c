/*
 * XREFs of bVerifyVTFD @ 0x1C0236EA4
 * Callers:
 *     bVtfdLoadFont @ 0x1C023714C (bVtfdLoadFont.c)
 * Callees:
 *     bMappedViewStrlen @ 0x1C0236A94 (bMappedViewStrlen.c)
 */

__int64 __fastcall bVerifyVTFD(unsigned __int16 **a1)
{
  __int64 v1; // rsi
  unsigned __int16 *v2; // r10
  char v4; // r9
  unsigned __int8 v5; // cl
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v8; // r11d
  int v9; // edi
  __int64 v10; // r13
  int v11; // eax
  __int16 v12; // r11
  int v13; // r9d
  __int16 v14; // ax
  int v15; // r9d
  unsigned __int8 v16; // al
  unsigned __int8 v17; // cl
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // ecx
  __int64 v22; // rdi
  unsigned int v23; // ebp
  __int64 v24; // r12
  __int64 v25; // rcx
  unsigned __int16 v26; // r9
  _BYTE *v27; // rax
  unsigned int v28; // r11d
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  int v30; // [rsp+68h] [rbp+10h]
  int v31; // [rsp+70h] [rbp+18h]

  v1 = *((unsigned int *)a1 + 3);
  v2 = *a1;
  if ( (unsigned int)v1 < 0x76 )
    return 0LL;
  v4 = *((_BYTE *)v2 + 66);
  if ( (v4 & 1) == 0 )
    return 0LL;
  if ( ((*v2 - 256) & 0xFFFFFEFF) != 0 )
    return 0LL;
  v5 = *((_BYTE *)v2 + 113);
  if ( (v5 & 1) != 0 )
    return 0LL;
  v6 = *((unsigned __int8 *)v2 + 2) | ((*((unsigned __int8 *)v2 + 3) | (v2[2] << 8)) << 8);
  if ( v6 > (unsigned int)v1 )
    return 0LL;
  v7 = v5 | ((*((unsigned __int8 *)v2 + 114) | (*(unsigned __int16 *)((char *)v2 + 115) << 8)) << 8);
  if ( v7 > v6 )
    return 0LL;
  v8 = *((unsigned __int8 *)v2 + 106);
  v9 = *((unsigned __int8 *)v2 + 105);
  v10 = *((unsigned __int8 *)v2 + 108);
  v11 = *((unsigned __int8 *)v2 + 108);
  LODWORD(v29) = *((unsigned __int8 *)v2 + 107);
  v30 = v8;
  v31 = v9;
  if ( (v9 | ((v8 | (((unsigned int)v29 | (v11 << 8)) << 8)) << 8)) > v6
    || v4 & 0x7A | (*((unsigned __int8 *)v2 + 67) << 8) )
  {
    return 0LL;
  }
  v12 = v2[37];
  v13 = *((unsigned __int8 *)v2 + 74);
  v14 = *((unsigned __int8 *)v2 + 75) << 8;
  v15 = v12 >= 0 ? v14 | v13 : -(v14 | v13);
  if ( v15 > (*((unsigned __int8 *)v2 + 88) | (__int16)(*((unsigned __int8 *)v2 + 89) << 8)) )
    return 0LL;
  if ( (__int16)v2[38] > v12 )
    return 0LL;
  v16 = *((_BYTE *)v2 + 95);
  v17 = *((_BYTE *)v2 + 96);
  if ( v16 > v17 )
    return 0LL;
  v18 = v17 - v16;
  if ( *((unsigned __int8 *)v2 + 97) > v18 || *((unsigned __int8 *)v2 + 98) > v18 )
    return 0LL;
  v19 = v18 + 1;
  if ( v2[43] )
  {
    v20 = 2 * v19;
    v21 = 2;
  }
  else
  {
    v20 = 4 * v19;
    v21 = 4;
  }
  if ( v20 * v21 + 117 > (unsigned int)v1 )
    return 0LL;
  v22 = v20;
  v23 = 0;
  if ( v20 >= 0 )
  {
    v24 = v21;
    v25 = 0LL;
    do
    {
      v26 = *(unsigned __int16 *)((char *)v2 + v25 + 117);
      if ( v26 < v23 || v26 + v7 < v26 || v26 + v7 > v6 )
        return 0LL;
      if ( v25 == v22 )
        break;
      v27 = (char *)v2 + v7 + v26;
      if ( v27 >= (_BYTE *)v2 + v6 || *v27 != 0x80 )
        return 0LL;
      v25 += v24;
      v23 = v26;
    }
    while ( v25 <= v22 );
  }
  LOBYTE(v28) = (unsigned int)bMappedViewStrlen(
                                (unsigned __int64)v2,
                                v1,
                                (_BYTE *)v2
                              + ((unsigned __int8)v31 | (((unsigned __int8)v30 | (((unsigned __int8)v29 | (unsigned __int64)(v10 << 8)) << 8)) << 8)),
                                &v29) != 0;
  return v28;
}
