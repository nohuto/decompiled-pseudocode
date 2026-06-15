/*
 * XREFs of ??_G?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@UEAAPEAXI@Z @ 0x14005E200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@UEAA@XZ @ 0x14005E0C4 (--1-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicObj@UClockingSect.c)
 */

void *__fastcall util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::~AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
