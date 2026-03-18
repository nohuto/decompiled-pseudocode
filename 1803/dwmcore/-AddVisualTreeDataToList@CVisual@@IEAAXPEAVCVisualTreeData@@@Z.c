/*
 * XREFs of ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x18004FE80
 * Callers:
 *     ?Link@CVisualTreeData@@MEAAXXZ @ 0x1800294A0 (-Link@CVisualTreeData@@MEAAXXZ.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::AddVisualTreeDataToList(CVisual *this, struct CVisualTreeData *a2)
{
  struct _LIST_ENTRY *TreeDataListHead; // rbx
  char **v5; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // [rsp+38h] [rbp+10h] BYREF

  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( !TreeDataListHead )
  {
    TreeDataListHead = (struct _LIST_ENTRY *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
    if ( !TreeDataListHead )
      RaiseFailFastException(0LL, 0LL, 0);
    TreeDataListHead->Blink = TreeDataListHead;
    v5 = (char **)((char *)this + 216);
    TreeDataListHead->Flink = TreeDataListHead;
    v8 = TreeDataListHead;
    if ( TreeDataListHead == (struct _LIST_ENTRY *)`CVisual::SetTreeDataListHead'::`2'::sc_defaultValue )
      *((_DWORD *)*v5 + 1) &= ~0x80000u;
    else
      CSparseStorage::SetData(v5, 13, 8u, &v8);
  }
  Blink = TreeDataListHead->Blink;
  v7 = (struct _LIST_ENTRY *)((char *)a2 + 224);
  if ( Blink->Flink != TreeDataListHead )
    __fastfail(3u);
  v7->Flink = TreeDataListHead;
  *((_QWORD *)a2 + 29) = Blink;
  Blink->Flink = v7;
  TreeDataListHead->Blink = v7;
}
