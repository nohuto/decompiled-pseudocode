/*
 * XREFs of ?MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ @ 0x180025390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x18002524C (-GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x180074640 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CSecondaryBitmap::MarkFullInvalid(CSecondaryBitmap *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  CSecondaryBitmap::GetBitmapRect(this, (struct MilRectU *)v2);
  CRegion::SetRectangle((CSecondaryBitmap *)((char *)this + 8), (const struct MilRectU *)v2);
}
