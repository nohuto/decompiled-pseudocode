/*
 * XREFs of ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800586FC
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180039590 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800BFAC0 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801802D0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEff.c)
 * Callees:
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180059DA0 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBrushDrawListGenerator::~CBrushDrawListGenerator(CBrushDrawListGenerator *this)
{
  CMILRefCountBase *v2; // rcx
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rcx
  void (*v7)(void); // rax
  CSurfaceDrawListBrush *v8; // rcx
  void *(__fastcall *v9)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    *((_QWORD *)this + 6) = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v2 + 8LL);
    if ( (char *)v7 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v2);
    else
      v7();
  }
  *((_DWORD *)this + 10) = 0;
  v3 = (_DWORD *)((char *)this + 104);
  v4 = 0LL;
  *(_OWORD *)((char *)this + 56) = _xmm;
  for ( *((_BYTE *)this + 108) = 0; (unsigned int)v4 < *v3; v4 = (unsigned int)(v4 + 1) )
  {
    if ( *((_QWORD *)this + v4 + 9) )
    {
      v8 = (CSurfaceDrawListBrush *)*((_QWORD *)this + v4 + 9);
      if ( v8 )
      {
        v9 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v8;
        if ( v9 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v8, 1u);
        else
          v9(v8, 1u);
      }
      *((_QWORD *)this + v4 + 9) = 0LL;
    }
  }
  *v3 = 0;
  v5 = 4LL;
  do
  {
    v3 -= 2;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v3);
    --v5;
  }
  while ( v5 );
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
}
