/*
 * XREFs of ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x18019EF10
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapColorSource::ComputePrefilteredDirtyRects(
        _DWORD *a1,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // r11d
  __int64 v8; // rdi
  unsigned int *v9; // r9
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  char v18; // al
  unsigned int v19; // ecx

  v4 = 0;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = (unsigned int *)(a4 + 16LL * v4);
      *(_OWORD *)v9 = *a2;
      v10 = a1[34];
      v11 = (unsigned int)a1[36];
      if ( v10 != (_DWORD)v11 )
      {
        *v9 = v11 * (unsigned __int64)*v9 / v10;
        v9[2] = (v10 + v11 * (unsigned __int64)v9[2] - 1) / v10;
      }
      v12 = a1[35];
      v13 = (unsigned int)a1[37];
      if ( v12 != (_DWORD)v13 )
      {
        v9[1] = v13 * (unsigned __int64)v9[1] / v12;
        v9[3] = (v12 + v13 * (unsigned __int64)v9[3] - 1) / v12;
      }
      v14 = a1[43];
      if ( v14 > *v9 )
        *v9 = v14;
      v15 = a1[44];
      if ( v15 > v9[1] )
        v9[1] = v15;
      v16 = a1[45];
      if ( v16 < v9[2] )
        v9[2] = v16;
      v17 = a1[46];
      if ( v17 < v9[3] )
        v9[3] = v17;
      if ( v9[2] <= *v9 || v9[3] <= v9[1] )
      {
        v9[3] = 0;
        v9[2] = 0;
        v9[1] = 0;
        *v9 = 0;
        v18 = 0;
      }
      else
      {
        v18 = 1;
      }
      ++a2;
      v19 = v4 + 1;
      if ( !v18 )
        v19 = v4;
      v4 = v19;
      --v8;
    }
    while ( v8 );
  }
  return v4;
}
