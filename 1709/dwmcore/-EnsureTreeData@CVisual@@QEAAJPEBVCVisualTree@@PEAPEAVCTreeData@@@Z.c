/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EA40
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18005B220 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005B770 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005C710 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x1800B06F0 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1801D0370 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004EC58 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004F170 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A04A8 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800B17E0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2, struct CTreeData **a3)
{
  struct CTreeData *UnusedTreeData; // rbx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CTreeData *v10; // rax
  void (__fastcall *v11)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rax

  UnusedTreeData = 0LL;
  *a3 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    UnusedTreeData = (CVisual *)((char *)this + 280);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        UnusedTreeData = (struct CTreeData *)&Flink[-14];
      }
    }
  }
LABEL_3:
  if ( UnusedTreeData )
    goto LABEL_4;
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
  {
    CVisual::SetUnusedTreeData(this, 0LL);
LABEL_14:
    v11 = *(void (__fastcall **)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))(*(_QWORD *)UnusedTreeData + 8LL);
    if ( v11 == CVisualTreeData::Initialize )
      CVisualTreeData::Initialize(UnusedTreeData, a2, this);
    else
      v11(UnusedTreeData, a2, this);
LABEL_4:
    *a3 = UnusedTreeData;
    return 0LL;
  }
  v10 = (CTreeData *)operator new(0x108uLL);
  UnusedTreeData = v10;
  if ( v10 )
  {
    CTreeData::CTreeData(v10);
    *((_QWORD *)UnusedTreeData + 32) = 0LL;
    *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x112Cu);
  return 2147942414LL;
}
