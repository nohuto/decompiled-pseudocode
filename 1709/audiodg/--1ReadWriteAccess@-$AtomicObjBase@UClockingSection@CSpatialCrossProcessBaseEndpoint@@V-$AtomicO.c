/*
 * XREFs of ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@XZ @ 0x14005E10C
 * Callers:
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z @ 0x14005F8E0 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXAEBUAE_CURRENT_POSITION@@I@Z.c)
 *     ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14005FA00 (-SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14005BCC0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x1400600E0 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockP.c)
 */

void __fastcall util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(
        _QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx

  if ( *a1 )
  {
    *a1 = 0LL;
    std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::reset(a1 + 1);
  }
  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
