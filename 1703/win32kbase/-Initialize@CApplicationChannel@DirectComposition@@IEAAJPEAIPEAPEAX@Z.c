/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C001CC40
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0080F98 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0082154 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C008E468 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 * Callees:
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0015690 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C001C580 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C001D7B0 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C007F210 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C007F288 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C007F358 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C0081F44 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  NTSTATUS Batch; // ebx
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
  __int64 v26; // [rsp+98h] [rbp+20h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 178) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess();
    *((_QWORD *)this + 87) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v10 = (void *)*((_QWORD *)this + 87);
    *((_QWORD *)this + 88) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v10, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v11 = *((_DWORD *)this + 182);
  if ( !v11 )
    goto LABEL_11;
  if ( Batch >= 0 )
  {
    v12 = (v11 + 4095) & 0xFFFFF000;
    *((_DWORD *)this + 182) = v12;
    if ( !v12 )
      Batch = -1073741801;
    if ( Batch >= 0 )
    {
      v13 = (PVOID *)((char *)this + 720);
      v26 = v12;
      Batch = MmCreateSection((char *)this + 720, 6LL, 0LL, &v26, 4, 138412032, 0LL, 0LL);
      if ( Batch >= 0 )
      {
        Batch = MmMapViewInSessionSpace(*v13, (PVOID *)this + 92, &ViewSize);
        if ( Batch >= 0 )
        {
          v14 = *((_QWORD *)this + 87);
          v15 = *v13;
          v23 = 0LL;
          Batch = ((__int64 (__fastcall *)(PVOID, __int64, char *, _QWORD, _QWORD, __int64 *, ULONG_PTR *, int, int, int))MmMapViewOfSection)(
                    v15,
                    v14,
                    (char *)this + 744,
                    0LL,
                    *((unsigned int *)this + 182),
                    &v23,
                    &ViewSize,
                    2,
                    0x400000,
                    4);
LABEL_11:
          if ( Batch >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
            Batch = DirectComposition::CEvent::Create(v17, v16 != 3, (struct DirectComposition::CEvent **)this + 29);
            if ( Batch >= 0 )
            {
              Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
                        (DirectComposition::CApplicationChannel *)((char *)this + 624),
                        2uLL);
              if ( Batch >= 0 )
              {
                DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
                  (DirectComposition::CApplicationChannel *)((char *)this + 624),
                  v18,
                  (struct DirectComposition::CBatchSharedMemoryPool **)this + 82,
                  (unsigned __int64 *)this + 83);
                DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
                  (DirectComposition::CApplicationChannel *)((char *)this + 624),
                  v19,
                  &v24,
                  (unsigned __int64 *)this + 84);
                Batch = DirectComposition::CApplicationChannel::CreateBatch(
                          this,
                          (struct DirectComposition::CBatch **)this + 25);
                if ( Batch >= 0 )
                {
                  Batch = DirectComposition::CApplicationChannel::CreateBatch(
                            this,
                            (struct DirectComposition::CBatch **)this + 24);
                  if ( Batch >= 0 )
                  {
                    v20 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
                    KeEnterCriticalRegion();
                    ExAcquireResourceSharedLite(v20, 1u);
                    v21 = DirectComposition::CConnection::RegisterChannel(
                            *((DirectComposition::CConnection **)this + 5),
                            this,
                            (unsigned int *)this + 7);
                    Batch = v21;
                    if ( v21 < 0 )
                    {
                      if ( v21 == -1073741300 )
                      {
                        *((_DWORD *)this + 6) = 3;
                        Batch = 0;
                      }
                    }
                    else
                    {
                      DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
                        (DirectComposition::CApplicationChannel *)((char *)this + 624),
                        *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 232LL));
                      *((_DWORD *)this + 6) = 0;
                    }
                    ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
                    KeLeaveCriticalRegion();
                    if ( Batch >= 0 )
                    {
                      if ( a2 )
                        *a2 = *((_DWORD *)this + 182);
                      if ( a3 )
                        *a3 = (void *)*((_QWORD *)this + 93);
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
  return (unsigned int)Batch;
}
