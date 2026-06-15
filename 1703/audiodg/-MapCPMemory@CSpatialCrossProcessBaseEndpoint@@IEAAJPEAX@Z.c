/*
 * XREFs of ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820
 * Callers:
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z @ 0x14005D800 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJ_K0@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140031954 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140045C18 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x1400573A4 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x140058E00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005AE28 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005AF7C (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005B32C (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005C3EC (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005CE7C (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z @ 0x14005CF80 (-ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@1@@Z.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14005D310 (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockP.c)
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
  void *v13; // rcx
  char *v14; // rax
  SpatialBlock *v15; // rbx
  void *v16; // rcx
  void *v17; // rcx
  __int64 v19; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v20; // [rsp+30h] [rbp-28h]
  char *v21; // [rsp+60h] [rbp+8h] BYREF

  v4 = (const struct CSpatialCrossProcessBaseEndpoint::ControlData **)((char *)this + 880);
  v5 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((_QWORD *)this + 110, a2, 0x31Eu);
  if ( v5 < 0 )
    goto LABEL_23;
  v5 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, *v4);
  if ( v5 < 0 )
    goto LABEL_23;
  v6 = *((_DWORD *)*v4 + 130);
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((LPCVOID *)v4, 0x31Eu);
  v5 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(v4, a2, v6);
  if ( v5 < 0 )
    goto LABEL_23;
  v7 = (volatile __int32 *)((char *)*v4 + 48);
  *((_QWORD *)this + 38) = v7;
  _InterlockedExchange(v7, 6);
  v5 = CSpatialCrossProcessBaseEndpoint::ValidateControlData(this, *v4);
  if ( v5 < 0 )
    goto LABEL_23;
  v5 = CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(this, (const struct tWAVEFORMATEX *)((char *)*v4 + 524));
  if ( v5 < 0 )
    goto LABEL_23;
  v8 = (char *)*v4 + 380;
  if ( *v4 == (const struct CSpatialCrossProcessBaseEndpoint::ControlData *)-380LL )
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
  ATL::CSimpleStringT<unsigned short,0>::SetString((const void **)this + 20, v8, v9);
  v10 = *v4;
  v11 = *((_DWORD *)*v4 + 127);
  *((_DWORD *)this + 19) = v11;
  *((_DWORD *)this + 37) = 4 * v11;
  v12 = util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
          &v19,
          (__int64)v10 + 76);
  std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::operator=(
    (_QWORD *)this + 39,
    v12);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( !*((_QWORD *)this + 39) )
    goto LABEL_13;
  v13 = (void *)*((_QWORD *)this + 112);
  if ( v13 )
    operator delete(v13);
  *((_QWORD *)this + 112) = 0LL;
  v14 = (char *)operator new(0x38uLL);
  v15 = (SpatialBlock *)v14;
  v21 = v14;
  if ( v14 )
  {
    *(_QWORD *)v14 = 0LL;
    `vector constructor iterator'(
      v14 + 8,
      24LL,
      2LL,
      (void (__fastcall *)(char *))SpatialBlock::_unnamed_type__changeSet_::_unnamed_type__changeSet_);
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)this + 112) = v15;
  if ( !v15 )
  {
LABEL_13:
    v5 = -2147024882;
LABEL_23:
    v16 = (void *)*((_QWORD *)this + 112);
    if ( v16 )
      operator delete(v16);
    *((_QWORD *)this + 112) = 0LL;
    std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::reset((char *)this + 312);
    v17 = (void *)*((_QWORD *)this + 19);
    if ( v17 )
    {
      CoTaskMemFree(v17);
      *((_QWORD *)this + 19) = 0LL;
    }
    UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((LPCVOID *)v4, 0x31Eu);
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::MapCPMemory", 195, v5);
    return (unsigned int)v5;
  }
  v5 = SpatialBlock::Initialize(v15, (unsigned __int8 *)*v4 + 800, *((_DWORD *)*v4 + 130) - 800);
  if ( v5 == -2005139387 )
  {
    LODWORD(v21) = 1;
    (**((void (__fastcall ***)(char *, __int64, char **))this + 92))((char *)this + 736, 1LL, &v21);
  }
  if ( v5 < 0 )
    goto LABEL_23;
  return (unsigned int)v5;
}
