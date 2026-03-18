/*
 * XREFs of ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18004F698
 * Callers:
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18004F6C8 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180051044 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::OnTransformChanged(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  *((_QWORD *)this + 50) = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      i[-7].Blink = 0LL;
  }
}
