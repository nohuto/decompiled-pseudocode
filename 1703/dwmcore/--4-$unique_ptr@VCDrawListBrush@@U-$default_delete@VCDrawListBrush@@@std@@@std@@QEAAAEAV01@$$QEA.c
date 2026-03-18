/*
 * XREFs of ??4?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180059DB0
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x18005970C (-GenerateDrawListWorker@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800BFAC0 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CSurfaceDrawListBrush **__fastcall std::unique_ptr<CDrawListBrush>::operator=(
        CSurfaceDrawListBrush **a1,
        CSurfaceDrawListBrush **a2)
{
  CSurfaceDrawListBrush *v3; // rdi
  CSurfaceDrawListBrush *v4; // rcx
  void *(__fastcall *v6)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    if ( v3 != v4 )
    {
      if ( v4 )
      {
        v6 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v4;
        if ( v6 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v4, 1u);
        else
          v6(v4, 1u);
      }
      *a1 = v3;
    }
  }
  return a1;
}
