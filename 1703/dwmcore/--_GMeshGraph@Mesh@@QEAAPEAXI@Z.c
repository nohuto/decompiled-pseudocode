/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x180133614
 * Callers:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x18003BB10 (-LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJI_N@Z @ 0x18003C7A0 (-PreallocateGraphObjects@Mesh@@AEAAJI_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void **__fastcall Mesh::MeshGraph::`scalar deleting destructor'(void **this)
{
  WPF::ProcessHeapImpl::Free(this[2]);
  WPF::ProcessHeapImpl::Free(this[5]);
  WPF::ProcessHeapImpl::Free(this[9]);
  WPF::ProcessHeapImpl::Free(this[14]);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
