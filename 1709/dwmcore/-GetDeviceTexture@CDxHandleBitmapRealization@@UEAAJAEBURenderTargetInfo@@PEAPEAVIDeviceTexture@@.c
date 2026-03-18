/*
 * XREFs of ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004D7E0
 * Callers:
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FB90 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801D2250 (-GetDeviceTexture@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPE.c)
 * Callees:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18004D390 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18008A438 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetDeviceTexture(
        CDxHandleBitmapRealization *this,
        struct _LUID *a2,
        struct IDeviceTexture **a3)
{
  CD2DBitmapCache *v3; // rbx
  __int64 (__fastcall *v6)(CDxHandleBitmapRealization *, __int64, __int64); // rax
  CDxHandleBitmapRealization *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  int BitmapInternalNoRef; // eax
  struct IDeviceTexture *v11; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = (CDxHandleBitmapRealization *)((char *)this - 144);
  v6 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, __int64, __int64))(*((_QWORD *)this - 18) + 80LL);
  v7 = (CDxHandleBitmapRealization *)((char *)this - 144);
  if ( v6 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v8 = CDxHandleBitmapRealization::EnsureD2DBitmap(v7, (__int64)a2, (__int64)a3);
  else
    v8 = ((__int64 (__fastcall *)(CDxHandleBitmapRealization *))v6)(v7);
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
