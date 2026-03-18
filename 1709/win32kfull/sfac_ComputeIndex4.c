/*
 * XREFs of sfac_ComputeIndex4 @ 0x1C02C304C
 * Callers:
 *     InvokeGlyphMappingF @ 0x1C02C2CD8 (InvokeGlyphMappingF.c)
 * Callees:
 *     sfac_ComputeBinarySearchParams @ 0x1C02C2F4C (sfac_ComputeBinarySearchParams.c)
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
  __int16 v11; // r9
  __int16 *v12; // r8
  __int16 v13; // dx
  _WORD *v14; // r8
  __int16 v15; // dx
  unsigned __int16 v16; // cx
  __int16 v18; // r8
  unsigned __int16 v20; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 v21; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v22; // [rsp+58h] [rbp+20h] BYREF

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
    sfac_ComputeBinarySearchParams(v4 >> 1, &v22, &v20, &v21);
    v6 = v21;
    v7 = v20;
    v8 = v22;
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
  v11 = *v10;
  if ( a2 < __ROR2__(*v10, 8) )
  {
    return 0;
  }
  else
  {
    v12 = (_WORD *)((char *)v10 + v4);
    v13 = *v12;
    v14 = (__int16 *)((char *)v12 + v4);
    v15 = __ROR2__(v13, 8);
    v16 = __ROR2__(*v14, 8);
    if ( v16 )
    {
      v18 = __ROR2__(*(_WORD *)((char *)v14 + (unsigned __int16)(2 * (a2 - __ROR2__(v11, 8))) + v16), 8);
      if ( v18 )
        return (unsigned __int16)(v18 + v15);
      else
        return 0;
    }
    else
    {
      return (unsigned __int16)(a2 + v15);
    }
  }
}
