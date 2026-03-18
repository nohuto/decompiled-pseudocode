/*
 * XREFs of ?IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z @ 0x1801B63A8
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B644C (-IsValidVisual@CProjectedShadow@@AEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 */

char __fastcall CProjectedShadow::IsValid(CProjectedShadow *this, const struct CVisualTree *a2)
{
  char v3; // di
  __int64 v4; // rdx
  struct CVisual *v6; // rbx
  struct CVisual *v7; // rbp
  struct CVisual *v8; // r14
  CProjectedShadow *v9; // rcx
  CProjectedShadow *v10; // rcx
  CProjectedShadow *v11; // rcx

  v3 = 0;
  v4 = *(_QWORD *)(*((_QWORD *)this + 11) + 80LL);
  if ( !v4 )
    return 0;
  v6 = *(struct CVisual **)(*((_QWORD *)this + 9) + 56LL);
  v7 = *(struct CVisual **)(*((_QWORD *)this + 10) + 56LL);
  v8 = (struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 168LL))(v4);
  if ( CProjectedShadow::IsValidVisual(v9, a2, v6) && CProjectedShadow::IsValidVisual(v10, a2, v7) )
    return CProjectedShadow::IsValidVisual(v11, a2, v8);
  return v3;
}
