/*
 * XREFs of ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18004D69C
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x18004FCD0 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x180050890 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x18004D66C (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 */

void __fastcall CVisual::OnInnerTransformChanged(CVisual *this)
{
  CVisual *v1; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  CVisual::OnTransformChanged(this);
  *((_QWORD *)v1 + 60) = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(v1);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      i[-2].Flink = 0LL;
  }
}
