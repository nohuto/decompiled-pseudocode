/*
 * XREFs of ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005B0E8
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C818 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005CC1C (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x14000381C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140059150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$reset@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@Z @ 0x14005B318 (--$reset@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
        __int64 *a1,
        __int64 a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  std::_Ref_count_base *v7; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2 )
  {
    v4 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      *(_QWORD *)v4 = &util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 8));
      *((_DWORD *)v4 + 12) = 0;
      *((_DWORD *)v4 + 13) = 0;
      *((_QWORD *)v4 + 7) = a2;
      *((_QWORD *)v4 + 8) = 0LL;
      *((_QWORD *)v4 + 9) = 0LL;
      *(_QWORD *)v4 = &util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::reset<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>(
      a1,
      v4);
    v5 = *a1;
    if ( *a1 )
    {
      v6 = (volatile signed __int32 *)a1[1];
      if ( v6 )
      {
        _InterlockedIncrement(v6 + 3);
        v5 = *a1;
        v6 = (volatile signed __int32 *)a1[1];
        if ( v6 )
          _InterlockedIncrement(v6 + 3);
      }
      *(_QWORD *)(v5 + 64) = v5;
      v7 = *(std::_Ref_count_base **)(v5 + 72);
      *(_QWORD *)(v5 + 72) = v6;
      if ( v7 )
        std::_Ref_count_base::_Decwref(v7);
      if ( v6 )
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
    }
  }
  return a1;
}
