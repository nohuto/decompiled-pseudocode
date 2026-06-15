/*
 * XREFs of ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C458
 * Callers:
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EAD0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140034400 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140045C18 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@I@Z @ 0x1400573A4 (--$UnmapMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAXAEAPEAUControlData@CSpatialCr.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x140058E00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@4@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@CSpatialCrossProcessBaseEndpoint@@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@VAtomicObjState@4@VReaderLockPolicy@4@$$V@0@@Z @ 0x14005AE28 (--$MakeAtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@USto.c)
 *     ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005AF7C (--$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlDa.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005B32C (--4-$shared_ptr@V-$AtomicObj@UClockingSection@CSpatialCrossProcessBaseEndpoint@@VReaderLockPolic.c)
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005B8B8 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?GetMemoryRequirement@SpatialBlock@@SAIIIII@Z @ 0x14005BD64 (-GetMemoryRequirement@SpatialBlock@@SAIIIII@Z.c)
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
  unsigned __int16 *v23; // rdx
  void *v24; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v26; // rax
  signed int v27; // eax
  void *v28; // rcx
  char *v30; // [rsp+50h] [rbp-48h] BYREF
  std::_Ref_count_base *v31; // [rsp+58h] [rbp-40h]
  unsigned int MemoryRequirement; // [rsp+A0h] [rbp+8h]

  v10 = a4 + a5;
  MemoryRequirement = SpatialBlock::GetMemoryRequirement(*((_DWORD *)this + 37), dwDesiredAccess, a7, a4 + a5);
  v11 = MemoryRequirement + 800;
  FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, v12, 4u, 0, MemoryRequirement + 800, 0LL);
  *((_QWORD *)this + 111) = FileMappingW;
  if ( !FileMappingW )
  {
    LastError = GetLastError();
    v15 = LastError;
    if ( LastError > 0 )
      v15 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_26;
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
      v30 = v19;
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
      v15 = SpatialBlock::Create(v20, v17 + 800, MemoryRequirement, *((_DWORD *)this + 37), dwDesiredAccess, a7, v10);
      if ( v15 < 0 )
        goto LABEL_27;
      *(_DWORD *)*v16 = 798;
      *((_DWORD *)*v16 + 1) = 1396785988;
      v21 = (volatile __int32 *)((char *)*v16 + 48);
      *((_QWORD *)this + 38) = v21;
      _InterlockedExchange(v21, 6);
      v22 = util::MakeAtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
              &v30,
              (__int64)*v16 + 76);
      std::shared_ptr<util::AtomicObj<CSpatialCrossProcessBaseEndpoint::ClockingSection,util::ReaderLockPolicy>>::operator=(
        (_QWORD *)this + 39,
        v22);
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
      if ( *((_QWORD *)this + 39) )
      {
        v23 = (unsigned __int16 *)*((_QWORD *)this + 19);
        if ( v23[8] <= 0x100u )
        {
          memcpy_0((char *)*v16 + 524, v23, v23[8] + 18LL);
          *((_DWORD *)*v16 + 127) = *((_DWORD *)this + 19);
          *((_DWORD *)*v16 + 128) = a4;
          *((_DWORD *)*v16 + 129) = a5;
          *((_DWORD *)*v16 + 130) = v11;
          if ( !a3 || (v15 = StringCchCopyW((unsigned __int16 *)*v16 + 190, 0x40uLL, a3), v15 >= 0) )
          {
            v24 = (void *)*((_QWORD *)this + 111);
            CurrentProcess = GetCurrentProcess();
            v26 = GetCurrentProcess();
            if ( !DuplicateHandle(v26, v24, CurrentProcess, lpTargetHandle, 0, 0, 2u) )
            {
              v27 = GetLastError();
              v15 = v27;
              if ( v27 > 0 )
                v15 = (unsigned __int16)v27 | 0x80070000;
            }
            WerRegisterMemoryBlock(*v16, v11);
LABEL_26:
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
LABEL_27:
  v28 = (void *)*((_QWORD *)this + 112);
  if ( v28 )
    operator delete(v28);
  *((_QWORD *)this + 112) = 0LL;
  UnmapMemory<CSpatialCrossProcessBaseEndpoint::ControlData>((LPCVOID *)this + 110, v11);
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::InitializeCPMemory", 126, v15);
  return (unsigned int)v15;
}
