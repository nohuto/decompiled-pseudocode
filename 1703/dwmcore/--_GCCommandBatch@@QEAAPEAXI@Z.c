/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180133304
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18007F86C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x180081B60 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180138C30 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x1800832BC (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void **__fastcall CCommandBatch::`scalar deleting destructor'(void **this)
{
  CDataStreamWriter::FreeResources(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
