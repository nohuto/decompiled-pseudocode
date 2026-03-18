/*
 * XREFs of ??$As@VISwapChainContent@@@?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VISwapChainContent@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B2530
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011C548 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImageSource>::As<ISwapChainContent>(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rcx

  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
           a2);
}
