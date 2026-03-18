/*
 * XREFs of ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x180083470
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800834A0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?GetSize@CSecondaryD2DBitmap@@UEBAXPEAI0@Z @ 0x1800836B0 (-GetSize@CSecondaryD2DBitmap@@UEBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSecondaryD2DBitmap::HasPrefilterScale(CSecondaryD2DBitmap *this)
{
  return *((float *)this + 56) != 96.0 || *((float *)this + 57) != 96.0;
}
