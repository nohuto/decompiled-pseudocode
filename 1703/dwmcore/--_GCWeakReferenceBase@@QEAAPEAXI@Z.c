/*
 * XREFs of ??_GCWeakReferenceBase@@QEAAPEAXI@Z @ 0x180133A4C
 * Callers:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CWeakReferenceBase::`scalar deleting destructor'(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
