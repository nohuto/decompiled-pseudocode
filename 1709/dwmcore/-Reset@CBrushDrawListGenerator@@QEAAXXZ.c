/*
 * XREFs of ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180024990 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18006FB80 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180070600 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180070B30 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18015C540 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180183300 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushDrawListGenerator::Reset(CBrushDrawListGenerator *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  CSurfaceDrawListBrush *v4; // rcx
  void *(__fastcall *v5)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  *((_DWORD *)this + 10) = 0;
  v3 = 0LL;
  *(_OWORD *)((char *)this + 56) = _xmm;
  for ( *((_BYTE *)this + 109) = 0; (unsigned int)v3 < *((_DWORD *)this + 26); v3 = (unsigned int)(v3 + 1) )
  {
    if ( *((_QWORD *)this + v3 + 9) )
    {
      v4 = (CSurfaceDrawListBrush *)*((_QWORD *)this + v3 + 9);
      if ( v4 )
      {
        v5 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v4;
        if ( v5 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v4, 1u);
        else
          v5(v4, 1u);
      }
      *((_QWORD *)this + v3 + 9) = 0LL;
    }
  }
  *((_DWORD *)this + 26) = 0;
}
