/*
 * XREFs of ?SetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAXI@Z @ 0x14005D000
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@XZ @ 0x14005B478 (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14005B8E0 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$At.c)
 *     ?Commit@ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAAXXZ @ 0x14005BAC0 (-Commit@ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$At.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::SetClockingData(CSpatialCrossProcessBaseEndpoint *this, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::AcquireReadWriteAccess(
      *((_QWORD *)this + 39),
      (__int64)v6);
    v3 = v6[0];
    if ( v6[0] )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 110) + 40LL);
      *(_QWORD *)(v6[0] + 80LL) += *(unsigned int *)(v6[0] + 96LL);
      v5 = *(_QWORD *)(v3 + 80);
      if ( v5 > v4 )
        v5 = v4;
      *(_QWORD *)(v3 + 80) = v5;
      util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::Commit(v6);
    }
    util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadWriteAccess::~ReadWriteAccess(v6);
  }
}
