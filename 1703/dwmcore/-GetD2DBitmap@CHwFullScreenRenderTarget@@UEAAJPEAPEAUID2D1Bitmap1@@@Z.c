/*
 * XREFs of ?GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800704C0
 * Callers:
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800D6410 (-GetD2DBitmap@CHwFullScreenRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180073008 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x1801A0AC4 (-EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  int D2DBitmap; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  int v8; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 321) )
  {
    v8 = CHwFullScreenRenderTarget::EnsureHDRIntermediateTargetBitmap((CHwFullScreenRenderTarget *)this);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 139;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(CD3DSurface *, struct ID2D1Bitmap1 **))(*(_QWORD *)this[43] + 112LL))(
             this[43],
             a2);
      v6 = v8;
      if ( v8 >= 0 )
        return v6;
      v9 = 141;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v9);
    return v6;
  }
  D2DBitmap = CD3DSurface::GetD2DBitmap(this[21], a2);
  v10 = D2DBitmap;
  v5 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x36Cu);
  TranslateDXGIorD3DErrorInContext(v5, 13LL, &v10);
  v6 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x83u);
  return v6;
}
