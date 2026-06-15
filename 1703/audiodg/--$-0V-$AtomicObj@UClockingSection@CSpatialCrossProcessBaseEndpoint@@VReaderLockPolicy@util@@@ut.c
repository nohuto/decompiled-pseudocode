/*
 * XREFs of ??$?0V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAA@AEBV?$weak_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@1@@Z @ 0x14005ADB8
 * Callers:
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x14005B494 (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ?AcquireReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA?AVReadWriteAccess@12@XZ @ 0x14005B510 (-AcquireReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$At.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     ?_Reset0@?$_Ptr_base@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@PEAV_Ref_count_base@2@@Z @ 0x14005D2D0 (-_Reset0@-$_Ptr_base@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLock.c)
 */

_QWORD *__fastcall std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  if ( !v3 )
  {
LABEL_2:
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    pExceptionObject[0] = &std::bad_weak_ptr::`vftable';
    throw (std::bad_weak_ptr *)pExceptionObject;
  }
  do
  {
    v5 = *(_DWORD *)(v3 + 8);
    if ( !v5 )
      goto LABEL_2;
  }
  while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v5 + 1, v5) );
  std::_Ptr_base<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::_Reset0(
    a1,
    v4);
  return a1;
}
