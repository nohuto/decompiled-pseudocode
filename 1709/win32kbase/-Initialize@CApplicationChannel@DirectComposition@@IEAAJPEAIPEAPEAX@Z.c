/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00322E4
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0085BA0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C008996C (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C009641C (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C0031C44 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0033EE8 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00800A0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C0081368 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C00817F4 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008186C (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C008193C (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  int Section; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  PVOID *v13; // rsi
  __int64 v14; // rdx
  PVOID v15; // rcx
  int v16; // eax
  enum _EVENT_TYPE v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  struct _ERESOURCE *v20; // rbx
  int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v24; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h]

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Section = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 172) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess();
    *((_QWORD *)this + 84) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v10 = (void *)*((_QWORD *)this + 84);
    *((_QWORD *)this + 85) = ProcessSequenceNumber;
    Section = ObReferenceObjectByPointer(v10, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v11 = *((_DWORD *)this + 176);
  if ( !v11 )
    goto LABEL_11;
  if ( Section >= 0 )
  {
    v12 = (v11 + 4095) & 0xFFFFF000;
    *((_DWORD *)this + 176) = v12;
    if ( !v12 )
      Section = -1073741801;
    if ( Section >= 0 )
    {
      v13 = (PVOID *)((char *)this + 696);
      v26 = v12;
      Section = MmCreateSection((char *)this + 696, 6LL, 0LL);
      if ( Section >= 0 )
      {
        Section = MmMapViewInSessionSpace(*v13, (PVOID *)this + 89, &ViewSize);
        if ( Section >= 0 )
        {
          v14 = *((_QWORD *)this + 84);
          v15 = *v13;
          v23 = 0LL;
          Section = MmMapViewOfSection(
                      v15,
                      v14,
                      (char *)this + 720,
                      0LL,
                      *((unsigned int *)this + 176),
                      &v23,
                      &ViewSize,
                      2,
                      0x400000,
                      4);
LABEL_11:
          if ( Section >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
            Section = DirectComposition::CEvent::Create(v17, v16 != 3, (struct DirectComposition::CEvent **)this + 27);
            if ( Section >= 0 )
            {
              Section = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
                          (DirectComposition::CApplicationChannel *)((char *)this + 600),
                          2uLL);
              if ( Section >= 0 )
              {
                DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
                  (DirectComposition::CApplicationChannel *)((char *)this + 600),
                  v18,
                  (struct DirectComposition::CBatchSharedMemoryPool **)this + 79,
                  (unsigned __int64 *)this + 80);
                DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
                  (DirectComposition::CApplicationChannel *)((char *)this + 600),
                  v19,
                  &v24,
                  (unsigned __int64 *)this + 81);
                Section = DirectComposition::CApplicationChannel::CreateBatch(
                            this,
                            (struct DirectComposition::CBatch **)this + 23);
                if ( Section >= 0 )
                {
                  Section = DirectComposition::CApplicationChannel::CreateBatch(
                              this,
                              (struct DirectComposition::CBatch **)this + 22);
                  if ( Section >= 0 )
                  {
                    v20 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
                    KeEnterCriticalRegion();
                    ExAcquireResourceSharedLite(v20, 1u);
                    v21 = DirectComposition::CConnection::RegisterChannel(
                            *((DirectComposition::CConnection **)this + 5),
                            this,
                            (unsigned int *)this + 7);
                    Section = v21;
                    if ( v21 < 0 )
                    {
                      if ( v21 == -1073741300 )
                      {
                        *((_DWORD *)this + 6) = 3;
                        Section = 0;
                      }
                    }
                    else
                    {
                      DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
                        (DirectComposition::CApplicationChannel *)((char *)this + 600),
                        *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 232LL));
                      *((_DWORD *)this + 6) = 0;
                    }
                    ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
                    KeLeaveCriticalRegion();
                    if ( Section >= 0 )
                    {
                      if ( a2 )
                        *a2 = *((_DWORD *)this + 176);
                      if ( a3 )
                        *a3 = (void *)*((_QWORD *)this + 90);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)Section;
}
