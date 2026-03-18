/*
 * XREFs of ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D54D0
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00393D4 (-ulCallAndConvertFontOutput@@YAKPEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D4DE4 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 * Callees:
 *     ?SelectStorageTable@RFONTOBJ@@SAPEBEPEAVRFONT@@PEBE1@Z @ 0x1C00D5758 (-SelectStorageTable@RFONTOBJ@@SAPEBEPEAVRFONT@@PEBE1@Z.c)
 */

__int64 __fastcall ulClearTypeFilter_6x1(struct _GLYPHBITS *a1, struct _GLYPHDATA *a2, struct RFONT *a3)
{
  __int64 cx; // rbx
  struct _GLYPHBITS *v4; // rsi
  LONG cy; // edi
  const unsigned __int8 *v6; // rax
  BYTE *aj; // r10
  int v8; // ebp
  BYTE *v9; // rdx
  const unsigned __int8 *v10; // r12
  LONG i; // r8d
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // r8d
  unsigned int v15; // r11d
  int v16; // ebp
  _BYTE *v17; // r14
  __int64 v18; // rax
  BYTE *v19; // r15
  __int64 v20; // r9
  _BYTE *v21; // rdi
  __int64 v22; // r13
  BYTE *v23; // rbx
  _BYTE *v24; // rax
  unsigned __int8 v25; // si
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // r11
  int v28; // r10d
  int v29; // r8d
  __int64 result; // rax
  __int64 v31; // [rsp+20h] [rbp-58h]
  BYTE *v32; // [rsp+28h] [rbp-50h]
  int v33; // [rsp+30h] [rbp-48h]
  int v35; // [rsp+88h] [rbp+10h]
  unsigned int v36; // [rsp+98h] [rbp+20h]

  cx = (unsigned int)a1->sizlBitmap.cx;
  v4 = a1;
  cy = a1->sizlBitmap.cy;
  if ( __PAIR64__(cy, cx) != 0x100000001LL || a1->aj[0] )
  {
    v6 = RFONTOBJ::SelectStorageTable(a3, (const unsigned __int8 *)a2, (const unsigned __int8 *)a3);
    aj = v4->aj;
    v8 = 0;
    v32 = v4->aj;
    v9 = v4->aj;
    v10 = v6;
    for ( i = cy; i; --i )
    {
      v12 = v8 | 1;
      if ( (*v9 & 0x30) == 0 )
        v12 = v8;
      v8 = v12 | 2;
      if ( (v9[(unsigned int)(cx - 1)] & 3) == 0 )
        v8 = v12;
      if ( (v8 & 3) == 3 )
        break;
      v9 += cx;
    }
    v13 = cx;
    v14 = v8 & 1;
    v35 = v14;
    if ( (v8 & 1) != 0 )
      v13 = cx + 1;
    v15 = v13 + 1;
    v16 = v8 & 2;
    if ( !v16 )
      v15 = v13;
    v36 = v15;
    v17 = (char *)&v4->sizlBitmap.cy + (unsigned int)(cx * cy) + 3;
    v18 = cy * v15;
    v19 = (BYTE *)&v4->sizlBitmap.cy + v18 + 3;
    v33 = cy * v15;
    if ( v19 > aj )
    {
      v20 = v15;
      v21 = &v17[-cx];
      v31 = v15;
      v22 = cx;
      do
      {
        v23 = v19;
        v24 = v17;
        if ( v16 )
        {
          v23 = v19 - 1;
          *v19 = v10[81 * (*v17 & 3)];
        }
        v25 = *v17;
        v26 = 0;
        if ( v17 > v21 )
        {
          do
          {
            if ( v24 == v21 + 1 )
              v27 = 0;
            else
              v27 = *(v24 - 1);
            v28 = (v26 >> 4) & 3;
            if ( (v27 & 3) != 0 || v25 || v28 )
            {
              v29 = (v25 & 3) + 3 * (((v25 >> 2) & 3) + 3 * (3 * (v27 & 3) + ((v25 >> 4) & 3)));
              *v23 = v10[v28 + 2 * v29 + v29];
            }
            else
            {
              *v23 = 0;
            }
            --v24;
            --v23;
            v26 = v25;
            v25 = v27;
          }
          while ( v24 > v21 );
          v14 = v35;
          v20 = v31;
          aj = v32;
        }
        if ( v14 )
          *v23 = v10[((unsigned __int64)(unsigned __int8)v21[1] >> 4) & 3];
        v19 -= v20;
        v17 -= v22;
        v21 -= v22;
      }
      while ( v19 > aj );
      v4 = a1;
      v15 = v36;
      LODWORD(v18) = v33;
    }
    v4->sizlBitmap.cx = v15;
    if ( v14 )
      --v4->ptlOrigin.x;
    return (((_DWORD)v18 + 3) & 0xFFFFFFFC) + 16;
  }
  else
  {
    result = 16LL;
    a1->sizlBitmap = 0LL;
  }
  return result;
}
