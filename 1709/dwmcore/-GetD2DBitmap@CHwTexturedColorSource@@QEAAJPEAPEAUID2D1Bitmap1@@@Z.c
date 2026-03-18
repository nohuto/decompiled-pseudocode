/*
 * XREFs of ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180085634
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800862E0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081C70 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTexturedColorSource::GetD2DBitmap(CHwTexturedColorSource *this, struct ID2D1Bitmap1 **a2)
{
  char v3; // bl
  struct ID2D1Bitmap1 **v4; // rax
  signed int D2DBitmap; // eax
  int v6; // ebx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 23) & 1;
  v4 = (struct ID2D1Bitmap1 **)(*(__int64 (__fastcall **)(CHwTexturedColorSource *))(*(_QWORD *)this + 56LL))(this);
  D2DBitmap = CD3DTexture::GetD2DBitmap(v4, v3, a2);
  v8 = D2DBitmap;
  v6 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DBitmap, 0x7Bu);
  TranslateDXGIorD3DErrorInContext(v6, 13, &v8);
  return v8;
}
