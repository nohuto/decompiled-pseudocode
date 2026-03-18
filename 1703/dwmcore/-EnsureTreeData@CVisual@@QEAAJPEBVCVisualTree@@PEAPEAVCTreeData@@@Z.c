/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800122DC (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180094380 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18009F610 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009FBE0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A0130 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1801B3E00 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x18004F06C (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x18004F460 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18008562C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180086270 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2, struct CTreeData **a3)
{
  struct CTreeData *UnusedTreeData; // rbx
  __int64 v8; // rax
  int v9; // edx
  int *v10; // rcx
  _QWORD *v11; // rcx
  CTreeData *v12; // rax
  void (__fastcall *v13)(CVisualTreeData *, struct CVisualTree *, struct CVisual *); // rax
  _QWORD *v14; // [rsp+58h] [rbp+10h]

  UnusedTreeData = 0LL;
  *a3 = 0LL;
  if ( *((_BYTE *)a2 + 32) )
  {
    UnusedTreeData = (CVisual *)((char *)this + 264);
  }
  else
  {
    v8 = *((_QWORD *)this + 26);
    if ( (*(_DWORD *)(v8 + 4) & 0x80000) == 0 )
      goto LABEL_13;
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
    v14 = *(_QWORD **)(v10 + 1);
    if ( v14 )
    {
      v11 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 != v14 )
      {
        while ( (const struct CVisualTree *)v11[4] != a2 )
        {
          v11 = (_QWORD *)*v11;
          if ( v11 == v14 )
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
LABEL_13:
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
  {
    CVisual::SetUnusedTreeData(this, 0LL);
LABEL_16:
    v13 = *(void (__fastcall **)(CVisualTreeData *, struct CVisualTree *, struct CVisual *))(*(_QWORD *)UnusedTreeData
                                                                                           + 8LL);
    if ( v13 == CVisualTreeData::Initialize )
      CVisualTreeData::Initialize(UnusedTreeData, a2, this);
    else
      v13(UnusedTreeData, a2, this);
    goto LABEL_4;
  }
  v12 = (CTreeData *)operator new(0x108uLL);
  UnusedTreeData = v12;
  if ( v12 )
  {
    CTreeData::CTreeData(v12);
    *((_QWORD *)UnusedTreeData + 32) = 0LL;
    *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
    goto LABEL_16;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x10DCu);
  return 2147942414LL;
}
