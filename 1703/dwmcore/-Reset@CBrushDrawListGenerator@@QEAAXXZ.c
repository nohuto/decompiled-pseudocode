/*
 * XREFs of ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A5C0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180039590 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18008B8C0 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800BFAC0 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18017BC40 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  for ( *((_BYTE *)this + 108) = 0; (unsigned int)v3 < *((_DWORD *)this + 26); v3 = (unsigned int)(v3 + 1) )
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
