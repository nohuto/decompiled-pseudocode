/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18011C41C
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18000BD4C (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18000E0B0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180121074 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18000FC3C (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void **__fastcall CCommandBatch::`scalar deleting destructor'(void **this)
{
  CDataStreamWriter::FreeResources(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
