/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005CC1C
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x14005DBB0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1400028E4 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140044DF8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140057724 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140059150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005B0E8 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005B220 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005B500 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005C7AC (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005D2B4 (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005D360 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14005D6A4 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory(CSpatialCrossProcessBaseEndpoint *this, void *a2)
{
  const struct CSpatialCrossProcessBaseEndpoint::ControlData **v4; // rsi
  signed int v5; // ebx
  unsigned int v6; // ebx
  volatile __int32 *v7; // rcx
  _BYTE *v8; // rdx
  __int64 v9; // rax
  const struct CSpatialCrossProcessBaseEndpoint::ControlData *v10; // rdx
  int v11; // eax
  __int64 *v12; // rax
  std::_Ref_count_base *v13; // rbx
  void *v14; // rcx
  char *v15; // rax
  SpatialBlock *v16; // rbx
  void *v17; // rcx
  void *v18; // rcx
  __int64 v20; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v21; // [rsp+30h] [rbp-28h]
  char *v22; // [rsp+60h] [rbp+8h] BYREF

  v4 = (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)((char *)this + 880);
  v5 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((_QWORD *)this + 110, a2, 0x326u);
  if ( v5 < 0 )
    goto LABEL_24;
  v5 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, *v4);
  if ( v5 < 0 )
    goto LABEL_24;
  v6 = *((_DWORD *)*v4 + 132);
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((void **)v4, 0x326u);
  v5 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(v4, a2, v6);
  if ( v5 < 0 )
    goto LABEL_24;
  v7 = (volatile __int32 *)((char *)*v4 + 48);
  *((_QWORD *)this + 38) = v7;
  _InterlockedExchange(v7, 6);
  v5 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, *v4);
  if ( v5 < 0 )
    goto LABEL_24;
  v5 = CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(this, (const struct tWAVEFORMATEX *)((char *)*v4 + 532));
  if ( v5 < 0 )
    goto LABEL_24;
  v8 = (char *)*v4 + 388;
  if ( *v4 == (const struct CSpatialCrossProcessBaseEndpoint::ControlData *)-388LL )
  {
    LODWORD(v9) = 0;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)&v8[2 * v9] );
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)this + 20, v8, (unsigned int)v9);
  v10 = *v4;
  v11 = *((_DWORD *)*v4 + 129);
  *((_DWORD *)this + 19) = v11;
  *((_DWORD *)this + 37) = 4 * v11;
  v12 = util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
          &v20,
          (__int64)v10 + 84);
  std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::operator=(
    (_QWORD *)this + 39,
    v12);
  v13 = v21;
  if ( v21 && _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(std::_Ref_count_base *))v13)(v13);
    std::_Ref_count_base::_Decwref(v13);
  }
  if ( !*((_QWORD *)this + 39) )
    goto LABEL_14;
  v14 = (void *)*((_QWORD *)this + 112);
  if ( v14 )
    operator delete(v14);
  *((_QWORD *)this + 112) = 0LL;
  v15 = (char *)operator new(0x38uLL);
  v16 = (SpatialBlock *)v15;
  v22 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = 0LL;
    `vector constructor iterator'(
      v15 + 8,
      24LL,
      2LL,
      (void (__fastcall *)(char *))SpatialBlock::_unnamed_type__changeSet_::_unnamed_type__changeSet_);
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)this + 112) = v16;
  if ( !v16 )
  {
LABEL_14:
    v5 = -2147024882;
LABEL_24:
    v17 = (void *)*((_QWORD *)this + 112);
    if ( v17 )
      operator delete(v17);
    *((_QWORD *)this + 112) = 0LL;
    std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::reset((char *)this + 312);
    v18 = (void *)*((_QWORD *)this + 19);
    if ( v18 )
    {
      CoTaskMemFree(v18);
      *((_QWORD *)this + 19) = 0LL;
    }
    UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((void **)v4, 0x326u);
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::MapCPMemory", 195, v5);
    return (unsigned int)v5;
  }
  v5 = SpatialBlock::Initialize(v16, (unsigned __int8 *)*v4 + 832, *((_DWORD *)*v4 + 132) - 832);
  if ( v5 == -2005139387 )
  {
    LODWORD(v22) = 1;
    (**((void (__fastcall ***)(char *, __int64, char **))this + 92))((char *)this + 736, 1LL, &v22);
  }
  if ( v5 < 0 )
    goto LABEL_24;
  return (unsigned int)v5;
}
