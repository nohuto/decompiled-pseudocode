/*
 * XREFs of ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18019ABF8
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019AE44 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18019F284 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdx

  v5 = a1[1];
  v6 = 0;
  if ( a2[1] > v5 )
  {
    if ( a5 )
    {
      a4[1] = v5;
      a4[3] = a2[1];
      *a4 = *a1;
      a4[2] = a1[2];
    }
    v6 = 1;
  }
  v8 = *a1;
  if ( *a2 > *a1 )
  {
    if ( v6 < a5 )
    {
      v9 = 2LL * v6;
      a4[2 * v9] = v8;
      a4[2 * v9 + 2] = *a2;
      a4[2 * v9 + 1] = a2[1];
      a4[2 * v9 + 3] = a2[3];
    }
    ++v6;
  }
  v10 = a2[2];
  if ( a1[2] > v10 )
  {
    if ( v6 < a5 )
    {
      v11 = 2LL * v6;
      a4[2 * v11] = v10;
      a4[2 * v11 + 2] = a1[2];
      a4[2 * v11 + 1] = a2[1];
      a4[2 * v11 + 3] = a2[3];
    }
    ++v6;
  }
  v12 = a2[3];
  if ( a1[3] > v12 )
  {
    if ( v6 < a5 )
    {
      v13 = 2LL * v6;
      a4[2 * v13 + 1] = v12;
      a4[2 * v13 + 3] = a1[3];
      a4[2 * v13] = *a1;
      a4[2 * v13 + 2] = a1[2];
    }
    ++v6;
  }
  return v6;
}
