/*
 * XREFs of ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x180084AB0
 * Callers:
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x18004F320 (-Link@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18004F66C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::AddVisualTreeDataToList(char **this, struct CVisualTreeData *a2)
{
  struct _LIST_ENTRY *TreeDataListHead; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *v7; // [rsp+38h] [rbp+10h] BYREF

  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)this);
  if ( !TreeDataListHead )
  {
    TreeDataListHead = (struct _LIST_ENTRY *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
    if ( !TreeDataListHead )
      RaiseFailFastException(0LL, 0LL, 0);
    TreeDataListHead->Blink = TreeDataListHead;
    TreeDataListHead->Flink = TreeDataListHead;
    v7 = TreeDataListHead;
    if ( TreeDataListHead == (struct _LIST_ENTRY *)`CVisual::SetTreeDataListHead'::`2'::sc_defaultValue )
      *((_DWORD *)this[26] + 1) &= ~0x80000u;
    else
      CSparseStorage::SetData(this + 26, 13, 8u, &v7);
  }
  Blink = TreeDataListHead->Blink;
  v6 = (struct _LIST_ENTRY *)((char *)a2 + 224);
  if ( Blink->Flink != TreeDataListHead )
    __fastfail(3u);
  v6->Flink = TreeDataListHead;
  *((_QWORD *)a2 + 29) = Blink;
  Blink->Flink = v6;
  TreeDataListHead->Blink = v6;
}
