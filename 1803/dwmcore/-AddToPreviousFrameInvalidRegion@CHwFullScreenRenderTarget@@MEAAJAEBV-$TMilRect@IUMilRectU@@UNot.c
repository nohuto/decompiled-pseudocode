/*
 * XREFs of ?AddToPreviousFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18007E178 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::AddToPreviousFrameInvalidRegion(__int64 a1, const struct MilRectU *a2)
{
  __int64 v2; // r9
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF

  CRegion::CRegion((CRegion *)v4, a2);
  FastRegion::CRegion::Union((FastRegion::CRegion *)(v2 + 424), (const struct CRegion *)v4);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v4);
  return 0LL;
}
