/*
 * XREFs of bVerifyVTFD @ 0x1C0238464
 * Callers:
 *     bVtfdLoadFont @ 0x1C0238704 (bVtfdLoadFont.c)
 * Callees:
 *     bMappedViewStrlen @ 0x1C0238040 (bMappedViewStrlen.c)
 */

__int64 __fastcall bVerifyVTFD(unsigned __int16 **a1)
{
  __int64 v1; // r14
  unsigned __int16 *v2; // r10
  char v4; // r9
  unsigned __int8 v5; // cl
  unsigned int v6; // edx
  unsigned int v7; // r8d
  int v8; // r11d
  int v9; // edi
  int v10; // ebp
  __int16 v11; // r11
  int v12; // r9d
  __int16 v13; // ax
  int v14; // r9d
  unsigned __int8 v15; // al
  unsigned __int8 v16; // cl
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  unsigned int v20; // ecx
  __int64 v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // r13
  __int64 v24; // rcx
  unsigned __int16 v25; // r9
  _BYTE *v26; // rax
  unsigned int v27; // r11d
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF
  int v29; // [rsp+68h] [rbp+10h]
  int v30; // [rsp+70h] [rbp+18h]

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
  LODWORD(v28) = *((unsigned __int8 *)v2 + 107);
  v29 = v8;
  v30 = v9;
  if ( (v9 | ((v8 | (((unsigned int)v28 | (v10 << 8)) << 8)) << 8)) > v6
    || v4 & 0x7A | (*((unsigned __int8 *)v2 + 67) << 8) )
  {
    return 0LL;
  }
  v11 = v2[37];
  v12 = *((unsigned __int8 *)v2 + 74);
  v13 = *((unsigned __int8 *)v2 + 75) << 8;
  v14 = v11 >= 0 ? v13 | v12 : -(v13 | v12);
  if ( v14 > (*((unsigned __int8 *)v2 + 88) | (__int16)(*((unsigned __int8 *)v2 + 89) << 8)) )
    return 0LL;
  if ( (__int16)v2[38] > v11 )
    return 0LL;
  v15 = *((_BYTE *)v2 + 95);
  v16 = *((_BYTE *)v2 + 96);
  if ( v15 > v16 )
    return 0LL;
  v17 = v16 - v15;
  if ( *((unsigned __int8 *)v2 + 97) > v17 || *((unsigned __int8 *)v2 + 98) > v17 )
    return 0LL;
  v18 = v17 + 1;
  if ( v2[43] )
  {
    v19 = 2 * v18;
    v20 = 2;
  }
  else
  {
    v19 = 4 * v18;
    v20 = 4;
  }
  if ( v19 * v20 + 117 > (unsigned int)v1 )
    return 0LL;
  v21 = v19;
  v22 = 0;
  if ( v19 >= 0 )
  {
    v23 = v20;
    v24 = 0LL;
    do
    {
      v25 = *(unsigned __int16 *)((char *)v2 + v24 + 117);
      if ( v25 < v22 || v25 + v7 < v25 || v25 + v7 > v6 )
        return 0LL;
      if ( v24 == v21 )
        break;
      v26 = (char *)v2 + v7 + v25;
      if ( v26 >= (_BYTE *)v2 + v6 || *v26 != 0x80 )
        return 0LL;
      v24 += v23;
      v22 = v25;
    }
    while ( v24 <= v21 );
  }
  LOBYTE(v27) = (unsigned int)bMappedViewStrlen(
                                (unsigned __int64)v2,
                                v1,
                                (_BYTE *)v2
                              + ((unsigned __int8)v30 | (unsigned __int64)((v29 | (((unsigned int)v28 | (v10 << 8)) << 8)) << 8)),
                                &v28) != 0;
  return v27;
}
