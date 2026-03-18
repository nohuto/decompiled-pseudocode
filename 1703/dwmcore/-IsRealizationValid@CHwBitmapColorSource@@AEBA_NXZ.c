/*
 * XREFs of ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x180044C88
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180044150 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18019F284 (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 * Callees:
 *     ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180045084 (-IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B3F9C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationValid(CHwBitmapColorSource *this)
{
  char v1; // bl
  CHwBitmapColorSource *v2; // r10

  v1 = 0;
  if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(
                          (char *)this + 172,
                          (char *)this + 188) )
    return CHwBitmapColorSource::IsRealizationCurrent(v2);
  return v1;
}
