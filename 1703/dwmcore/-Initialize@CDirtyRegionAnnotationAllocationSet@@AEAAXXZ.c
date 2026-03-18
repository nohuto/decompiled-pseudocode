/*
 * XREFs of ?Initialize@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800C2FA4
 * Callers:
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x180092ADC (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 *     ??0CDirtyRegion@@QEAA@XZ @ 0x180092C90 (--0CDirtyRegion@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDirtyRegionAnnotationAllocationSet::Initialize(CDirtyRegionAnnotationAllocationSet *this)
{
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 3) = this;
  *((_QWORD *)this + 1) = (char *)this + 16;
  *(_QWORD *)this = (char *)this + 16;
  *((_DWORD *)this + 392) = 0;
}
