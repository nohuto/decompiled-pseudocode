/*
 * XREFs of ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C818
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EED0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001B95C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140032A7C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140044DF8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x140057724 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140059150 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AE50 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005B0E8 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005B220 (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005B500 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005BD00 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAIIIII@Z @ 0x14005C164 (-GetMemoryRequirement@SpatialBlock@@SAIIIII@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
        CSpatialCrossProcessBaseEndpoint *this,
        struct _SECURITY_ATTRIBUTES *a2,
        size_t *a3,
        int a4,
        unsigned int a5,
        DWORD dwDesiredAccess,
        BOOL a7,
        void **lpTargetHandle)
{
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  LPSECURITY_ATTRIBUTES v12; // r11
  HANDLE FileMappingW; // rax
  signed int LastError; // eax
  int v15; // esi
  PVOID *v16; // r14
  unsigned __int8 *v17; // rdi
  void *v18; // rcx
  char *v19; // rax
  SpatialBlock *v20; // rbx
  volatile __int32 *v21; // rcx
  __int64 *v22; // rax
  std::_Ref_count_base *v23; // rbx
  unsigned __int16 *v24; // rdx
  void *v25; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v27; // rax
  signed int v28; // eax
  void *v29; // rcx
  char *v31; // [rsp+50h] [rbp-48h] BYREF
  std::_Ref_count_base *v32; // [rsp+58h] [rbp-40h]
  unsigned int MemoryRequirement; // [rsp+A0h] [rbp+8h]

  v10 = a4 + a5;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(*((_DWORD *)this + 37), dwDesiredAccess, a7, a4 + a5);
  v11 = MemoryRequirement + 832;
  FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, v12, 4u, 0, MemoryRequirement + 832, 0LL);
  *((_QWORD *)this + 111) = FileMappingW;
  if ( !FileMappingW )
  {
    LastError = GetLastError();
    v15 = LastError;
    if ( LastError > 0 )
      v15 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_27;
  }
  if ( GetLastError() == 183 )
  {
    v15 = -2147024713;
  }
  else
  {
    v16 = (PVOID *)((char *)this + 880);
    v15 = MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(
            (_QWORD *)this + 110,
            *((void **)this + 111),
            v11);
    if ( v15 >= 0 )
    {
      v17 = (unsigned __int8 *)*v16;
      v18 = (void *)*((_QWORD *)this + 112);
      if ( v18 )
        operator delete(v18);
      *((_QWORD *)this + 112) = 0LL;
      v19 = (char *)operator new(0x38uLL);
      v20 = (SpatialBlock *)v19;
      v31 = v19;
      if ( v19 )
      {
        *(_QWORD *)v19 = 0LL;
        `vector constructor iterator'(
          v19 + 8,
          24LL,
          2LL,
          (void (__fastcall *)(char *))SpatialBlock::_unnamed_type__changeSet_::_unnamed_type__changeSet_);
      }
      else
      {
        v20 = 0LL;
      }
      *((_QWORD *)this + 112) = v20;
      if ( !v20 )
        goto LABEL_13;
      v15 = SpatialBlock::Create(v20, v17 + 832, MemoryRequirement, *((_DWORD *)this + 37), dwDesiredAccess, a7, v10);
      if ( v15 < 0 )
        goto LABEL_28;
      *(_DWORD *)*v16 = 806;
      *((_DWORD *)*v16 + 1) = 1396785988;
      v21 = (volatile __int32 *)((char *)*v16 + 48);
      *((_QWORD *)this + 38) = v21;
      _InterlockedExchange(v21, 6);
      v22 = util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
              (__int64 *)&v31,
              (__int64)*v16 + 84);
      std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::operator=(
        (_QWORD *)this + 39,
        v22);
      v23 = v32;
      if ( v32 && _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(std::_Ref_count_base *))v23)(v23);
        std::_Ref_count_base::_Decwref(v23);
      }
      if ( *((_QWORD *)this + 39) )
      {
        v24 = (unsigned __int16 *)*((_QWORD *)this + 19);
        if ( v24[8] <= 0x100u )
        {
          memcpy_0((char *)*v16 + 532, v24, v24[8] + 18LL);
          *((_DWORD *)*v16 + 129) = *((_DWORD *)this + 19);
          *((_DWORD *)*v16 + 130) = a4;
          *((_DWORD *)*v16 + 131) = a5;
          *((_DWORD *)*v16 + 132) = v11;
          if ( !a3 || (v15 = StringCchCopyW((unsigned __int16 *)*v16 + 194, 0x40uLL, a3), v15 >= 0) )
          {
            v25 = (void *)*((_QWORD *)this + 111);
            CurrentProcess = GetCurrentProcess();
            v27 = GetCurrentProcess();
            if ( !DuplicateHandle(v27, v25, CurrentProcess, lpTargetHandle, 0, 0, 2u) )
            {
              v28 = GetLastError();
              v15 = v28;
              if ( v28 > 0 )
                v15 = (unsigned __int16)v28 | 0x80070000;
            }
            WerRegisterMemoryBlock(*v16, v11);
LABEL_27:
            if ( v15 >= 0 )
              return (unsigned int)v15;
          }
        }
        else
        {
          v15 = -2147024809;
        }
      }
      else
      {
LABEL_13:
        v15 = -2147024882;
      }
    }
  }
LABEL_28:
  v29 = (void *)*((_QWORD *)this + 112);
  if ( v29 )
    operator delete(v29);
  *((_QWORD *)this + 112) = 0LL;
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((void **)this + 110, v11);
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::InitializeCPMemory", 126, v15);
  return (unsigned int)v15;
}
