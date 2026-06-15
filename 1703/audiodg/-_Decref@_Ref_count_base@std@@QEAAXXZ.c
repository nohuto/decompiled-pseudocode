/*
 * XREFs of ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x140058E00
 * Callers:
 *     ??1?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAA@XZ @ 0x140057DCC (--1-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140057DE4 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005AE28 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 *     ??0ReadAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B0B0 (--0ReadAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicObj@UC.c)
 *     ??0ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@V?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B178 (--0ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ??1ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAA@XZ @ 0x14005B2C0 (--1ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$AtomicO.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005B32C (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x14005B364 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VRe_ea_14005B364.c)
 *     ?GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z @ 0x14005B990 (-GetClockingData@CSpatialCrossProcessBaseEndpoint@@MEAAJPEAUAE_CURRENT_POSITION@@0PEA_J1@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C458 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 *     ?_Reset0@?$_Ptr_base@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@PEAV_Ref_count_base@2@@Z @ 0x14005D2D0 (-_Reset0@-$_Ptr_base@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLock.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14005D310 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140058E30 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ref_count_base::_Decref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))this)(this);
    std::_Ref_count_base::_Decwref(this);
  }
}
