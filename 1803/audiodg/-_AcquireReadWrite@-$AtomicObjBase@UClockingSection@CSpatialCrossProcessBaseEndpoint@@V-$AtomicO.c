/*
 * XREFs of ?_AcquireReadWrite@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@IEAAJAEAPEAUClockingSection@CSpatialCrossProcessBaseEndpoint@@@Z @ 0x14005D56C
 * Callers:
 *     ?Acquire@ReadWriteAccess@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x14005B758 (-Acquire@ReadWriteAccess@-$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V-$A.c)
 * Callees:
 *     ?GetCopyIndexes@AtomicObjState@util@@QEAA_NAEAUatomicStorage@12@AEAI1@Z @ 0x14005BE9C (-GetCopyIndexes@AtomicObjState@util@@QEAA_NAEAUatomicStorage@12@AEAI1@Z.c)
 */

__int64 __fastcall util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireReadWrite(
        struct util::AtomicObjState::atomicStorage **a1,
        _QWORD *a2)
{
  unsigned int v3; // r10d
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  if ( util::AtomicObjState::GetCopyIndexes((util::AtomicObjState *)a1, a1[7], &v12, &v13) )
  {
    try
    {
      v5 = *(_QWORD *)(v4 + 56);
      v6 = 100LL * v12;
      v7 = 100LL * v13;
      *(_OWORD *)(v6 + v5 + 4) = *(_OWORD *)(v7 + v5 + 4);
      *(_OWORD *)(v6 + v5 + 20) = *(_OWORD *)(v7 + v5 + 20);
      *(_OWORD *)(v6 + v5 + 36) = *(_OWORD *)(v7 + v5 + 36);
      *(_OWORD *)(v6 + v5 + 52) = *(_OWORD *)(v7 + v5 + 52);
      *(_OWORD *)(v6 + v5 + 68) = *(_OWORD *)(v7 + v5 + 68);
      *(_OWORD *)(v6 + v5 + 84) = *(_OWORD *)(v7 + v5 + 84);
      *(_DWORD *)(v6 + v5 + 100) = *(_DWORD *)(v7 + v5 + 100);
      *a2 = *(_QWORD *)(v4 + 56) + v6 + 4;
    }
    catch ( ATL::CAtlException *v11 )
    {
      v10 = v11;
      if ( *(_DWORD *)v11 == -1073741571 )
        _o__resetstkoflw();
      return *(unsigned int *)v10;
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v3;
}
