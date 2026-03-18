/*
 * XREFs of ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C006A520
 * Callers:
 *     ?VidMmMakeResident@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPEA_K3@Z @ 0x1C00055D0 (-VidMmMakeResident@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@IKPE.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00665C0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0005400 (VidSchIsMonitoredFenceSignaled.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005510 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pq @ 0x1C0024428 (McTemplateK0pq.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00649C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C006CDC4 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C006CE00 (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 *     ?BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006D100 (-BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C006D170 (-CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1C00AC030 (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        __int64 a4,
        char a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  unsigned int v7; // ebp
  unsigned __int64 *v8; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // edx
  struct VIDMM_GLOBAL **v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // r15
  struct _VIDMM_MULTI_ALLOC **v22; // r9
  struct _VIDMM_MULTI_ALLOC **v23; // r14
  __int64 v24; // r9
  __int64 **v25; // r10
  __int64 v26; // r11
  unsigned __int64 *v27; // rax
  struct VIDMM_GLOBAL *v28; // rdx
  unsigned __int64 v29; // r15
  struct _VIDMM_MULTI_ALLOC **v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  struct _VIDMM_MULTI_ALLOC **i; // r9
  struct _VIDMM_MULTI_ALLOC *v34; // r10
  __int64 v35; // rdi
  _QWORD *v36; // r8
  unsigned int j; // edx
  __int64 v38; // rax
  _QWORD *v39; // rcx
  int v40; // edi
  __int64 v41; // r8
  unsigned int v42; // esi
  struct VIDMM_ALLOC *v43; // rdi
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  _QWORD *v54; // rax
  _QWORD *v55; // rcx
  _QWORD *v56; // rdx
  __int64 v57; // r11
  __int64 v58; // rcx
  int v59; // r9d
  __int64 v60; // rax
  struct VIDMM_GLOBAL *v61; // [rsp+20h] [rbp-B8h]
  _BYTE v62[8]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+38h] [rbp-A0h]
  int v64; // [rsp+40h] [rbp-98h]
  _QWORD v65[17]; // [rsp+50h] [rbp-88h] BYREF

  v7 = 0;
  v8 = a7;
  *a6 = 0LL;
  *v8 = 0LL;
  v11 = *((_QWORD *)a2 + 17);
  v12 = *(_QWORD *)(v11 + 16);
  v13 = v12 == -360;
  v14 = v12 + 360;
  v63 = v14;
  if ( !v13 && *(struct _KTHREAD **)(v14 + 8) == KeGetCurrentThread() )
  {
    v60 = WdLogNewEntry5_WdAssertion(a6, a2);
    *(_QWORD *)(v60 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v60);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v59 = *(_DWORD *)(v14 + 16);
      if ( v59 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, (__int64)&EventBlockThread, v16, v59);
    }
    ExAcquirePushLockExclusiveEx(v14, 0LL);
  }
  v17 = 0;
  *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
  v18 = *(struct VIDMM_GLOBAL ***)(v11 + 16);
  v64 = 2;
  if ( *((_DWORD *)*v18 + 1748) )
  {
    do
    {
      v19 = v17++;
      v20 = (_QWORD *)((char *)v18[6] + 296 * v19);
      v20[13] = v20[9];
      v20[14] = v20[10];
      v20[15] = v20[11];
      v20[16] = v20[12];
    }
    while ( v17 < *((_DWORD *)*v18 + 1748) );
    v18 = *(struct VIDMM_GLOBAL ***)(v11 + 16);
  }
  v21 = a4;
  v22 = a3;
  v23 = &a3[v21];
  if ( a3 != &a3[v21] )
  {
    do
    {
      if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(*v22)
        && !(*((_BYTE *)v25 + 25) & 1 | *((_DWORD *)v25 + 38))
        && !*((_BYTE *)v25 + 27) )
      {
        v50 = **v25;
        if ( (*((_BYTE *)v25 + 36) & 1) != 0 && (*(_DWORD *)(v50 + 76) & 0xF0000) == 0x20000 )
          v51 = 0LL;
        else
          v51 = *(_WORD *)(v50 + 78) & 0xF;
        v52 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 48LL) + 296LL * (*(_DWORD *)(v26 + 76) & 0x3F) + 8 * v51;
        *(_QWORD *)(v52 + 104) += *(_QWORD *)(v26 + 16);
        *((_BYTE *)v25 + 27) = 1;
      }
      v22 = (struct _VIDMM_MULTI_ALLOC **)(v24 + 8);
    }
    while ( v22 != v23 );
    v18 = *(struct VIDMM_GLOBAL ***)(v11 + 16);
  }
  *v8 = 0LL;
  v27 = 0LL;
  v28 = *v18;
  if ( *((_DWORD *)*v18 + 1748) )
  {
    do
    {
      VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        (struct VIDMM_GLOBAL *)((char *)v18[6] + 296 * v7),
        (unsigned __int64 *)&a7,
        a5 & 1,
        0,
        v28,
        v7);
      v27 = (unsigned __int64 *)*v8;
      if ( *v8 <= (unsigned __int64)a7 )
        v27 = a7;
      *v8 = (unsigned __int64)v27;
      ++v7;
      v28 = *v18;
    }
    while ( v7 < *((_DWORD *)*v18 + 1748) );
  }
  v29 = (unsigned __int64)(v21 * 8) >> 3;
  v30 = a3;
  v31 = 0LL;
  if ( a3 > v23 )
    v29 = 0LL;
  if ( v29 )
  {
    do
    {
      v32 = (__int64)*v30++;
      ++v31;
      *(_BYTE *)(v32 + 27) = 0;
    }
    while ( v31 != v29 );
    v27 = (unsigned __int64 *)*v8;
  }
  if ( v27 )
  {
    v40 = -1073741801;
  }
  else
  {
    VIDMM_PROCESS_ADAPTER_INFO::BeginMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v11 + 16));
    for ( i = a3; i != v23; ++*((_DWORD *)v34 + 38) )
    {
      v34 = *i;
      v35 = **(_QWORD **)*i;
      if ( !(*((_BYTE *)*i + 25) & 1 | *((_DWORD *)*i + 38)) )
      {
        v53 = (_QWORD *)*((_QWORD *)v34 + 14);
        v54 = (_QWORD *)((char *)v34 + 112);
        if ( (struct _VIDMM_MULTI_ALLOC *)v53[1] != (struct _VIDMM_MULTI_ALLOC *)((char *)v34 + 112)
          || (v55 = (_QWORD *)*((_QWORD *)v34 + 15), (_QWORD *)*v55 != v54) )
        {
          __fastfail(3u);
        }
        *v55 = v53;
        v53[1] = v55;
        v56 = *(_QWORD **)(v11 + 152);
        if ( *v56 != v11 + 144 )
          __fastfail(3u);
        *v54 = v11 + 144;
        *((_QWORD *)v34 + 15) = v56;
        *v56 = v54;
        *(_QWORD *)(v11 + 152) = v54;
        if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(v34) )
        {
          v58 = (unsigned __int8)HIBYTE(*(_WORD *)(v35 + 76)) >> 4;
          *(_QWORD *)(v57 + 8 * v58 + 136) += *(_QWORD *)(v35 + 16);
        }
      }
      ++i;
    }
    VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(*(VIDMM_PROCESS_ADAPTER_INFO **)(v11 + 16));
    v36 = *(_QWORD **)(v11 + 16);
    for ( j = 0; j < *(_DWORD *)(*v36 + 6992LL); v39[12] = v39[16] )
    {
      v38 = j++;
      v39 = (_QWORD *)(v36[6] + 296 * v38);
      v39[9] = v39[13];
      v39[10] = v39[14];
      v39[11] = v39[15];
    }
    v40 = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v62);
  if ( v40 == -1073741801 )
  {
    if ( (a5 & 2) != 0 )
      VidSchiMarkDeviceAsError(*(_QWORD *)(v11 + 32), 12);
    return 3221225495LL;
  }
  else
  {
    v42 = 0;
    while ( a3 != v23 )
    {
      v43 = *a3;
      if ( *((int *)*a3 + 41) > 0
        || (*((_DWORD *)v43 + 7) & 3) != 2
        || *((_DWORD *)this + 2) == 206 && *((struct VIDMM_ALLOC **)this + 878) == v43
        || ((v44 = **(_QWORD **)v43,
             v45 = *(_QWORD *)(v44 + 168),
             v46 = *(_DWORD *)(v44 + 76) & 0x3F,
             v47 = *((_QWORD *)this + v46 + 682),
             v47 <= v45)
         || v47 - v45 < 0x7FFFFFFF)
        && !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v46 + 746), v45) )
      {
        memset(v65, 0, 0x50uLL);
        LODWORD(v65[0]) = 206;
        v65[2] = v43;
        v65[4] = 0LL;
        v49 = VIDMM_GLOBAL::QueueDeferredCommand(
                this,
                a2,
                (struct _VIDMM_DEFERRED_COMMAND *)v65,
                dword_1C0047348 == 0,
                a6);
        v46 = *((unsigned int *)v43 + 7);
        v42 = v49;
        if ( (v46 & 0x20) != 0 && v49 == 259 )
        {
          *((_QWORD *)v43 + 30) = a2;
          v46 = *a6;
          *((_QWORD *)v43 + 33) = *a6;
        }
      }
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        LODWORD(v61) = *((_DWORD *)v43 + 38);
        McTemplateK0pq(v46, &EventVidMmMakeResident, v41, v43, v61);
      }
      ++a3;
      if ( *((_QWORD *)this + 5187) )
        VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(this, a2, v43, v42 == 259, *a6);
    }
    return v42;
  }
}
