/*
 * XREFs of ?_AcquireRead@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@IEAAJAEAPEBUClockingSection@CSpatialCrossProcessBaseEndpoint@@AEA_N@Z @ 0x14005D510
 * Callers:
 *     ?Acquire@ReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B6B4 (-Acquire@ReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$Atomic.c)
 * Callees:
 *     ?GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z @ 0x14005C6F8 (-GetReadIndex@AtomicObjState@util@@QEAAIAEAUatomicStorage@12@AEA_N@Z.c)
 */

__int64 __fastcall util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireRead(
        __int64 a1,
        _QWORD *a2,
        bool *a3)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  *a2 = *(_QWORD *)(a1 + 56)
      + 4LL
      + 100LL
      * (unsigned int)util::AtomicObjState::GetReadIndex(
                        (util::AtomicObjState *)(a1 + 48),
                        *(struct util::AtomicObjState::atomicStorage **)(a1 + 56),
                        a3);
  return 0LL;
}
