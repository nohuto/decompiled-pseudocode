/*
 * XREFs of _util::MakeAtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor$0 @ 0x14005AF36
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAA@XZ @ 0x140057DCC (--1-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 */

void __fastcall util::MakeAtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy_util::AtomicObjBase_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::AtomicObj_CSpatialCrossProcessBaseEndpoint::ClockingSection_util::ReaderLockPolicy__util::AtomicObjState_util::ReaderLockPolicy_::Storage__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::~shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(*(_QWORD *)(a2 + 112));
  }
}
