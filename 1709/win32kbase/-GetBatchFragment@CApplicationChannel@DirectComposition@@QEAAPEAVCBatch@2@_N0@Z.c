/*
 * XREFs of ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0031CBC
 * Callers:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002EDC4 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0031FB0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C0034E30 (NtDCompositionSubmitDWMBatch.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 * Callees:
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C0031C44 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1C0032C58 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0034CD8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z @ 0x1C003790C (-BeginDynamicAllocation@CBatchSharedMemoryPool@DirectComposition@@QEAA_N_KPEA_K@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1C0081A0C (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

struct DirectComposition::CBatch *__fastcall DirectComposition::CApplicationChannel::GetBatchFragment(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  struct DirectComposition::CBatch *v4; // rsi
  __int64 v5; // rcx
  char v7; // r14
  PSLIST_ENTRY v8; // rax
  DirectComposition::CBatch *v9; // rbx
  struct DirectComposition::CBatch *v10; // rax
  DirectComposition::CBatchSharedMemoryPool *v11; // r14
  __int64 v12; // rax
  int v13; // r10d
  DirectComposition::CBatchSharedMemoryPool *v14; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  DirectComposition::CBatchSharedMemoryPool **v17; // rax
  __int64 v18; // rax
  unsigned __int64 v20; // rax
  DirectComposition::CBatchSharedMemoryPool *v21; // rcx
  DirectComposition::CBatchSharedMemoryPool *v22; // rax
  int v23; // ebp
  DirectComposition::CBatchSharedMemoryPool *v24; // rcx
  struct _ERESOURCE *v25; // rbx
  unsigned __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF
  struct DirectComposition::CBatch *v27; // [rsp+70h] [rbp+8h] BYREF
  char v28; // [rsp+78h] [rbp+10h]
  DirectComposition::CBatchSharedMemoryPool *v29; // [rsp+88h] [rbp+20h] BYREF

  v28 = a2;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 27);
  v7 = a2;
  v27 = 0LL;
  KeResetEvent(*(PRKEVENT *)(v5 + 8));
  while ( 1 )
  {
    v8 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 12);
    v9 = (DirectComposition::CBatch *)v8;
    if ( !v8 )
      break;
    --*((_DWORD *)this + 57);
    v20 = *((_QWORD *)&v8[4].Next + 1);
    if ( v20 > *((_QWORD *)this + 29) )
    {
      *((_BYTE *)this + 240) |= 2u;
      *((_QWORD *)this + 29) = v20;
    }
    DirectComposition::CBatch::Clear(v9);
    *(_QWORD *)v9 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = v9;
  }
  v10 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 21);
  if ( v10 )
  {
    *((_QWORD *)this + 21) = 0LL;
    v4 = v10;
  }
  else
  {
    v11 = (DirectComposition::CApplicationChannel *)((char *)this + 600);
LABEL_5:
    v12 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 64LL))(this);
    v26[0] = 0LL;
    v13 = 0;
    v29 = 0LL;
    v14 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
    v15 = v12 + 40;
    while ( 1 )
    {
      if ( v14 == v11 )
      {
        if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                    (DirectComposition::CApplicationChannel *)((char *)this + 600),
                    *((_BYTE *)this + 624),
                    &v29) >= 0 )
        {
          v14 = v29;
          DirectComposition::CBatchSharedMemoryPool::BeginDynamicAllocation(v29, v15, v26);
          v24 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
          if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v11 + 8LL) != v11 )
            __fastfail(3u);
          v16 = v26[0];
          *(_QWORD *)v14 = v24;
          *((_QWORD *)v14 + 1) = v11;
          *((_QWORD *)v24 + 1) = v14;
          goto LABEL_30;
        }
LABEL_43:
        if ( !a3 )
          return v4;
        DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
        goto LABEL_5;
      }
      if ( !*((_BYTE *)v14 + 64) )
      {
        v16 = *((_QWORD *)v14 + 5);
        if ( v15 <= 4096 - v16 )
          break;
      }
      v14 = *(DirectComposition::CBatchSharedMemoryPool **)v14;
    }
    *((_BYTE *)v14 + 64) = 1;
    v17 = (DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v14 + 1);
    if ( v17 == (DirectComposition::CBatchSharedMemoryPool **)v11 )
      goto LABEL_10;
    v21 = *(DirectComposition::CBatchSharedMemoryPool **)v14;
    if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v14 + 8LL) != v14 || *v17 != v14 )
      __fastfail(3u);
    *v17 = v21;
    *((_QWORD *)v21 + 1) = v17;
    v22 = *(DirectComposition::CBatchSharedMemoryPool **)v11;
    if ( *(DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v11 + 8LL) != v11 )
      __fastfail(3u);
    *(_QWORD *)v14 = v22;
    *((_QWORD *)v14 + 1) = v11;
    *((_QWORD *)v22 + 1) = v14;
LABEL_30:
    *(_QWORD *)v11 = v14;
    if ( v13 < 0 )
      goto LABEL_43;
LABEL_10:
    if ( !v14 )
      return v4;
    v18 = *((_QWORD *)v14 + 5);
    if ( (unsigned __int64)(4096 - v18) >= 0x28 )
      *((_QWORD *)v14 + 5) = v18 + 40;
    v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
    if ( v4 )
    {
      *((_QWORD *)this + 23) = *(_QWORD *)v4;
    }
    else
    {
      do
      {
        v23 = DirectComposition::CApplicationChannel::CreateBatch(this, &v27);
        if ( v23 < 0
          && *((int *)this + 57) > 0
          && DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) )
        {
          v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 23);
          v23 = 0;
          v27 = v4;
          *((_QWORD *)this + 23) = *(_QWORD *)v4;
        }
        else
        {
          v4 = v27;
        }
      }
      while ( a3 && v23 < 0 );
    }
    v7 = v28;
    if ( v4 )
    {
      *((_QWORD *)v4 + 15) = v14;
      *((_QWORD *)v4 + 16) = v16;
    }
    else
    {
      *((_BYTE *)v14 + 64) = 0;
    }
  }
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    if ( v7 )
    {
      *((_DWORD *)v4 + 4) = ++*((_DWORD *)this + 94);
      ++*((_DWORD *)this + 57);
      *((_BYTE *)this + 240) |= 8u;
      if ( *((_QWORD *)this + 45) )
      {
        v25 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v25, 1u);
        if ( ++*((_DWORD *)this + 56) == 1 )
          KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 45) + 8LL));
        ExReleaseResourceLite(*((PERESOURCE *)this + 46));
        KeLeaveCriticalRegion();
      }
    }
  }
  return v4;
}
