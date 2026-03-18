/*
 * XREFs of ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z @ 0x1801A8B0C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162F04 (-RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1800DCFF4 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 *     ?GetProjectedShadowReceiver@CVisual@@QEBAPEAVCProjectedShadowReceiver@@XZ @ 0x18013C60C (-GetProjectedShadowReceiver@CVisual@@QEBAPEAVCProjectedShadowReceiver@@XZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A88B4 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_.c)
 */

void __fastcall CVisual::RenderProjectedShadows(CVisual *this, struct IRenderTarget **a2)
{
  struct CProjectedShadowReceiver *ProjectedShadowReceiver; // rax
  CProjectedShadowReceiver *v5; // rdi
  signed int v6; // ebp
  __int64 v7; // rbx
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF
  __int64 v10[2]; // [rsp+48h] [rbp-40h] BYREF

  ProjectedShadowReceiver = CVisual::GetProjectedShadowReceiver(this);
  v5 = ProjectedShadowReceiver;
  if ( ProjectedShadowReceiver )
  {
    v6 = 0;
    v7 = (__int64)(*((_QWORD *)ProjectedShadowReceiver + 9) - *((_QWORD *)ProjectedShadowReceiver + 8)) >> 3;
    if ( (int)v7 > 0 )
    {
      do
      {
        LOBYTE(v9) = 0;
        *(_OWORD *)v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v5, v6);
        CVisual::RenderContentWorker(
          this,
          (__int64)ShadowAtIndexNoRef,
          2u,
          v6++,
          a2,
          (__int64)this + 132,
          (__int64)&v9,
          (__int64)v10);
      }
      while ( v6 < (int)v7 );
    }
  }
}
