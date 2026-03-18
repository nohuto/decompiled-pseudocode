/*
 * XREFs of ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180086270
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800946B0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800B6C30 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x18004F4E8 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 */

void __fastcall CVisual::SetUnusedTreeData(CVisual *this, struct CTreeData *a2)
{
  char *v2; // rbx
  struct CSparseStorage::DataInfo *SlotForData; // rax

  if ( a2 == (struct CTreeData *)`CVisual::SetUnusedTreeData'::`2'::sc_defaultValue )
  {
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x200000u;
  }
  else
  {
    v2 = (char *)this + 208;
    SlotForData = CSparseStorage::FindSlotForData((char **)this + 26, 11, 8u);
    *(_QWORD *)((char *)SlotForData + 4) = a2;
    *(_DWORD *)SlotForData &= 0x8BFFFFFF;
    *(_DWORD *)SlotForData |= 0xB000000u;
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) |= 0x200000u;
  }
}
