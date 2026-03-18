/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C5F8
 * Callers:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001984C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C8E0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C001D8B0 (NtDCompositionSubmitDWMBatch.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00815E4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 * Callees:
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C00144EC (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0016050 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C001C580 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C001D4BC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C007F398 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  __int64 v4; // rcx
  struct DirectComposition::CBatch *v7; // rsi
  PSLIST_ENTRY v8; // rax
  DirectComposition::CBatch *v9; // rbx
  DirectComposition::CBatchSharedMemoryPool *v10; // r14
  __int64 v11; // rax
  int v12; // r10d
  DirectComposition::CBatchSharedMemoryPool *v13; // rbx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r15
  DirectComposition::CBatchSharedMemoryPool **v16; // rax
  __int64 v17; // rax
  unsigned __int64 v19; // rax
  DirectComposition::CBatchSharedMemoryPool *v20; // rcx
  DirectComposition::CBatchSharedMemoryPool *v21; // rax
  int v22; // ebp
  DirectComposition::CBatchSharedMemoryPool *v23; // rcx
  struct _ERESOURCE *v24; // rbx
  unsigned __int64 v25[9]; // [rsp+20h] [rbp-48h] BYREF
  struct DirectComposition::CBatch *v26; // [rsp+70h] [rbp+8h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v27; // [rsp+88h] [rbp+20h] BYREF

  v4 = *((_QWORD *)this + 29);
  v26 = 0LL;
  v7 = 0LL;
  KeResetEvent(*(PRKEVENT *)(v4 + 8));
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
    v9 = (DirectComposition::CBatch *)v8;
    if ( !v8 )
      break;
    --*((_DWORD *)this + 61);
    v19 = *((_QWORD *)&v8[4].Next + 1);
    if ( v19 > *((_QWORD *)this + 31) )
    {
      *((_BYTE *)this + 256) |= 2u;
      *((_QWORD *)this + 31) = v19;
    }
    DirectComposition::CBatch::Clear(v9);
    *(_QWORD *)v9 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = v9;
  }
  if ( *((_QWORD *)this + 23) )
  {
    v7 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = 0LL;
  }
  else
  {
    v10 = (DirectComposition::CApplicationChannel *)((char *)this + 624);
LABEL_5:
    v11 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    v25[0] = 0LL;
    v12 = 0;
    v27 = 0LL;
    v13 = *(DirectComposition::CBatchSharedMemoryPool **)v10;
    v14 = v11 + 40;
    while ( 1 )
    {
      if ( v13 == v10 )
      {
        if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                    (DirectComposition::CApplicationChannel *)((char *)this + 624),
                    *((_BYTE *)this + 648),
                    &v27) >= 0 )
        {
          v13 = v27;
          DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v27, v14, v25);
          v23 = *(DirectComposition::CBatchSharedMemoryPool **)v10;
          if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v10 + 8LL) != v10 )
            __fastfail(3u);
          v15 = v25[0];
          *(_QWORD *)v13 = v23;
          *((_QWORD *)v13 + 1) = v10;
          *((_QWORD *)v23 + 1) = v13;
          goto LABEL_30;
        }
LABEL_43:
        if ( !a3 )
          return v7;
        DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
        goto LABEL_5;
      }
      if ( !*((_BYTE *)v13 + 64) && v14 <= 4096LL - *((_QWORD *)v13 + 5) )
        break;
      v13 = *(DirectComposition::CBatchSharedMemoryPool **)v13;
    }
    v15 = *((_QWORD *)v13 + 5);
    *((_BYTE *)v13 + 64) = 1;
    v16 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v13 + 1);
    if ( v16 == (DirectComposition::CBatchSharedMemoryPool **)v10 )
      goto LABEL_10;
    v20 = *(DirectComposition::CBatchSharedMemoryPool **)v13;
    if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v13 + 8LL) != v13 || *v16 != v13 )
      __fastfail(3u);
    *v16 = v20;
    *((_QWORD *)v20 + 1) = v16;
    v21 = *(DirectComposition::CBatchSharedMemoryPool **)v10;
    if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v10 + 8LL) != v10 )
      __fastfail(3u);
    *(_QWORD *)v13 = v21;
    *((_QWORD *)v13 + 1) = v10;
    *((_QWORD *)v21 + 1) = v13;
LABEL_30:
    *(_QWORD *)v10 = v13;
    if ( v12 < 0 )
      goto LABEL_43;
LABEL_10:
    if ( !v13 )
      return v7;
    v17 = *((_QWORD *)v13 + 5);
    if ( (unsigned __int64)(4096 - v17) >= 0x28 )
      *((_QWORD *)v13 + 5) = v17 + 40;
    v7 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 25);
    if ( v7 )
    {
      *((_QWORD *)this + 25) = *(_QWORD *)v7;
    }
    else
    {
      do
      {
        v22 = DirectComposition::CApplicationChannel::CreateBatch(this, &v26);
        if ( v22 < 0
          && *((int *)this + 61) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v7 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 25);
          v22 = 0;
          v26 = v7;
          *((_QWORD *)this + 25) = *(_QWORD *)v7;
        }
        else
        {
          v7 = v26;
        }
      }
      while ( a3 && v22 < 0 );
    }
    if ( v7 )
    {
      *((_QWORD *)v7 + 15) = v13;
      *((_QWORD *)v7 + 16) = v15;
    }
    else
    {
      *((_BYTE *)v13 + 64) = 0;
    }
  }
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    if ( a2 )
    {
      *((_DWORD *)v7 + 4) = ++*((_DWORD *)this + 98);
      ++*((_DWORD *)this + 61);
      *((_BYTE *)this + 256) |= 8u;
      if ( *((_QWORD *)this + 47) )
      {
        v24 = (struct _ERESOURCE *)*((_QWORD *)this + 48);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v24, 1u);
        if ( ++*((_DWORD *)this + 60) == 1 )
          KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 47) + 8LL));
        ExReleaseResourceLite(*((PERESOURCE *)this + 48));
        KeLeaveCriticalRegion();
      }
    }
  }
  return v7;
}
