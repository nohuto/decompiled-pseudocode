/*
 * XREFs of ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x14005B364
 * Callers:
 *     ??0ReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B0B0 (--0ReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicObj@UC.c)
 *     ??0ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B178 (--0ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x140058E00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV01@@Z @ 0x14005B07C (--0-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 */

__int64 *__fastcall std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(
         v8,
         a2);
  v4 = v3[1];
  v3[1] = a1[1];
  a1[1] = v4;
  v5 = *v3;
  *v3 = *a1;
  v6 = v8[1];
  *a1 = v5;
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return a1;
}
