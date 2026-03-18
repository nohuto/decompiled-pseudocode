/*
 * XREFs of ?GetBitmapSource@CGdiSpriteBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800555C0
 * Callers:
 *     ?GetBitmapSource@CGdiSpriteBitmap@@WFA@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800D5C20 (-GetBitmapSource@CGdiSpriteBitmap@@WFA@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetBitmapSource(
        CGdiSpriteBitmap *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  CGdiSpriteBitmap *v4; // rcx
  int v5; // ebx
  __int64 v7; // rcx
  int Bitmap; // eax

  *a2 = 0LL;
  v4 = (CGdiSpriteBitmap *)((char *)this - 8);
  v5 = 0;
  if ( !*((_QWORD *)v4 + 10) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(v4, (enum DXGI_FORMAT)*((_DWORD *)v4 + 30));
    v5 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0x128u);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1AEu);
  }
  else
  {
    *a2 = (struct IBitmapSource *)*((_QWORD *)this + 9);
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
      (*(void (__fastcall **)(__int64, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)v7 + 8LL))(
        v7,
        a2,
        a3);
    return 0;
  }
  return (unsigned int)v5;
}
