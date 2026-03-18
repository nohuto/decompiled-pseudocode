/*
 * XREFs of ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180006530
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180003B90 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CDrawListBrush>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      std::default_delete<CDrawListBrush>::operator()(a1, v4);
  }
  return a1;
}
