/*
 * XREFs of ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x180006E94
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180006ED0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?GetSize@CSecondaryD2DBitmap@@UEBAXPEAI0@Z @ 0x1800070F0 (-GetSize@CSecondaryD2DBitmap@@UEBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSecondaryD2DBitmap::HasPrefilterScale(CSecondaryD2DBitmap *this)
{
  return *((float *)this + 56) != 96.0 || *((float *)this + 57) != 96.0;
}
