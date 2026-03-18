/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0017660
 * Callers:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0014DB0 (NtDCompositionSubmitDWMBatch.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0016028 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0017AA0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0006220 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C000704C (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C001005C (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0010088 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C0015624 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00175D8 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001B0B0 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00466A4 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0046708 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  __int64 v4; // rcx
  struct DirectComposition::CBatch *v5; // r15
  PSLIST_ENTRY v6; // r14
  DirectComposition::CBatchSharedMemoryPool *v7; // rdi
  __int64 v8; // rax
  DirectComposition::CBatchSharedMemoryPool *v9; // rbx
  int v10; // r10d
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  DirectComposition::CBatchSharedMemoryPool **v13; // rax
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r13
  DirectComposition::CApplicationChannel *v21; // rax
  struct _SLIST_ENTRY *Next; // r12
  __int64 *v23; // rbx
  DirectComposition::CEvent *v24; // rcx
  unsigned int v25; // edx
  DirectComposition::CBatchSharedMemoryPool *v26; // rcx
  DirectComposition::CBatchSharedMemoryPool *v27; // rax
  struct _ERESOURCE *v28; // rbx
  struct _RTL_GENERIC_TABLE *v29; // rbx
  PVOID v30; // rax
  char v31; // r13
  int v32; // edi
  DirectComposition::CBatchSharedMemoryPool *v33; // rcx
  __int64 *v34; // rdi
  DirectComposition::CApplicationChannel *v35; // r15
  DirectComposition::CAnimationMarshaler *v36; // rbx
  struct _SLIST_ENTRY *v37; // rdi
  DirectComposition::CAnimationMarshaler *v38; // rcx
  DirectComposition::CEvent *v39; // rbx
  unsigned __int64 Buffer[2]; // [rsp+20h] [rbp-28h] BYREF
  struct DirectComposition::CBatch *v41; // [rsp+30h] [rbp-18h]
  struct DirectComposition::CBatch *v42; // [rsp+90h] [rbp+48h] BYREF
  char v43; // [rsp+98h] [rbp+50h]
  char v44; // [rsp+A0h] [rbp+58h]
  DirectComposition::CBatchSharedMemoryPool *v45; // [rsp+A8h] [rbp+60h] BYREF

  v44 = a3;
  v43 = a2;
  v4 = *((_QWORD *)this + 27);
  v5 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  KeResetEvent(*(PRKEVENT *)(v4 + 8));
  v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
  if ( v6 )
  {
    do
    {
      --*((_DWORD *)this + 57);
      v17 = *((_QWORD *)&v6[4].Next + 1);
      if ( v17 > *((_QWORD *)this + 29) )
      {
        *((_BYTE *)this + 240) |= 2u;
        *((_QWORD *)this + 29) = v17;
      }
      if ( *((_QWORD *)&v6[2].Next + 1) )
      {
        v28 = DirectComposition::CSynchronizationManager::s_pSyncTableLock;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v28, 1u);
        v29 = DirectComposition::CSynchronizationManager::s_pSyncTable;
        Buffer[0] = *((_QWORD *)&v6[2].Next + 1);
        Buffer[1] = 0LL;
        v30 = RtlLookupElementGenericTable(DirectComposition::CSynchronizationManager::s_pSyncTable, Buffer);
        if ( v30 )
          RtlDeleteElementGenericTable(v29, v30);
        ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
        KeLeaveCriticalRegion();
        *((_QWORD *)&v6[2].Next + 1) = 0LL;
      }
      v18 = *((_QWORD *)&v6[8].Next + 1);
      v19 = *((_QWORD *)&v6[9].Next + 1) + *(_QWORD *)(v18 + 32) + 40LL;
      *(_QWORD *)(v18 + 32) = v19;
      if ( !*(_BYTE *)(v18 + 64) && *(_QWORD *)(v18 + 40) == v19 )
        DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v18);
      LOBYTE(v6[2].Next) &= 0xF2u;
      v20 = *((_QWORD *)&v6[4].Next + 1);
      v21 = (DirectComposition::CApplicationChannel *)*((_QWORD *)&v6->Next + 1);
      *((_QWORD *)&v6[8].Next + 1) = 0LL;
      v6[9].Next = 0LL;
      LODWORD(v6[3].Next) = 0;
      *((_QWORD *)&v6[3].Next + 1) = 0LL;
      *((_QWORD *)&v6[9].Next + 1) = 0LL;
      Next = v6[5].Next;
      if ( Next )
      {
        v35 = v21;
        do
        {
          v36 = (DirectComposition::CAnimationMarshaler *)Next->Next;
          v37 = (struct _SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
          v38 = (DirectComposition::CAnimationMarshaler *)Next->Next;
          *((_QWORD *)&Next->Next + 1) = 0LL;
          DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v38, v20);
          DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)Next);
          DirectComposition::CApplicationChannel::ReleaseResource(
            v35,
            (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v36 + 16) & -(__int64)(v36 != 0LL)));
          Next = v37;
        }
        while ( v37 );
      }
      v23 = (__int64 *)*((_QWORD *)&v6[5].Next + 1);
      v6[5].Next = 0LL;
      if ( v23 )
      {
        do
        {
          v34 = (__int64 *)*v23;
          if ( *((_DWORD *)v23 + 2) )
          {
            DirectComposition::CConnection::ReleaseSystemResource(
              *(_QWORD *)(*((_QWORD *)&v6->Next + 1) + 40LL),
              *((unsigned int *)v23 + 2));
            *((_DWORD *)v23 + 2) = 0;
          }
          Win32FreePool(v23);
          *((_QWORD *)&v6[5].Next + 1) = v34;
          v23 = v34;
        }
        while ( v34 );
      }
      v24 = (DirectComposition::CEvent *)*((_QWORD *)&v6[6].Next + 1);
      if ( v24 )
      {
        do
        {
          v39 = *(DirectComposition::CEvent **)v24;
          DirectComposition::CEvent::`scalar deleting destructor'(v24);
          *((_QWORD *)&v6[6].Next + 1) = v39;
          v24 = v39;
        }
        while ( v39 );
      }
      v25 = (unsigned int)v6[7].Next;
      if ( v25 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(*((_QWORD *)&v6->Next + 1) + 40LL),
          v25);
        LODWORD(v6[7].Next) = 0;
      }
      v6->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 23);
      *((_QWORD *)this + 23) = v6;
      v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
    }
    while ( v6 );
    v5 = v41;
  }
  if ( *((_QWORD *)this + 21) )
  {
    v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 21);
    *((_QWORD *)this + 21) = 0LL;
  }
  else
  {
    v7 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
LABEL_4:
    v8 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    v9 = *(DirectComposition::CBatchSharedMemoryPool **)v7;
    v10 = 0;
    Buffer[0] = 0LL;
    v45 = 0LL;
    v11 = v8 + 40;
    while ( 1 )
    {
      if ( v9 == v7 )
      {
        if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                    (DirectComposition::CApplicationChannel *)((char *)this + 600),
                    *((_BYTE *)this + 624),
                    &v45) >= 0 )
        {
          v9 = v45;
          DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v45, v11, Buffer);
          v33 = *(DirectComposition::CBatchSharedMemoryPool **)v7;
          if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v7 + 8LL) != v7 )
            __fastfail(3u);
          v12 = Buffer[0];
          *(_QWORD *)v9 = v33;
          *((_QWORD *)v9 + 1) = v7;
          v41 = (struct DirectComposition::CBatch *)v12;
          *((_QWORD *)v33 + 1) = v9;
          goto LABEL_38;
        }
LABEL_62:
        if ( !v44 )
          return v5;
        DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
        goto LABEL_4;
      }
      if ( !*((_BYTE *)v9 + 64) )
      {
        v41 = (struct DirectComposition::CBatch *)*((_QWORD *)v9 + 5);
        v12 = (unsigned __int64)v41;
        if ( v11 <= 4096 - (__int64)v41 )
          break;
      }
      v9 = *(DirectComposition::CBatchSharedMemoryPool **)v9;
    }
    *((_BYTE *)v9 + 64) = 1;
    v13 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v9 + 1);
    if ( v13 == (DirectComposition::CBatchSharedMemoryPool **)v7 )
      goto LABEL_9;
    v26 = *(DirectComposition::CBatchSharedMemoryPool **)v9;
    if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v9 + 8LL) != v9 || *v13 != v9 )
      __fastfail(3u);
    *v13 = v26;
    *((_QWORD *)v26 + 1) = v13;
    v27 = *(DirectComposition::CBatchSharedMemoryPool **)v7;
    if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v7 + 8LL) != v7 )
      __fastfail(3u);
    *(_QWORD *)v9 = v27;
    *((_QWORD *)v9 + 1) = v7;
    *((_QWORD *)v27 + 1) = v9;
LABEL_38:
    *(_QWORD *)v7 = v9;
    if ( v10 < 0 )
      goto LABEL_62;
LABEL_9:
    if ( !v9 )
      return v5;
    v14 = *((_QWORD *)v9 + 5);
    if ( (unsigned __int64)(4096 - v14) >= 0x28 )
      *((_QWORD *)v9 + 5) = v14 + 40;
    v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
    if ( v5 )
    {
      *((_QWORD *)this + 23) = *(_QWORD *)v5;
    }
    else
    {
      v31 = v44;
      do
      {
        v32 = DirectComposition::CApplicationChannel::CreateBatch(this, &v42);
        if ( v32 < 0
          && *((int *)this + 57) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v5 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
          v32 = 0;
          v42 = v5;
          *((_QWORD *)this + 23) = *(_QWORD *)v5;
        }
        else
        {
          v5 = v42;
        }
      }
      while ( v31 && v32 < 0 );
      v12 = (unsigned __int64)v41;
    }
    if ( v5 )
    {
      *((_QWORD *)v5 + 17) = v9;
      *((_QWORD *)v5 + 18) = v12;
    }
    else
    {
      *((_BYTE *)v9 + 64) = 0;
    }
  }
  if ( v5 )
  {
    *(_QWORD *)v5 = 0LL;
    if ( v43 )
    {
      *((_DWORD *)v5 + 4) = ++*((_DWORD *)this + 94);
      ++*((_DWORD *)this + 57);
      *((_BYTE *)this + 240) |= 8u;
      v15 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
      if ( v15 )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v15, 1u);
        if ( ++*((_DWORD *)this + 56) == 1 )
          KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL));
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
    }
  }
  return v5;
}
