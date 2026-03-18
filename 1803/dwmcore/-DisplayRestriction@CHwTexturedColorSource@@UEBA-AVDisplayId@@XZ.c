/*
 * XREFs of ?DisplayRestriction@CHwTexturedColorSource@@UEBA?AVDisplayId@@XZ @ 0x1800D62C0
 * Callers:
 *     ?GetDisplayId@CSecondaryD2DBitmap@@W7EBA?AVDisplayId@@XZ @ 0x1800DD960 (-GetDisplayId@CSecondaryD2DBitmap@@W7EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@WBII@EBA?AVDisplayId@@XZ @ 0x1800DE760 (-GetDisplayId@CSectionBitmapRealization@@WBII@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHwTexturedColorSource::DisplayRestriction(__int64 a1, _DWORD *a2)
{
  *a2 = DisplayId::None;
  return a2;
}
