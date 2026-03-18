/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0062CC4 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pcc @ 0x1C001F5C0 (Template_pcc.c)
 *     Template_pqqt @ 0x1C001FB14 (Template_pqqt.c)
 *     VidSchMarkDeviceAsError @ 0x1C002A070 (VidSchMarkDeviceAsError.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0055AEC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0055C08 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0055CCC (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055FAC (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C005CFE0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0062DF0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093274 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093300 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0094D3C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  __int64 *v5; // rbx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edx
  BOOL v11; // r13d
  BOOL v12; // r15d
  char v13; // r12
  char *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 *v17; // rax
  __int64 *v18; // rdx
  __int64 **v19; // rcx
  __int64 v20; // rdi
  signed __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdi
  int v27; // r14d
  bool v28; // si
  __int64 v29; // rbx
  _QWORD *v32; // r15
  _QWORD *v33; // rdi
  _QWORD *v34; // rsi
  struct VIDMM_PAGING_QUEUE *v35; // rbx
  _QWORD *v36; // r13
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // r9d
  __int64 v44; // rax
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  VIDMM_GLOBAL *v51; // rcx
  void **v52; // r13
  void **v53; // r12
  __int64 v54; // rax
  VIDMM_GLOBAL *v55; // rcx
  void **i; // rsi
  VIDMM_GLOBAL *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  ULONG_PTR v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  struct VIDMM_PAGING_QUEUE *v69; // [rsp+60h] [rbp-A0h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v73; // [rsp+80h] [rbp-80h]
  unsigned __int64 v74; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v75; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v76[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE v77; // [rsp+F0h] [rbp-10h] BYREF
  struct _KAPC_STATE v78; // [rsp+120h] [rbp+20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF

  v5 = *a3;
  v73 = a4;
  v8 = *v5;
  v69 = a2;
  v9 = *(_DWORD *)(v8 + 92);
  v72 = v8;
  if ( (v9 & 2) != 0 && !a5 )
  {
    VidSchMarkDeviceAsError(a3[1][4], 20);
    return 3221225485LL;
  }
  v10 = *((_DWORD *)this + 1616);
  v11 = (v10 & 0x10000) != 0 && (v9 & 2) != 0;
  v12 = (v10 & 8) != 0;
  if ( (v10 & 0x10000) != 0 && (v9 & 2) != 0 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else if ( (v10 & 8) != 0 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  v13 = 0;
  v14 = (char *)this + 39912;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v43 = *((_DWORD *)v14 + 4);
      if ( v43 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v15, &EventBlockThread, v16, v43);
    }
    ExAcquirePushLockExclusiveEx(v14, 0LL);
  }
  *((_QWORD *)v14 + 1) = KeGetCurrentThread();
  v17 = (__int64 *)(v8 + 432);
  if ( *(_QWORD *)(v8 + 432) )
  {
    v18 = (__int64 *)*v17;
    v19 = *(__int64 ***)(v8 + 440);
    if ( *(__int64 **)(*v17 + 8) != v17 || *v19 != v17 )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (__int64)v19;
    *v17 = 0LL;
  }
  if ( *(_QWORD *)(v8 + 448) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v8);
    v13 = 1;
  }
  *((_QWORD *)v14 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  v20 = *(_QWORD *)(v8 + 320);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v20 + 8) == KeGetCurrentThread() )
  {
    if ( *(int *)(v20 + 24) <= 0 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v44 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v44);
    }
    ++*(_DWORD *)(v20 + 24);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = *(_DWORD *)(v20 + 28);
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v24, &EventBlockThread, v23, v45);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v20);
      ExAcquirePushLockExclusiveEx(v20 + 16, 0LL);
    }
    if ( *(_QWORD *)(v20 + 8) )
    {
      v46 = WdLogNewEntry5_WdAssertion(v24, v21);
      *(_QWORD *)(v46 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v46);
    }
    if ( *(_DWORD *)(v20 + 24) )
    {
      v47 = WdLogNewEntry5_WdAssertion(v24, v21);
      *(_QWORD *)(v47 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v47);
    }
    *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v20 + 24) = 1;
  }
  v25 = *((unsigned __int16 *)a3[12] + 2);
  *((_WORD *)a3[12] + 2) = 0;
  v26 = (__int16)v25;
  if ( (_WORD)v25 )
  {
    v27 = 0;
    v28 = (*(_DWORD *)(v8 + 92) & 1) != 0;
    if ( v13 )
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL);
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v25 + 32) + 296LL), -*(_QWORD *)(v8 + 8));
    }
    if ( v28 )
    {
LABEL_23:
      *(_DWORD *)(v8 + 92) &= ~2u;
      if ( !a5 )
      {
        *(_BYTE *)(v8 + 97) = 0;
LABEL_30:
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LOBYTE(Protect) = v26;
          LOBYTE(AllocationType[0]) = *(_BYTE *)(**a3 + 464);
          Template_pcc(**a3, &EventReclaimAllocation, v23, a3, *(_QWORD *)AllocationType, Protect);
        }
        if ( v12 || (_DWORD)v26 == 3 || (_DWORD)v26 == 2 && (*(_DWORD *)(v8 + 80) & 0x40) != 0 || !*(_DWORD *)(v8 + 128) )
        {
          v32 = (_QWORD *)(v8 + 296);
          v33 = *(_QWORD **)(v8 + 296);
          if ( v33 != (_QWORD *)(v8 + 296) )
          {
            do
            {
              v34 = (_QWORD *)*(v33 - 2);
              if ( v34 != v33 - 2 )
              {
                v35 = v69;
                do
                {
                  v36 = v34 - 5;
                  if ( (*(_DWORD *)(v34 - 1) & 1) == 0 )
                  {
                    v25 = (*((_BYTE *)v36 + 25) & 1) != 0;
                    if ( (unsigned int)v25 | *((_DWORD *)v36 + 38) )
                    {
                      memset(v76, 0, sizeof(v76));
                      LODWORD(v76[0]) = 210;
                      v76[2] = v34 - 5;
                      v27 = VIDMM_GLOBAL::QueueDeferredCommand(
                              this,
                              v35,
                              (struct _VIDMM_DEFERRED_COMMAND *)v76,
                              0,
                              &v68);
                      if ( (*((_DWORD *)v36 + 7) & 0x20) != 0 )
                      {
                        v36[34] = v68;
                        v36[31] = v35;
                      }
                    }
                  }
                  v34 = (_QWORD *)*v34;
                }
                while ( v34 != v33 - 2 );
                v8 = v72;
                v32 = (_QWORD *)(v72 + 296);
              }
              v33 = (_QWORD *)*v33;
            }
            while ( v33 != v32 );
          }
        }
        else if ( g_IsInternalReleaseOrDbg )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdTrace(v25);
          v61[3] = a3;
          v61[4] = 0LL;
          v61[5] = v26;
          v25 = (*(_DWORD *)(v8 + 80) >> 6) & 1;
          v61[6] = v25;
        }
        goto LABEL_38;
      }
      if ( (_DWORD)v26 == 1 )
      {
        *a5 = D3DDDI_RECLAIM_RESULT_OK;
      }
      else
      {
        if ( (_DWORD)v26 == 3 )
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        if ( v28
          && !*(_QWORD *)(v8 + 136)
          && *(_BYTE *)(v8 + 97)
          && !*(_BYTE *)(v8 + 98)
          && (*(_DWORD *)(v8 + 84) & 8) != 0 )
        {
          if ( !v12 )
          {
            v37 = *(_QWORD *)(v8 + 104);
            if ( v37 )
            {
              v25 = *(_QWORD *)(v37 + 8);
              if ( v25 )
              {
                KeStackAttachProcess(*(PRKPROCESS *)v25, &ApcState);
                if ( (**(_DWORD **)(v8 + 520) & 0x20000000) != 0 )
                {
                  v60 = *(_QWORD *)(v8 + 8);
                  BaseAddress = *(PVOID *)(*(_QWORD *)(v8 + 104) + 16LL);
                  RegionSize = v60;
                  v38 = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddress,
                          0LL,
                          &RegionSize,
                          0x1000000u,
                          4u);
                }
                else
                {
                  v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL)
                                                                                + 24LL)
                                                                  + 128LL))(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 24LL),
                          *(_QWORD *)(*(_QWORD *)(v8 + 104) + 24LL));
                }
                v27 = v38;
                KeUnstackDetachProcess(&ApcState);
                if ( v27 < 0 )
                {
                  *(_BYTE *)(v8 + 97) = 0;
                  v42 = WdLogNewEntry5_WdEvent(v40, v39);
                  *(_QWORD *)(v42 + 24) = v27;
                  WdLogEvent5_WdEvent(v42);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    Template_pqqt(0LL, &EventUnreset, v23, v8, *(_QWORD *)AllocationType, Protect, 0);
                  }
                  v27 = 0;
                }
                else
                {
                  *a5 = D3DDDI_RECLAIM_RESULT_OK;
                  *(_QWORD *)(v8 + 472) = 0LL;
                  v41 = WdLogNewEntry5_WdEvent(v40, v39);
                  *(_QWORD *)(v41 + 24) = v8;
                  WdLogEvent5_WdEvent(v41);
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    Template_pqqt(v25, &EventUnreset, v23, v8, *(_QWORD *)AllocationType, Protect, 1);
                  }
                }
                *(_DWORD *)(v8 + 84) &= ~8u;
              }
            }
            goto LABEL_30;
          }
LABEL_109:
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
          goto LABEL_30;
        }
      }
      if ( !v12 )
        goto LABEL_30;
      goto LABEL_109;
    }
    if ( !v11 )
    {
      v51 = *(VIDMM_GLOBAL **)(*(_QWORD *)(v8 + 104) + 8LL);
      if ( (*((_DWORD *)v51 + 16) & 4) == 0 )
      {
        v27 = VIDMM_GLOBAL::CommitGlobalBackingStore(v51, (struct _VIDMM_GLOBAL_ALLOC *)v8);
        if ( v27 >= 0 )
        {
          v52 = (void **)(v8 + 296);
          v53 = *(void ***)(v8 + 296);
          if ( v53 == (void **)(v8 + 296) )
          {
LABEL_99:
            *(_BYTE *)(v8 + 97) = 0;
            goto LABEL_23;
          }
          while ( 1 )
          {
            KeStackAttachProcess(*(PRKPROCESS *)*(v53 - 6), &v77);
            v27 = VIDMM_GLOBAL::CommitLocalBackingStore(this, v53 - 7, 0LL);
            KeUnstackDetachProcess(&v77);
            if ( v27 < 0 )
              break;
            v53 = (void **)*v53;
            if ( v53 == v52 )
              goto LABEL_99;
          }
          v54 = WdLogNewEntry5_WdAssertion(v25, v21);
          *(_QWORD *)(v54 + 24) = v53 - 7;
          WdLogEvent5_WdAssertion(v54);
          for ( i = (void **)v53[1]; i != v52; i = (void **)i[1] )
          {
            KeStackAttachProcess(*(PRKPROCESS *)*(i - 6), &v78);
            VIDMM_GLOBAL::UncommitLocalBackingStore(v57, (struct _VIDMM_LOCAL_ALLOC *)(i - 7), 1);
            KeUnstackDetachProcess(&v78);
          }
          VIDMM_GLOBAL::UncommitGlobalBackingStore(v55, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0LL);
        }
      }
    }
    v27 = 0;
    v58 = *((unsigned __int16 *)a3[12] + 2);
    *((_WORD *)a3[12] + 2) = 3;
    *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    _InterlockedIncrement(&dword_1C003C690);
    v59 = WdLogNewEntry5_WdLowResource(v58);
    *(_QWORD *)(v59 + 24) = v8;
    WdLogEvent5_WdLowResource(v59);
LABEL_38:
    v29 = *(_QWORD *)(v8 + 320);
    if ( *(struct _KTHREAD **)(v29 + 8) != KeGetCurrentThread() )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v21, v23);
      v62[3] = 275LL;
      v62[4] = 4LL;
      v62[5] = v29;
      v62[6] = 0LL;
      v62[7] = 0LL;
      WdLogEvent5_WdCriticalError(v62);
    }
    if ( *(int *)(v29 + 24) <= 0 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v25, v21);
      *(_QWORD *)(v63 + 24) = 395LL;
      WdLogEvent5_WdAssertion(v63);
    }
    if ( (*(_DWORD *)(v29 + 24))-- == 1 )
    {
      *(_QWORD *)(v29 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v29 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v27 == 259 )
    {
      if ( v73 )
      {
        *v73 = v68;
      }
      else
      {
        v75 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v69 + 11);
        v74 = v68;
        VIDMM_GLOBAL::WaitForFences(this, &v75, &v74, 1u, 0LL);
        return 0;
      }
    }
    return (unsigned int)v27;
  }
  v48 = WdLogNewEntry5_WdAssertion(v25, v21);
  *(_QWORD *)(v48 + 24) = a3;
  WdLogEvent5_WdAssertion(v48);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320), v49, v50);
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
