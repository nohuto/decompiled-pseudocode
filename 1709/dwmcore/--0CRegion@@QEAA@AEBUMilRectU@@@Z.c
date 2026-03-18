/*
 * XREFs of ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18008901C
 * Callers:
 *     ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F1A0 (-AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x180088BB0 (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D1F3C (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this, struct tagRECT *a2)
{
  CRegion *v2; // rcx
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  FastRegion::CRegion::CRegion(this, &v4);
  return v2;
}
