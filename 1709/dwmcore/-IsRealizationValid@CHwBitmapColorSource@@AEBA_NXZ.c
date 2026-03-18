/*
 * XREFs of ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801B5B60
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x1801B6160 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801B650C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801B5B14 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationValid(CHwBitmapColorSource *this)
{
  char v1; // bl
  CHwBitmapColorSource *v2; // r10

  v1 = 0;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)this + 180, (__int64)this + 196) )
    return CHwBitmapColorSource::IsRealizationCurrent(v2) != 0;
  return v1;
}
