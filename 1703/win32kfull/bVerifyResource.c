/*
 * XREFs of bVerifyResource @ 0x1C023461C
 * Callers:
 *     bConvertFontRes @ 0x1C0234348 (bConvertFontRes.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bVerifyResource(__int16 *a1, _DWORD *a2)
{
  __int64 v2; // r10
  __int16 v3; // r14
  int v6; // r8d
  int v8; // ecx
  unsigned int v9; // ebp
  __int16 v10; // r11
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // r11
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // dl
  __int64 v15; // rbx
  int v16; // r9d
  unsigned __int16 *v17; // rdx
  unsigned int v18; // r9d
  unsigned __int16 *v19; // r8
  unsigned __int16 *v20; // r8

  v2 = *(_QWORD *)a2;
  v3 = *a1;
  v6 = (*(unsigned __int8 *)(*(_QWORD *)a2 + 116LL) << 24) | *(unsigned __int8 *)(*(_QWORD *)a2 + 113LL) | (*(unsigned __int16 *)(*(_QWORD *)a2 + 114LL) << 8);
  if ( *a1 == 512 && v6 > 0x10000 )
    return 0LL;
  v8 = a1[4];
  v9 = *(unsigned __int8 *)(v2 + 2) | ((*(unsigned __int8 *)(v2 + 3) | (*(unsigned __int16 *)(v2 + 4) << 8)) << 8);
  if ( v9 > a2[3] )
    v9 = a2[3];
  v10 = *(_WORD *)(v2 + 74);
  if ( abs16(v10) > v8 )
    return 0LL;
  if ( *(__int16 *)(v2 + 78) < 0 )
    return 0LL;
  if ( *(__int16 *)(v2 + 76) > v10 )
    return 0LL;
  v11 = *((_BYTE *)a1 + 4);
  v12 = *((_BYTE *)a1 + 5);
  if ( v11 > v12 )
    return 0LL;
  v13 = *((_BYTE *)a1 + 6);
  if ( (unsigned __int8)(v11 + v13) > v12 )
  {
    if ( v13 < v11 || v13 > v12 )
      *((_BYTE *)a1 + 6) = 0;
    else
      *((_BYTE *)a1 + 6) = v13 - v11;
  }
  v14 = *((_BYTE *)a1 + 7);
  if ( (unsigned __int8)(v11 + v14) > v12 )
  {
    if ( v14 < v11 || v14 > v12 )
      *((_BYTE *)a1 + 7) = 0;
    else
      *((_BYTE *)a1 + 7) = v14 - v11;
  }
  v15 = *((int *)a1 + 4);
  if ( (_DWORD)v15 != 118 && (_DWORD)v15 != 148 )
    return 0LL;
  v16 = v12 - v11 + 1;
  v17 = (unsigned __int16 *)(v15 + *(_QWORD *)a2 + 2LL);
  if ( v3 == 512 )
  {
    if ( v6 != *v17 )
      return 0LL;
    v18 = 2 * v16;
    if ( v18 * 2 + (_DWORD)v15 + 2 > a2[3] )
      return 0LL;
    v19 = &v17[v18];
    while ( v17 < v19 )
    {
      if ( *v17 > v9 )
        return 0LL;
      v17 += 2;
    }
  }
  else
  {
    if ( v6 != ((*((unsigned __int8 *)v17 + 3) << 24) | *(unsigned __int8 *)v17 | (*(unsigned __int16 *)((char *)v17 + 1) << 8))
      || (unsigned int)(6 * v16 + v15 + 2) > a2[3] )
    {
      return 0LL;
    }
    v20 = (unsigned __int16 *)((char *)v17 + (unsigned int)(6 * v16));
    while ( v17 < v20 )
    {
      if ( (*(unsigned __int8 *)v17 | ((*((unsigned __int8 *)v17 + 1) | (v17[1] << 8)) << 8)) > v9 )
        return 0LL;
      v17 += 3;
    }
  }
  return v3 != 768
      || (*(_BYTE *)(v2 + 118) & 0xE0) == 0
      && !((*(unsigned __int8 *)(*(_QWORD *)a2 + 131LL) << 24) | *(unsigned __int8 *)(*(_QWORD *)a2 + 128LL) | (*(unsigned __int16 *)(*(_QWORD *)a2 + 129LL) << 8));
}
