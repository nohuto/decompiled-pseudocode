/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000BC94
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0010F20 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0147640 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C014797C (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C00013E8 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C00022B8 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C000FE6C (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000FEE4 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000FFB4 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C0010D30 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00175D8 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS Batch; // ebx
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  PVOID *v14; // rsi
  __int64 v15; // rdx
  PVOID v16; // rcx
  int v17; // eax
  enum _EVENT_TYPE v18; // ecx
  DirectComposition::CBatchSharedMemoryPoolSet *v19; // rsi
  unsigned __int64 v20; // rdx
  struct _ERESOURCE *v21; // rbx
  int v22; // eax
  __int64 v24; // [rsp+50h] [rbp-28h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v25; // [rsp+58h] [rbp-20h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp+8h] BYREF
  __int64 v27; // [rsp+98h] [rbp+20h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = v6;
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 172) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess();
    *((_QWORD *)this + 84) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v11 = (void *)*((_QWORD *)this + 84);
    *((_QWORD *)this + 85) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v11, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v12 = *((_DWORD *)this + 176);
  if ( v12 )
  {
    if ( Batch < 0 )
      goto LABEL_25;
    v13 = (v12 + 4095) & 0xFFFFF000;
    *((_DWORD *)this + 176) = v13;
    if ( !v13 )
      Batch = -1073741801;
    if ( Batch < 0 )
      goto LABEL_25;
    v14 = (PVOID *)((char *)this + 696);
    v27 = v13;
    Batch = MmCreateSection((char *)this + 696, 6LL, 0LL, &v27, 4, 138412032, 0LL, 0LL);
    if ( Batch < 0 )
      goto LABEL_25;
    Batch = MmMapViewInSessionSpace(*v14, (PVOID *)this + 89, &ViewSize);
    if ( Batch < 0 )
      goto LABEL_25;
    v15 = *((_QWORD *)this + 84);
    v16 = *v14;
    v24 = 0LL;
    Batch = ((__int64 (__fastcall *)(PVOID, __int64, char *, _QWORD, _QWORD, __int64 *, ULONG_PTR *, int, int, int))MmMapViewOfSection)(
              v16,
              v15,
              (char *)this + 720,
              0LL,
              *((unsigned int *)this + 176),
              &v24,
              &ViewSize,
              2,
              0x400000,
              4);
  }
  if ( Batch < 0
    || (v17 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this),
        Batch = DirectComposition::CEvent::Create(v18, v17 != 3, (struct DirectComposition::CEvent **)this + 27),
        Batch < 0) )
  {
LABEL_25:
    v19 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
    goto LABEL_14;
  }
  v19 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
  Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
            (DirectComposition::CApplicationChannel *)((char *)this + 600),
            2uLL);
LABEL_14:
  if ( Batch >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      v19,
      v7,
      (struct DirectComposition::CBatchSharedMemoryPool **)this + 79,
      (unsigned __int64 *)this + 80);
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(v19, v20, &v25, (unsigned __int64 *)this + 81);
    Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 23);
    if ( Batch >= 0 )
    {
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 22);
      if ( Batch >= 0 )
      {
        v21 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v21, 1u);
        v22 = DirectComposition::CConnection::RegisterChannel(
                *((DirectComposition::CConnection **)this + 5),
                this,
                (unsigned int *)this + 7);
        Batch = v22;
        if ( v22 < 0 )
        {
          if ( v22 == -1073741300 )
          {
            *((_DWORD *)this + 6) = 3;
            Batch = 0;
          }
        }
        else
        {
          DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
            v19,
            *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
          *((_DWORD *)this + 6) = 0;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
        KeLeaveCriticalRegion();
        if ( Batch >= 0 )
        {
          if ( a2 )
            *a2 = *((_DWORD *)this + 176);
          if ( a3 )
            *a3 = (void *)*((_QWORD *)this + 90);
        }
      }
    }
  }
  return (unsigned int)Batch;
}
