/*
 * XREFs of sfac_ComputeIndex4 @ 0x1C02C9244
 * Callers:
 *     InvokeGlyphMappingF @ 0x1C02C8ECC (InvokeGlyphMappingF.c)
 * Callees:
 *     sfac_ComputeBinarySearchParams @ 0x1C02C9144 (sfac_ComputeBinarySearchParams.c)
 */

__int64 __fastcall sfac_ComputeIndex4(_WORD *a1, unsigned __int16 a2, _WORD *a3)
{
  _WORD *v3; // rbx
  unsigned __int16 v4; // si
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // dx
  _WORD *v10; // r8
  unsigned __int16 v11; // ax
  __int16 *v12; // r8
  __int16 v13; // cx
  __int16 v14; // dx
  _WORD *v15; // r8
  __int16 v16; // dx
  unsigned __int16 v17; // ax
  __int16 v19; // r8
  unsigned __int16 v21; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 v22; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v23; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1 + 4;
  v4 = __ROR2__(*a1, 8);
  if ( v4 < 0x10u || a2 <= 0xFFu )
    goto LABEL_48;
  if ( a3 )
  {
    v8 = a3[109];
    v6 = a3[111];
    v7 = a3[110];
  }
  else
  {
    sfac_ComputeBinarySearchParams(v4 >> 1, &v23, &v21, &v22);
    v6 = v22;
    v7 = v21;
    v8 = v23;
  }
  if ( a2 >= __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
    v3 = (_WORD *)((char *)v3 + v6);
  if ( v7 > 0xAu )
  {
    if ( v7 != 11 )
    {
      if ( v7 != 12 )
      {
        if ( v7 != 13 )
        {
          if ( v7 != 14 )
          {
            if ( v7 != 15 )
              goto LABEL_48;
            v8 >>= 1;
            if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
              v3 = (_WORD *)((char *)v3 + v8);
          }
          v8 >>= 1;
          if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
            v3 = (_WORD *)((char *)v3 + v8);
        }
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
      }
      v8 >>= 1;
      if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
        v3 = (_WORD *)((char *)v3 + v8);
    }
    v8 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
      v3 = (_WORD *)((char *)v3 + v8);
    goto LABEL_32;
  }
  if ( v7 == 10 )
  {
LABEL_32:
    v8 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
      v3 = (_WORD *)((char *)v3 + v8);
    goto LABEL_34;
  }
  if ( v7 != 4 )
  {
    switch ( v7 )
    {
      case 5u:
LABEL_42:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_44;
      case 6u:
LABEL_40:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_42;
      case 7u:
LABEL_38:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_40;
      case 8u:
LABEL_36:
        v8 >>= 1;
        if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
          v3 = (_WORD *)((char *)v3 + v8);
        goto LABEL_38;
    }
    if ( v7 != 9 )
      goto LABEL_48;
LABEL_34:
    v8 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v8), 8) )
      v3 = (_WORD *)((char *)v3 + v8);
    goto LABEL_36;
  }
LABEL_44:
  v9 = v8 >> 1;
  if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v9), 8) )
    v3 = (_WORD *)((char *)v3 + v9);
LABEL_48:
  while ( a2 > __ROR2__(*v3, 8) )
    ++v3;
  v10 = (_WORD *)((char *)v3 + v4 + 2);
  v11 = __ROR2__(*v10, 8);
  if ( a2 < v11 )
  {
    return 0;
  }
  else
  {
    v12 = (_WORD *)((char *)v10 + v4);
    v13 = a2 - v11;
    v14 = *v12;
    v15 = (__int16 *)((char *)v12 + v4);
    v16 = __ROR2__(v14, 8);
    v17 = __ROR2__(*v15, 8);
    if ( v17 )
    {
      v19 = __ROR2__(*(_WORD *)((char *)v15 + v17 + (unsigned __int16)(2 * v13)), 8);
      if ( v19 )
        return (unsigned __int16)(v19 + v16);
      else
        return 0;
    }
    else
    {
      return (unsigned __int16)(a2 + v16);
    }
  }
}
