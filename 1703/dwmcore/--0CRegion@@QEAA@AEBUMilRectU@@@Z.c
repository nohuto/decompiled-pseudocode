/*
 * XREFs of ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x180025488
 * Callers:
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180025430 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B51BC (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = *a2;
  FastRegion::CRegion::CRegion(this, &v4);
  return this;
}
