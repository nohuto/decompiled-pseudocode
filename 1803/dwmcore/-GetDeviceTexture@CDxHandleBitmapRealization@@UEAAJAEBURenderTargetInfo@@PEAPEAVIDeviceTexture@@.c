/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800459A0
 * Callers:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006170 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180214100 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180045860 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180077EBC (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rbx
  __int64 (__fastcall *v6)(CDxHandleBitmapRealization *); // rax
  CDxHandleBitmapRealization *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int BitmapInternalNoRef; // eax
  struct IDeviceTexture *v11; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = (CDxHandleBitmapRealization *)((char *)this - 144);
  v6 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *))(*((_QWORD *)this - 18) + 80LL);
  v7 = (CDxHandleBitmapRealization *)((char *)this - 144);
  if ( v6 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v8 = CDxHandleBitmapRealization::EnsureD2DBitmap(v7);
  else
    v8 = v6(v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xDDu);
  }
  else
  {
    BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(v3, *a2, 0LL, (__int64)&v13);
    v9 = BitmapInternalNoRef;
    if ( BitmapInternalNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapInternalNoRef, 0xE3u);
    }
    else
    {
      v11 = (struct IDeviceTexture *)v13;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      *a3 = v11;
    }
  }
  return v9;
}
