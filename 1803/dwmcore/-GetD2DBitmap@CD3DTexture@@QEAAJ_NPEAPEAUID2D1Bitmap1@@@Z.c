/*
 * XREFs of ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E41B0
 * Callers:
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1801C893C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E6720 (-GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E6C54 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E3FB4 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 */

__int64 __fastcall CD3DTexture::GetD2DBitmap(CD3DTexture *this, char a2, struct ID2D1Bitmap1 **a3)
{
  unsigned int v3; // ebx
  int v7; // r9d
  char *v8; // rsi
  int D2DBitmap; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = 0;
  *a3 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 32LL))(this) )
  {
    if ( a2 )
    {
      v8 = (char *)this + 232;
      if ( !*((_QWORD *)this + 29) )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((struct IDXGISurface **)this, 1, (struct ID2D1Bitmap1 **)this + 29);
        v3 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v11 = 514;
LABEL_11:
          v7 = D2DBitmap;
          goto LABEL_3;
        }
      }
    }
    else
    {
      v8 = (char *)this + 224;
      if ( !*((_QWORD *)this + 28) )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((struct IDXGISurface **)this, 0, (struct ID2D1Bitmap1 **)this + 28);
        v3 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v11 = 524;
          goto LABEL_11;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
    *a3 = *(struct ID2D1Bitmap1 **)v8;
    return v3;
  }
  v3 = -2003292412;
  v11 = 507;
  v7 = -2003292412;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v11);
  return v3;
}
