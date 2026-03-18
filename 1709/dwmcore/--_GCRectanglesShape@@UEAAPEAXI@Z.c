/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0
 * Callers:
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180025800 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180025960 (-GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x18004A790 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005B770 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800BB0EC (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetOpaqueBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x1801762F0 (-GetOpaqueBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801CAFC4 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(CRectanglesShape *this, char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  int Current; // eax
  struct CThreadContext *v7; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v10; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_DWORD *)this + 8) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 8, 16LL);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 != *((void **)this + 2) )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (a2 & 1) != 0 )
  {
    Current = CThreadContext::GetCurrent(&v10);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    v7 = v10;
    if ( *((_DWORD *)v10 + 3) >= *((_DWORD *)v10 + 2) )
    {
      WPF::ProcessHeapImpl::Free(this);
    }
    else
    {
      *(_QWORD *)this = *((_QWORD *)v10 + 2);
      ++*((_DWORD *)v7 + 3);
      *((_QWORD *)v7 + 2) = this;
    }
  }
  return this;
}
