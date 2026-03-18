/*
 * XREFs of ?ComputePrefilteredDirtyRects@CHwBitmapColorSource@@AEAAIPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x1801EEA84
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputePrefilteredDirtyRects(
        _DWORD *a1,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // r10d
  _DWORD *v7; // r11
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
  _DWORD *v18; // r9
  unsigned int v19; // r10d
  char v20; // al
  unsigned int v21; // ecx

  v4 = 0;
  v7 = a1;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = (unsigned int *)(a4 + 16LL * v4);
      *(_OWORD *)v9 = *a2;
      v10 = v7[36];
      v11 = (unsigned int)v7[38];
      if ( v10 != (_DWORD)v11 )
      {
        *v9 = v11 * (unsigned __int64)*v9 / v10;
        v9[2] = (v10 + v11 * (unsigned __int64)v9[2] - 1) / v10;
      }
      v12 = v7[37];
      v13 = (unsigned int)v7[39];
      if ( v12 != (_DWORD)v13 )
      {
        v9[1] = v13 * (unsigned __int64)v9[1] / v12;
        v9[3] = (v12 + v13 * (unsigned __int64)v9[3] - 1) / v12;
      }
      v14 = v7[45];
      if ( v14 > *v9 )
        *v9 = v14;
      v15 = v7[46];
      if ( v15 > v9[1] )
        v9[1] = v15;
      v16 = v7[47];
      if ( v16 < v9[2] )
        v9[2] = v16;
      v17 = v7[48];
      if ( v17 < v9[3] )
        v9[3] = v17;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(a4 + 16LL * v4)) )
      {
        v18[3] = 0;
        v18[2] = 0;
        v18[1] = 0;
        *v18 = 0;
        v20 = 0;
      }
      else
      {
        v20 = 1;
      }
      v21 = v19 + 1;
      if ( !v20 )
        v21 = v19;
      ++a2;
      v4 = v21;
      --v8;
    }
    while ( v8 );
  }
  return v4;
}
