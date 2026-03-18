/*
 * XREFs of pcpComputeGlyphset @ 0x1C02B8298
 * Callers:
 *     bConvertFontRes @ 0x1C0234348 (bConvertFontRes.c)
 *     bVtfdLoadFont @ 0x1C023714C (bVtfdLoadFont.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     cUnicodeRangesSupported @ 0x1C00DE754 (cUnicodeRangesSupported.c)
 *     cComputeGlyphSet @ 0x1C00DE93C (cComputeGlyphSet.c)
 *     vSort @ 0x1C00DEACC (vSort.c)
 *     ulCharsetToCodePage @ 0x1C00F7124 (ulCharsetToCodePage.c)
 */

_DWORD *__fastcall pcpComputeGlyphset(__int64 *a1, int a2, int a3, unsigned __int8 a4)
{
  __int64 v4; // r10
  _DWORD *v5; // rbx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  int v10; // r9d
  unsigned int v11; // edi
  _WORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  unsigned int v17; // edx
  unsigned int i; // esi
  _DWORD *v19; // rax
  _DWORD *v20; // rsi

  v4 = *a1;
  v5 = 0LL;
  if ( !*a1 )
    goto LABEL_9;
  do
  {
    if ( *(_DWORD *)(v4 + 4) == a2 && *(_BYTE *)(v4 + 12) == a4 && *(_DWORD *)(v4 + 8) == a3 )
      break;
    v4 = *(_QWORD *)(v4 + 16);
  }
  while ( v4 );
  if ( v4 )
  {
    v8 = *(_DWORD *)v4 + 1;
    if ( v8 >= *(_DWORD *)v4 )
    {
      *(_DWORD *)v4 = v8;
      return (_DWORD *)v4;
    }
  }
  else
  {
LABEL_9:
    v9 = ulCharsetToCodePage(a4);
    v11 = v10 - a2 + 1;
    if ( v11 <= 0x100 )
    {
      v12 = PALLOCMEM2(0x5A0uLL, 1936484167LL, 0);
      v13 = (__int64)v12;
      if ( v12 )
      {
        v14 = (__int64)(v12 + 240);
        v15 = v9;
        if ( v9 == 42 )
          v15 = 0;
        v16 = cUnicodeRangesSupported(v15, a2, v11, v12 + 240, v12);
        if ( v9 == 42 )
        {
          v17 = a2;
          for ( i = v11; v17 < v11 + a2; ++v17 )
          {
            if ( i >= 0x1E0 )
              break;
            if ( v17 >= 0x20 )
            {
              *(_WORD *)(v14 + 2LL * i) = v17 - 4096;
              *(_BYTE *)(i++ + v13) = v17 - a2;
            }
          }
          if ( *(_WORD *)(v14 + 2LL * (v11 - 1)) > 0xF020u )
            vSort(v14, v13, i);
          if ( v11 != i )
          {
            ++v16;
            v11 = i;
          }
        }
        v19 = PALLOCMEM2(4 * (v11 + 4 * v16) + 40, 1936484167LL, 0);
        v20 = v19;
        if ( v19 )
        {
          *v19 = 1;
          v19[1] = a2;
          v19[2] = a3;
          *((_BYTE *)v19 + 12) = a4;
          cComputeGlyphSet(v14, v13, v11, v16, v19 + 6);
          v5 = v20;
          *((_QWORD *)v20 + 2) = *a1;
          *a1 = (__int64)v20;
        }
        Win32FreePool(v13);
      }
    }
  }
  return v5;
}
