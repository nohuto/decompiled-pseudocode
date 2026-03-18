/*
 * XREFs of ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1801A8F48
 * Callers:
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801A75EC (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRenderPassInfoList(CVisual *this, struct _LIST_ENTRY *a2)
{
  char **v2; // rcx
  struct _LIST_ENTRY *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct _LIST_ENTRY *)`CVisual::SetRenderPassInfoList'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x40000u;
  else
    CSparseStorage::SetData(v2, 14, 8u, &v3);
}
