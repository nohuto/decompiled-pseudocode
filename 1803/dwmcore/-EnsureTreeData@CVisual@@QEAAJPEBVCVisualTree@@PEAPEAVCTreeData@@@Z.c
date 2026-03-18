/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000A980 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800A6A40 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800A7C80 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800A81C0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1802127B0 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180029510 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180029F68 (--0CTreeData@@IEAA@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004CC64 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004D028 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2, struct CTreeData **a3)
{
  struct CTreeData *UnusedTreeData; // rbx
  __int64 v8; // rax
  int v9; // edx
  int *v10; // rcx
  _QWORD *v11; // rcx
  CTreeData *v12; // rax
  void **v13; // rax
  _QWORD *v14; // rcx
  void (__fastcall *v15)(CVisualTreeData *, struct CVisualTree *, struct CVisual *); // rax
  _QWORD *v16; // [rsp+58h] [rbp+10h]

  UnusedTreeData = 0LL;
  *a3 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    UnusedTreeData = (CVisual *)((char *)this + 288);
  }
  else
  {
    v8 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v8 + 4) & 0x80000) == 0 )
      goto LABEL_11;
    v9 = *(_DWORD *)(v8 + 12);
    v10 = (int *)(v8 + 12);
    if ( (v9 & 0x7F000000) != 0xD000000 )
    {
      do
      {
        v10 = (int *)((char *)v10 + (v9 & 0xFFFFFF) + 4);
        v9 = *v10;
      }
      while ( (*v10 & 0x7F000000) != 0xD000000 );
    }
    v16 = *(_QWORD **)(v10 + 1);
    if ( v16 )
    {
      v11 = (_QWORD *)*v16;
      if ( (_QWORD *)*v16 != v16 )
      {
        while ( (const struct CVisualTree *)v11[4] != a2 )
        {
          v11 = (_QWORD *)*v11;
          if ( v11 == v16 )
            goto LABEL_3;
        }
        UnusedTreeData = (struct CTreeData *)(v11 - 28);
      }
    }
  }
LABEL_3:
  if ( UnusedTreeData )
  {
LABEL_4:
    *a3 = UnusedTreeData;
    return 0LL;
  }
LABEL_11:
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
  {
    CVisual::SetUnusedTreeData(this, 0LL);
    v13 = *(void ***)UnusedTreeData;
LABEL_14:
    v15 = (void (__fastcall *)(CVisualTreeData *, struct CVisualTree *, struct CVisual *))v13[1];
    if ( v15 == CVisualTreeData::Initialize )
      CVisualTreeData::Initialize(UnusedTreeData, a2, this);
    else
      v15(UnusedTreeData, a2, this);
    goto LABEL_4;
  }
  v12 = (CTreeData *)operator new(0x108uLL);
  UnusedTreeData = v12;
  if ( v12 )
  {
    CTreeData::CTreeData(v12);
    v13 = &CVisualTreeData::`vftable';
    v14[32] = 0LL;
    *v14 = &CVisualTreeData::`vftable';
    goto LABEL_14;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1282u);
  return 2147942414LL;
}
