/*
 * XREFs of ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800C2F68
 * Callers:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180092ADC (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers(
        CDirtyRegionAnnotationAllocationSet *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  CDirtyRegionAnnotationAllocationSet **v4; // rcx
  CDirtyRegionAnnotationAllocationSet *v5; // rax

  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD **)(v2 + 8);
  if ( *(CDirtyRegionAnnotationAllocationSet **)v2 != this || *v3 != v2 )
    __fastfail(3u);
  *((_QWORD *)this + 1) = v3;
  *v3 = this;
  while ( 1 )
  {
    v4 = *(CDirtyRegionAnnotationAllocationSet ***)this;
    if ( *(CDirtyRegionAnnotationAllocationSet **)this == this )
      break;
    v5 = *v4;
    if ( v4[1] != this || *((CDirtyRegionAnnotationAllocationSet ***)v5 + 1) != v4 )
      __fastfail(3u);
    *(_QWORD *)this = v5;
    *((_QWORD *)v5 + 1) = this;
    WPF::ProcessHeapImpl::Free(v4);
  }
}
