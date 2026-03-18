/*
 * XREFs of ?MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ @ 0x180083880
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18007E100 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180083744 (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CSecondaryBitmap::MarkFullInvalid(CSecondaryBitmap *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)v2);
  CRegion::SetRectangle((CSecondaryBitmap *)((char *)this + 8), (const struct MilRectU *)v2);
}
