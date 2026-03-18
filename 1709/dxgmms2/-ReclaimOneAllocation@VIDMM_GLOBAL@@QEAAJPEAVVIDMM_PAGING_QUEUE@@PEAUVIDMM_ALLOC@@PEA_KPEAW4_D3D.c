/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0061210
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0066034 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pcc @ 0x1C0021698 (McTemplateK0pcc.c)
 *     McTemplateK0pqqt @ 0x1C0021BD0 (McTemplateK0pqqt.c)
 *     VidSchMarkDeviceAsError @ 0x1C002BA50 (VidSchMarkDeviceAsError.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0058648 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00587C0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C00588C4 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058BD0 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0066190 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009AC80 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C009AD0C (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009CBB0 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
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
  int v10; // r12d
  BOOL v11; // esi
  char v12; // r13
  char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 *v17; // rdx
  __int64 **v18; // rcx
  signed __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdi
  int v23; // r15d
  bool v24; // r14
  VIDMM_GLOBAL *v25; // rdi
  __int64 v26; // rbx
  _QWORD *v29; // r14
  _QWORD *v30; // rdi
  _QWORD *v31; // rsi
  struct VIDMM_PAGING_QUEUE *v32; // r14
  _QWORD *v33; // r13
  __int64 v34; // rax
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  _QWORD *v43; // r13
  _QWORD *v44; // r12
  __int64 v45; // rax
  _QWORD *v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // rax
  ULONG_PTR v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h]
  struct VIDMM_PAGING_QUEUE *v60; // [rsp+68h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v63; // [rsp+80h] [rbp-80h]
  unsigned __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v65; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v66[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE v67; // [rsp+F0h] [rbp-10h] BYREF
  struct _KAPC_STATE v68; // [rsp+120h] [rbp+20h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+150h] [rbp+50h] BYREF

  v5 = *a3;
  v63 = a4;
  v8 = *v5;
  v60 = a2;
  v9 = *(_DWORD *)(v8 + 92);
  v59 = v8;
  if ( (v9 & 2) == 0 )
    goto LABEL_2;
  if ( !a5 )
  {
    VidSchMarkDeviceAsError(a3[1][4], 20);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)this + 1616) & 0x10000) != 0 )
    v10 = 1;
  else
LABEL_2:
    v10 = 0;
  v11 = (*((_DWORD *)this + 1616) & 8) != 0;
  if ( v10 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else if ( (*((_DWORD *)this + 1616) & 8) != 0 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  v12 = 0;
  v13 = (char *)this + 39912;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v39 = *((_DWORD *)v13 + 4);
      if ( v39 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, (__int64)&EventBlockThread, v15, v39);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  *((_QWORD *)v13 + 1) = KeGetCurrentThread();
  v16 = (__int64 *)(v8 + 400);
  if ( *(_QWORD *)(v8 + 400) )
  {
    v17 = (__int64 *)*v16;
    if ( *(__int64 **)(*v16 + 8) != v16 || (v18 = *(__int64 ***)(v8 + 408), *v18 != v16) )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = (__int64)v18;
    *v16 = 0LL;
  }
  if ( *(_QWORD *)(v8 + 416) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v8);
    v12 = 1;
  }
  *((_QWORD *)v13 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v13, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  v21 = *((unsigned __int16 *)a3[12] + 2);
  *((_WORD *)a3[12] + 2) = 0;
  v22 = (__int16)v21;
  if ( (_WORD)v21 )
  {
    v23 = 0;
    v24 = (*(_DWORD *)(v8 + 92) & 1) != 0;
    if ( v12 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL);
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v21 + 32) + 336LL), -*(_QWORD *)(v8 + 8));
    }
    if ( v24 )
    {
LABEL_17:
      *(_DWORD *)(v8 + 92) &= ~2u;
      if ( !a5 )
      {
        *(_BYTE *)(v8 + 97) = 0;
LABEL_24:
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LOBYTE(Protect) = v22;
          LOBYTE(AllocationType[0]) = *(_BYTE *)(**a3 + 432);
          McTemplateK0pcc(**a3, &EventReclaimAllocation, v20, a3, *(_QWORD *)AllocationType, Protect);
        }
        if ( v11 || (_DWORD)v22 == 3 || (_DWORD)v22 == 2 && (*(_DWORD *)(v8 + 80) & 0x40) != 0 || !*(_DWORD *)(v8 + 128) )
        {
          v29 = (_QWORD *)(v8 + 296);
          v30 = *(_QWORD **)(v8 + 296);
          if ( v30 != (_QWORD *)(v8 + 296) )
          {
            do
            {
              v31 = (_QWORD *)*(v30 - 2);
              if ( v31 != v30 - 2 )
              {
                v32 = v60;
                do
                {
                  v33 = v31 - 5;
                  if ( (*(_DWORD *)(v31 - 1) & 1) == 0 )
                  {
                    v21 = (*((_BYTE *)v33 + 25) & 1) != 0;
                    if ( (unsigned int)v21 | *((_DWORD *)v33 + 38) )
                    {
                      memset(v66, 0, sizeof(v66));
                      LODWORD(v66[0]) = 210;
                      v66[2] = v31 - 5;
                      v23 = VIDMM_GLOBAL::QueueDeferredCommand(
                              this,
                              v32,
                              (struct _VIDMM_DEFERRED_COMMAND *)v66,
                              0,
                              &v58);
                      if ( (*((_DWORD *)v33 + 7) & 0x20) != 0 )
                      {
                        v33[35] = v58;
                        v33[32] = v32;
                      }
                    }
                  }
                  v31 = (_QWORD *)*v31;
                }
                while ( v31 != v30 - 2 );
                v29 = (_QWORD *)(v8 + 296);
              }
              v30 = (_QWORD *)*v30;
            }
            while ( v30 != v29 );
            v8 = v59;
          }
        }
        else if ( g_IsInternalReleaseOrDbg )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
          v51[5] = v22;
          v25 = this;
          v51[3] = a3;
          v51[4] = 0LL;
          v21 = (*(_DWORD *)(v8 + 80) >> 6) & 1;
          v51[6] = v21;
          goto LABEL_34;
        }
        v25 = this;
LABEL_34:
        v26 = *(_QWORD *)(v8 + 320);
        if ( *(struct _KTHREAD **)(v26 + 8) != KeGetCurrentThread() )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v19, v20);
          v52[3] = 275LL;
          v52[4] = 4LL;
          v52[5] = v26;
          v52[6] = 0LL;
          v52[7] = 0LL;
          WdLogEvent5_WdCriticalError(v52);
        }
        if ( *(int *)(v26 + 24) <= 0 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v21, v19);
          *(_QWORD *)(v53 + 24) = 406LL;
          WdLogEvent5_WdAssertion(v53);
        }
        if ( (*(_DWORD *)(v26 + 24))-- == 1 )
        {
          *(_QWORD *)(v26 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v26 + 16, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v23 == 259 )
        {
          if ( v63 )
          {
            *v63 = v58;
          }
          else
          {
            v65 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v60 + 11);
            v64 = v58;
            VIDMM_GLOBAL::WaitForFences(v25, &v65, &v64, 1u, 0LL);
            return 0;
          }
        }
        return (unsigned int)v23;
      }
      if ( (_DWORD)v22 == 1 )
      {
        *a5 = D3DDDI_RECLAIM_RESULT_OK;
      }
      else
      {
        if ( (_DWORD)v22 == 3 )
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        if ( v24
          && !*(_QWORD *)(v8 + 136)
          && *(_BYTE *)(v8 + 97)
          && !*(_BYTE *)(v8 + 98)
          && (*(_DWORD *)(v8 + 84) & 8) != 0 )
        {
          if ( !v11 )
          {
            v34 = *(_QWORD *)(v8 + 104);
            if ( v34 )
            {
              v21 = *(_QWORD *)(v34 + 8);
              if ( v21 )
              {
                KeStackAttachProcess(*(PRKPROCESS *)v21, &ApcState);
                if ( (**(_DWORD **)(v8 + 504) & 0x20000000) != 0 )
                {
                  v49 = *(_QWORD *)(v8 + 8);
                  BaseAddress = *(PVOID *)(*(_QWORD *)(v8 + 104) + 16LL);
                  RegionSize = v49;
                  v35 = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddress,
                          0LL,
                          &RegionSize,
                          0x1000000u,
                          4u);
                }
                else
                {
                  v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL)
                                                                                + 24LL)
                                                                  + 128LL))(
                          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 24LL),
                          *(_QWORD *)(*(_QWORD *)(v8 + 104) + 24LL));
                }
                v23 = v35;
                KeUnstackDetachProcess(&ApcState);
                if ( v23 < 0 )
                {
                  *(_BYTE *)(v8 + 97) = 0;
                  v50 = WdLogNewEntry5_WdEvent(v37, v36);
                  *(_QWORD *)(v50 + 24) = v23;
                  WdLogEvent5_WdEvent(v50);
                  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt(0LL, &EventUnreset, v20, v8, *(_QWORD *)AllocationType, Protect, 0);
                  }
                  v23 = 0;
                }
                else
                {
                  *a5 = D3DDDI_RECLAIM_RESULT_OK;
                  *(_QWORD *)(v8 + 440) = 0LL;
                  v38 = WdLogNewEntry5_WdEvent(v37, v36);
                  *(_QWORD *)(v38 + 24) = v8;
                  WdLogEvent5_WdEvent(v38);
                  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v8 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt(v21, &EventUnreset, v20, v8, *(_QWORD *)AllocationType, Protect, 1);
                  }
                }
                *(_DWORD *)(v8 + 84) &= ~8u;
              }
            }
            goto LABEL_24;
          }
LABEL_101:
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
          goto LABEL_24;
        }
      }
      if ( !v11 )
        goto LABEL_24;
      goto LABEL_101;
    }
    if ( v10
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 8LL) + 64LL) & 4) != 0
      || (v23 = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v8), v23 < 0) )
    {
      v25 = this;
    }
    else
    {
      v43 = (_QWORD *)(v8 + 296);
      v44 = *(_QWORD **)(v8 + 296);
      if ( v44 == (_QWORD *)(v8 + 296) )
      {
LABEL_89:
        *(_BYTE *)(v8 + 97) = 0;
        goto LABEL_17;
      }
      while ( 1 )
      {
        KeStackAttachProcess(*(PRKPROCESS *)*(v44 - 6), &v67);
        v23 = VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(v44 - 7), 0LL);
        KeUnstackDetachProcess(&v67);
        if ( v23 < 0 )
          break;
        v44 = (_QWORD *)*v44;
        if ( v44 == v43 )
          goto LABEL_89;
      }
      v45 = WdLogNewEntry5_WdAssertion(v21, v19);
      *(_QWORD *)(v45 + 24) = v44 - 7;
      WdLogEvent5_WdAssertion(v45);
      v46 = (_QWORD *)v44[1];
      if ( v46 != v43 )
      {
        do
        {
          KeStackAttachProcess(*(PRKPROCESS *)*(v46 - 6), &v68);
          VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(v46 - 7), 1);
          KeUnstackDetachProcess(&v68);
          v46 = (_QWORD *)v46[1];
        }
        while ( v46 != v43 );
        v8 = v59;
      }
      v25 = this;
      VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0);
    }
    v23 = 0;
    v47 = *((unsigned __int16 *)a3[12] + 2);
    *((_WORD *)a3[12] + 2) = 3;
    *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    _InterlockedIncrement(&dword_1C00406A0);
    v48 = WdLogNewEntry5_WdLowResource(v47, v19);
    *(_QWORD *)(v48 + 24) = v8;
    WdLogEvent5_WdLowResource(v48);
    goto LABEL_34;
  }
  v40 = WdLogNewEntry5_WdAssertion(v21, v19);
  *(_QWORD *)(v40 + 24) = a3;
  WdLogEvent5_WdAssertion(v40);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320), v41, v42);
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
