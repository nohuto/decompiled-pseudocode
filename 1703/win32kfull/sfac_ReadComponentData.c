/*
 * XREFs of sfac_ReadComponentData @ 0x1C02CA7EC
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02C7254 (fsg_ExecuteGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sfac_ReadComponentData(
        __int64 a1,
        _DWORD *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        int *a6,
        _WORD *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        __int64 a12,
        _DWORD *a13,
        int *a14)
{
  __int16 *v14; // r10
  __int16 v16; // bx
  _WORD *v17; // r10
  unsigned __int16 v18; // bx
  __int16 v19; // cx
  char *v20; // r10
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // ax
  __int16 *v25; // rdx
  int v26; // ecx
  __int16 v27; // ax
  unsigned int v28; // ecx
  bool v29; // cf

  v14 = *(__int16 **)(a1 + 8);
  *(_OWORD *)a12 = xmmword_1C02F4558;
  *(_OWORD *)(a12 + 16) = xmmword_1C02F4568;
  *(_DWORD *)(a12 + 32) = 0x10000;
  *a8 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  v16 = *v14;
  v17 = v14 + 1;
  v18 = __ROR2__(v16, 8);
  *a13 = 0;
  *a6 = HIBYTE(v18) & 1;
  *a4 = (v18 >> 9) & 1;
  *a3 = (v18 >> 2) & 1;
  if ( (v18 & 0x800) != 0 )
    *a5 = 1;
  if ( (v18 & 0x1000) != 0 )
    *a5 = 0;
  v19 = *v17;
  v20 = (char *)(v17 + 1);
  *a7 = __ROR2__(v19, 8);
  *a2 = (v18 & 2) != 0;
  if ( (v18 & 1) != 0 )
  {
    v21 = *(_WORD *)v20;
    v20 += 2;
    v22 = __ROR2__(v21, 8);
    if ( (v18 & 2) != 0 )
    {
      *a8 = v22;
      v23 = __ROR2__(*(_WORD *)v20, 8);
LABEL_8:
      *a9 = v23;
      goto LABEL_14;
    }
    *a10 = v22;
    v24 = __ROR2__(*(_WORD *)v20, 8);
  }
  else
  {
    if ( (v18 & 2) != 0 )
    {
      *a8 = *v20;
      v23 = v20[1];
      goto LABEL_8;
    }
    *a10 = (unsigned __int8)*v20;
    v24 = (unsigned __int8)v20[1];
  }
  *a11 = v24;
LABEL_14:
  v25 = (__int16 *)(v20 + 2);
  if ( (v18 & 0xC8) != 0 )
  {
    *a13 = 1;
    v25 = (__int16 *)(v20 + 4);
    if ( (v18 & 0x80u) == 0 )
    {
      *(_DWORD *)(a12 + 4) = 0;
      *(_DWORD *)(a12 + 12) = 0;
      v26 = 4 * (__int16)__ROR2__(*((_WORD *)v20 + 1), 8);
      *(_DWORD *)a12 = v26;
      if ( (v18 & 0x40) == 0 )
      {
        *(_DWORD *)(a12 + 16) = v26;
        goto LABEL_20;
      }
    }
    else
    {
      *(_DWORD *)a12 = 4 * (__int16)__ROR2__(*((_WORD *)v20 + 1), 8);
      *(_DWORD *)(a12 + 4) = 4 * (__int16)__ROR2__(*v25, 8);
      v25 = (__int16 *)(v20 + 8);
      *(_DWORD *)(a12 + 12) = 4 * (__int16)__ROR2__(*((_WORD *)v20 + 3), 8);
    }
    v27 = *v25++;
    *(_DWORD *)(a12 + 16) = 4 * (__int16)__ROR2__(v27, 8);
  }
LABEL_20:
  v28 = v18;
  LOWORD(v28) = ~v18;
  *(_QWORD *)(a1 + 8) = v25;
  v29 = *(_QWORD *)(a1 + 16) < (unsigned __int64)v25;
  *a14 = (v28 >> 5) & 1;
  return v29 ? 0x140D : 0;
}
