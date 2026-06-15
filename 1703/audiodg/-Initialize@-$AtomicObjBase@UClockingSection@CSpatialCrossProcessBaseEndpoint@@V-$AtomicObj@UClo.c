/*
 * XREFs of ?Initialize@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAAXV?$weak_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005C388
 * Callers:
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005AE28 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140058E30 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Initialize(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  v2 = a2[1];
  v4 = *a2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  v6 = *(std::_Ref_count_base **)(a1 + 72);
  if ( v6 )
    std::_Ref_count_base::_Decwref(v6);
  *(_QWORD *)(a1 + 72) = v2;
  *(_QWORD *)(a1 + 64) = v4;
  v7 = (std::_Ref_count_base *)a2[1];
  if ( v7 )
    std::_Ref_count_base::_Decwref(v7);
}
