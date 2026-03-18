/*
 * XREFs of ??_GCWeakReferenceBase@@QEAAPEAXI@Z @ 0x18011CDDC
 * Callers:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CWeakReferenceBase::`scalar deleting destructor'(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
