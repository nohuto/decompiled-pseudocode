/*
 * XREFs of ?GetBitmap@CD2DBitmapCache@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x18007A740
 * Callers:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18000B470 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@.c)
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@2PEAPEAUID2D1Bitmap1@@@Z @ 0x180046E80 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded.c)
 *     ?GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B4D80 (-GetD2DBitmap@CSectionBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilRectU@@U.c)
 *     ?GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B6220 (-GetD2DBitmap@CDxHandleStereoBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     ?GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800268B0 (-GetBitmap@CD2DBitmap@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800493E0 (-GetBitmap@CHwTextureRenderTarget@@UEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18007A7D8 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::GetBitmap(
        __int64 a1,
        struct _LUID a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        struct ID2D1Bitmap1 **a7)
{
  struct ID2D1Bitmap1 **v7; // rdi
  __int64 v8; // rax
  int BitmapInternalNoRef; // eax
  unsigned int v10; // ebx
  __int64 (__fastcall *v11)(CD2DBitmap *, _QWORD, struct ID2D1Bitmap1 **); // rax
  int Bitmap; // eax
  __int64 (__fastcall *v14)(struct ID2D1Bitmap1 ***, char, struct ID2D1Bitmap1 **); // rdx
  CD2DBitmap *v15; // [rsp+40h] [rbp+8h] BYREF

  v7 = a7;
  v15 = 0LL;
  v8 = a5;
  *a7 = 0LL;
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef((CD2DBitmapCache *)(a1 - 16), a2, v8, (__int64)&v15);
  v10 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0x91u);
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(CD2DBitmap *, _QWORD, struct ID2D1Bitmap1 **))(*(_QWORD *)v15 + 72LL);
    if ( (char *)v11 == (char *)CD2DBitmap::GetBitmap )
    {
      Bitmap = CD2DBitmap::GetBitmap(v15, a6, v7);
    }
    else
    {
      v14 = CHwTextureRenderTarget::GetBitmap;
      LOBYTE(v14) = a6;
      if ( (char *)v11 == (char *)CHwTextureRenderTarget::GetBitmap )
        Bitmap = CHwTextureRenderTarget::GetBitmap((struct ID2D1Bitmap1 ***)v15, a6, v7);
      else
        Bitmap = v11(v15, v14, v7);
    }
    v10 = Bitmap;
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bitmap, 0x96u);
  }
  return v10;
}
