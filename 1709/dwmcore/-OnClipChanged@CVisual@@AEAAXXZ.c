/*
 * XREFs of ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004F6F8
 * Callers:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004F460 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x180051044 (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800B0A10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 */

void __fastcall CVisual::OnClipChanged(CVisual *this)
{
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx

  *((_QWORD *)this + 58) = 0LL;
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      i[-3].Blink = 0LL;
  }
}
