/*
 * XREFs of ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x180178130
 * Callers:
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180176E78 (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRenderPassInfoList(CVisual *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct _LIST_ENTRY *)`CVisual::SetRenderPassInfoList'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 26) + 4LL) &= ~0x40000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 208), 0xEu, 8u, &v2);
}
