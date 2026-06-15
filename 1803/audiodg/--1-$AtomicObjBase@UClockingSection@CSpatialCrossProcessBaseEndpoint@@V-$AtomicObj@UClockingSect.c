/*
 * XREFs of ??1?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@UEAA@XZ @ 0x14005B3C4
 * Callers:
 *     ??_G?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@UEAAPEAXI@Z @ 0x14005B5D0 (--_G-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140059150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::~AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>(
        __int64 a1)
{
  bool v1; // zf
  std::_Ref_count_base *v3; // rcx

  v1 = *(_DWORD *)(a1 + 52) == 1;
  *(_QWORD *)a1 = &util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
  if ( v1 )
    operator delete(*(void **)(a1 + 56));
  v3 = *(std::_Ref_count_base **)(a1 + 72);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
}
