/*
 * XREFs of ?SetAdditionalDirtyRects@CVisual@@QEAAXPEAVCMergedRect@@@Z @ 0x18004CED4
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180050210 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetAdditionalDirtyRects(CVisual *this, struct CMergedRect *a2)
{
  char **v2; // rcx
  struct CMergedRect *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 216);
  if ( a2 == (struct CMergedRect *)`CVisual::SetAdditionalDirtyRects'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x20000u;
  else
    CSparseStorage::SetData(v2, 15, 8u, &v3);
}
