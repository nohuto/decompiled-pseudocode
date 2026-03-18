/*
 * XREFs of ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180083908
 * Callers:
 *     ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800186B0 (-Update@CSecondarySysmemBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEA.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800834A0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18007E178 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryBitmap::AddValidRect(CSecondaryBitmap *this, struct tagRECT *a2)
{
  __int64 v2; // r9
  unsigned int v3; // ebx
  void *v5[10]; // [rsp+20h] [rbp-68h] BYREF

  CRegion::CRegion((CRegion *)v5, a2);
  v3 = FastRegion::CRegion::Subtract(
         (const struct FastRegion::Internal::CRgnData **)(v2 + 8),
         (const struct FastRegion::Internal::CRgnData **)v5);
  FastRegion::CRegion::FreeMemory(v5);
  return v3;
}
