/*
 * XREFs of ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081C70
 * Callers:
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180085634 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18008FB40 (-GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180191B54 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081EC4 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::GetD2DBitmap(struct ID2D1Bitmap1 **this, char a2, struct ID2D1Bitmap1 **a3)
{
  unsigned int v3; // ebx
  char *v7; // rsi
  signed int D2DBitmap; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v3 = 0;
  *a3 = 0LL;
  if ( (*((unsigned __int8 (__fastcall **)(struct ID2D1Bitmap1 **))*this + 4))(this) )
  {
    if ( a2 )
    {
      v7 = (char *)(this + 29);
      if ( !this[29] )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((CD3DTexture *)this, 1, this + 29);
        v3 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v10 = 514;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v7 = (char *)(this + 28);
      if ( !this[28] )
      {
        D2DBitmap = CD3DTexture::CreateD2DBitmap((CD3DTexture *)this, 0, this + 28);
        v3 = D2DBitmap;
        if ( D2DBitmap < 0 )
        {
          v10 = 524;
LABEL_9:
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D2DBitmap, v10);
          return v3;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v7 + 8LL))(*(_QWORD *)v7);
    *a3 = *(struct ID2D1Bitmap1 **)v7;
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F04, 0x1FBu);
  }
  return v3;
}
