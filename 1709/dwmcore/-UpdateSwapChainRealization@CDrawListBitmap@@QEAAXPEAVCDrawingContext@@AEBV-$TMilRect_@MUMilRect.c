/*
 * XREFs of ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011C548
 * Callers:
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180154CD0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 *     ?UpdateSwapChains@CCubeMapRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D4D60 (-UpdateSwapChains@CCubeMapRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?UpdateSwapChains@CBrushRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D53B0 (-UpdateSwapChains@CBrushRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B2530 (--$As@VISwapChainContent@@@-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@V.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListBitmap::UpdateSwapChainRealization(__int64 *a1, __int64 a2, __int128 *a3)
{
  CCompositionSurfaceBitmap *v5; // rcx
  __int64 *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rbx
  signed int v10; // eax
  CCompositionSurfaceBitmap *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v11 = 0LL;
  if ( *a1 )
  {
    if ( (int)Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>(a1, (__int64 *)&v11) >= 0 )
    {
      v12 = 0LL;
      v7 = a1 + 1;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(a1 + 1);
      v8 = *a1;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v12) >= 0 )
      {
        v9 = v12;
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7);
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 144LL))(v9, a2 + 392, v7);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x65u);
        CDrawingContext::RecordBitmapContentInfo(a2, v11, v11, a3, 0LL);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    }
    v5 = v11;
  }
  if ( v5 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
