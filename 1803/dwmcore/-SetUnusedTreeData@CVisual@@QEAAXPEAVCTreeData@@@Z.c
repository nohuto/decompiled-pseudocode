/*
 * XREFs of ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004D028
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x18004104C (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetUnusedTreeData(CVisual *this, struct CTreeData *a2)
{
  char **v2; // rcx
  struct CTreeData *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CTreeData *)`CVisual::SetUnusedTreeData'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x200000u;
  else
    CSparseStorage::SetData(v2, 11, 8u, &v3);
}
