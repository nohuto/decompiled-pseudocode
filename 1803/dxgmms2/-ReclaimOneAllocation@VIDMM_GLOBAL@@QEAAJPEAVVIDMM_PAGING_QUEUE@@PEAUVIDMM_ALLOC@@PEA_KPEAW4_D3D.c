/*
 * XREFs of ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00655F0
 * Callers:
 *     ?ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C006A494 (-ReclaimAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pcc @ 0x1C0023FE4 (McTemplateK0pcc.c)
 *     McTemplateK0pqqt @ 0x1C002451C (McTemplateK0pqqt.c)
 *     VidSchMarkDeviceAsError @ 0x1C002EAB0 (VidSchMarkDeviceAsError.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00649C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C006AA20 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C006C100 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006C280 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C006C384 (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006C694 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A0514 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A05A0 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A30C4 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ReclaimOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        unsigned __int64 *a4,
        enum _D3DDDI_RECLAIM_RESULT *a5)
{
  __int64 *v5; // rbx
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // r12d
  _BOOL8 v11; // r15
  char v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // rdi
  signed __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // r14d
  bool v27; // si
  VIDMM_GLOBAL *v28; // rdi
  __int64 v29; // rbx
  int v30; // eax
  int v31; // eax
  _QWORD *v33; // r15
  _QWORD *v34; // rdi
  _QWORD *v35; // rsi
  struct VIDMM_PAGING_QUEUE *v36; // r15
  _QWORD *v37; // r13
  int v38; // r9d
  int v39; // eax
  __int64 v40; // rax
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  _QWORD *v47; // r13
  _QWORD *v48; // r12
  __int64 v49; // rax
  _QWORD *v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  NTSTATUS v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  ULONG AllocationType[2]; // [rsp+20h] [rbp-E0h]
  __int64 Protect; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v67; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h]
  struct VIDMM_PAGING_QUEUE *v69; // [rsp+70h] [rbp-90h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 *v72; // [rsp+88h] [rbp-78h]
  unsigned __int64 v73; // [rsp+90h] [rbp-70h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v74; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v75[10]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF
  struct _KAPC_STATE v77; // [rsp+120h] [rbp+20h] BYREF
  struct _KAPC_STATE v78; // [rsp+150h] [rbp+50h] BYREF

  v5 = *a3;
  v72 = a4;
  v7 = *v5;
  v69 = a2;
  v8 = *(_DWORD *)(v7 + 92);
  v68 = v7;
  if ( (v8 & 2) == 0 )
  {
    v9 = *((_DWORD *)this + 1760);
LABEL_3:
    v10 = 0;
    goto LABEL_4;
  }
  if ( !a5 )
  {
    VidSchMarkDeviceAsError(a3[1][4], 20);
    return 3221225485LL;
  }
  v9 = *((_DWORD *)this + 1760);
  if ( (v9 & 0x10000) == 0 )
    goto LABEL_3;
  v10 = 1;
LABEL_4:
  v11 = (v9 & 8) != 0;
  if ( v10 )
  {
    VIDMM_GLOBAL::ForceDecommitOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  else if ( (v9 & 8) != 0 )
  {
    VIDMM_GLOBAL::ForceDiscardOffer(this, (struct VIDMM_ALLOC *)a3);
  }
  v12 = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 40488, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v38 = *((_DWORD *)this + 10126);
      if ( v38 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v13, (__int64)&EventBlockThread, v14, v38);
    }
    ExAcquirePushLockExclusiveEx((char *)this + 40488, 0LL);
  }
  *((_QWORD *)this + 5062) = KeGetCurrentThread();
  v15 = (_QWORD *)(v7 + 400);
  v16 = *(_QWORD *)(v7 + 400);
  if ( v16 )
  {
    if ( *(_QWORD **)(v16 + 8) != v15 || (v17 = *(_QWORD **)(v7 + 408), (_QWORD *)*v17 != v15) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    *v15 = 0LL;
  }
  if ( *(_QWORD *)(v7 + 416) )
  {
    VIDMM_GLOBAL::RemoveAllocationFromDecommitList(this, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    v12 = 1;
  }
  *((_QWORD *)this + 5062) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 40488, 0LL);
  KeLeaveCriticalRegion();
  v18 = *(_QWORD *)(v7 + 320);
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v18 + 8) == KeGetCurrentThread() )
  {
    v39 = *(_DWORD *)(v18 + 24);
    if ( v39 <= 0 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v40 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v40);
      v39 = *(_DWORD *)(v18 + 24);
    }
    v23 = v39 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v18 + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v41 = *(_DWORD *)(v18 + 28);
        if ( v41 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v22, (__int64)&EventBlockThread, v21, v41);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v18);
      ExAcquirePushLockExclusiveEx(v18 + 16, 0LL);
    }
    if ( *(_QWORD *)(v18 + 8) )
    {
      v42 = WdLogNewEntry5_WdAssertion(v22, v19);
      *(_QWORD *)(v42 + 24) = 430LL;
      WdLogEvent5_WdAssertion(v42);
    }
    if ( *(_DWORD *)(v18 + 24) )
    {
      v43 = WdLogNewEntry5_WdAssertion(v22, v19);
      *(_QWORD *)(v43 + 24) = 431LL;
      WdLogEvent5_WdAssertion(v43);
    }
    *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
    v23 = 1;
  }
  *(_DWORD *)(v18 + 24) = v23;
  v24 = *((unsigned __int16 *)a3[12] + 2);
  *((_WORD *)a3[12] + 2) = 0;
  v25 = (__int16)v24;
  if ( (_WORD)v24 )
  {
    v26 = 0;
    v27 = (*(_DWORD *)(v7 + 92) & 1) != 0;
    if ( v12 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL);
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(v24 + 32) + 352LL), -*(_QWORD *)(v7 + 8));
    }
    if ( v27 )
    {
LABEL_25:
      *(_DWORD *)(v7 + 92) &= ~2u;
      if ( !a5 )
      {
        *(_BYTE *)(v7 + 97) = 0;
LABEL_32:
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LOBYTE(Protect) = v25;
          LOBYTE(AllocationType[0]) = *(_BYTE *)(**a3 + 432);
          McTemplateK0pcc(**a3, &EventReclaimAllocation, v21, a3, *(_QWORD *)AllocationType, Protect);
        }
        if ( v11 || (_DWORD)v25 == 3 || (_DWORD)v25 == 2 && (*(_DWORD *)(v7 + 80) & 0x40) != 0 || !*(_DWORD *)(v7 + 128) )
        {
          v33 = (_QWORD *)(v7 + 296);
          v34 = *(_QWORD **)(v7 + 296);
          if ( v34 != (_QWORD *)(v7 + 296) )
          {
            do
            {
              v35 = (_QWORD *)*(v34 - 2);
              if ( v35 != v34 - 2 )
              {
                v36 = v69;
                do
                {
                  v37 = v35 - 5;
                  if ( (*(_DWORD *)(v35 - 1) & 1) == 0 )
                  {
                    v24 = (*((_BYTE *)v37 + 25) & 1) != 0;
                    if ( (unsigned int)v24 | *((_DWORD *)v37 + 38) )
                    {
                      memset(v75, 0, sizeof(v75));
                      LODWORD(v75[0]) = 210;
                      v75[2] = v35 - 5;
                      v26 = VIDMM_GLOBAL::QueueDeferredCommand(
                              this,
                              v36,
                              (struct _VIDMM_DEFERRED_COMMAND *)v75,
                              0,
                              &v67);
                      if ( (*((_DWORD *)v37 + 7) & 0x20) != 0 )
                      {
                        v37[35] = v67;
                        v37[32] = v36;
                      }
                    }
                  }
                  v35 = (_QWORD *)*v35;
                }
                while ( v35 != v34 - 2 );
                v33 = (_QWORD *)(v7 + 296);
              }
              v34 = (_QWORD *)*v34;
            }
            while ( v34 != v33 );
            v7 = v68;
          }
        }
        else if ( g_IsInternalReleaseOrDbg )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v24);
          v60[4] = v11;
          v60[3] = a3;
          v60[5] = v25;
          v24 = (*(_DWORD *)(v7 + 80) >> 6) & 1;
          v60[6] = v24;
        }
        v28 = this;
        goto LABEL_43;
      }
      if ( (_DWORD)v25 == 1 )
      {
        *a5 = D3DDDI_RECLAIM_RESULT_OK;
      }
      else
      {
        if ( (_DWORD)v25 == 3 )
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
        if ( v27
          && !*(_QWORD *)(v7 + 136)
          && *(_BYTE *)(v7 + 97)
          && !*(_BYTE *)(v7 + 98)
          && (*(_DWORD *)(v7 + 84) & 8) != 0 )
        {
          if ( !v11 )
          {
            v53 = *(_QWORD *)(v7 + 104);
            if ( v53 )
            {
              v24 = *(_QWORD *)(v53 + 8);
              if ( v24 )
              {
                KeStackAttachProcess(*(PRKPROCESS *)v24, &v78);
                v54 = *(_QWORD *)(v7 + 104);
                if ( (**(_DWORD **)(v7 + 504) & 0x20000000) != 0 )
                {
                  BaseAddress = *(PVOID *)(v54 + 16);
                  RegionSize = *(_QWORD *)(v7 + 8);
                  v55 = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddress,
                          0LL,
                          &RegionSize,
                          0x1000000u,
                          4u);
                }
                else
                {
                  v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v54 + 8) + 24LL) + 128LL))(
                          *(_QWORD *)(*(_QWORD *)(v54 + 8) + 24LL),
                          *(_QWORD *)(v54 + 24));
                }
                v26 = v55;
                KeUnstackDetachProcess(&v78);
                if ( v26 < 0 )
                {
                  *(_BYTE *)(v7 + 97) = 0;
                  v59 = WdLogNewEntry5_WdEvent(v57, v56);
                  *(_QWORD *)(v59 + 24) = v26;
                  WdLogEvent5_WdEvent(v59);
                  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v7 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt(0LL, &EventUnreset, v21, v7, *(_QWORD *)AllocationType, Protect, 0);
                  }
                  v26 = 0;
                }
                else
                {
                  *a5 = D3DDDI_RECLAIM_RESULT_OK;
                  *(_QWORD *)(v7 + 440) = 0LL;
                  v58 = WdLogNewEntry5_WdEvent(v57, v56);
                  *(_QWORD *)(v58 + 24) = v7;
                  WdLogEvent5_WdEvent(v58);
                  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Protect) = *(_QWORD *)(v7 + 8) >> 12;
                    AllocationType[0] = 0;
                    McTemplateK0pqqt(v24, &EventUnreset, v21, v7, *(_QWORD *)AllocationType, Protect, 1);
                  }
                }
                *(_DWORD *)(v7 + 84) &= ~8u;
              }
            }
            goto LABEL_32;
          }
LABEL_119:
          *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
          goto LABEL_32;
        }
      }
      if ( !v11 )
        goto LABEL_32;
      goto LABEL_119;
    }
    if ( v10
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 104) + 8LL) + 104LL) & 4) != 0
      || (v26 = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v7), v26 < 0) )
    {
      v28 = this;
    }
    else
    {
      v47 = (_QWORD *)(v7 + 296);
      v48 = *(_QWORD **)(v7 + 296);
      if ( v48 == (_QWORD *)(v7 + 296) )
      {
LABEL_97:
        *(_BYTE *)(v7 + 97) = 0;
        goto LABEL_25;
      }
      while ( 1 )
      {
        KeStackAttachProcess(*(PRKPROCESS *)*(v48 - 6), &ApcState);
        v26 = VIDMM_GLOBAL::CommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(v48 - 7), 0LL);
        KeUnstackDetachProcess(&ApcState);
        if ( v26 < 0 )
          break;
        v48 = (_QWORD *)*v48;
        if ( v48 == v47 )
          goto LABEL_97;
      }
      v49 = WdLogNewEntry5_WdAssertion(v24, v19);
      *(_QWORD *)(v49 + 24) = v48 - 7;
      WdLogEvent5_WdAssertion(v49);
      v50 = (_QWORD *)v48[1];
      if ( v50 != v47 )
      {
        do
        {
          KeStackAttachProcess(*(PRKPROCESS *)*(v50 - 6), &v77);
          VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_LOCAL_ALLOC *)(v50 - 7), 1);
          KeUnstackDetachProcess(&v77);
          v50 = (_QWORD *)v50[1];
        }
        while ( v50 != v47 );
        v7 = v68;
      }
      v28 = this;
      VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v7, 0);
    }
    v26 = 0;
    v51 = *((unsigned __int16 *)a3[12] + 2);
    *((_WORD *)a3[12] + 2) = 3;
    *a5 = D3DDDI_RECLAIM_RESULT_NOT_COMMITTED;
    _InterlockedIncrement(&dword_1C00476A0);
    v52 = WdLogNewEntry5_WdLowResource(v51);
    *(_QWORD *)(v52 + 24) = v7;
    WdLogEvent5_WdLowResource(v52);
LABEL_43:
    v29 = *(_QWORD *)(v7 + 320);
    if ( *(struct _KTHREAD **)(v29 + 8) != KeGetCurrentThread() )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v19, v21);
      v61[3] = 275LL;
      v61[4] = 4LL;
      v61[5] = v29;
      v61[6] = 0LL;
      v61[7] = 0LL;
      WdLogEvent5_WdCriticalError(v61);
    }
    v30 = *(_DWORD *)(v29 + 24);
    if ( v30 <= 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v24, v19);
      *(_QWORD *)(v62 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v62);
      v30 = *(_DWORD *)(v29 + 24);
    }
    v31 = v30 - 1;
    *(_DWORD *)(v29 + 24) = v31;
    if ( !v31 )
    {
      *(_QWORD *)(v29 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v29 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( v26 == 259 )
    {
      if ( v72 )
      {
        *v72 = v67;
      }
      else
      {
        v74 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)v69 + 11);
        v73 = v67;
        VIDMM_GLOBAL::WaitForFences(v28, &v74, &v73, 1u, 0LL);
        return 0;
      }
    }
    return (unsigned int)v26;
  }
  v44 = WdLogNewEntry5_WdAssertion(v24, v19);
  *(_QWORD *)(v44 + 24) = a3;
  WdLogEvent5_WdAssertion(v44);
  if ( a5 )
    *a5 = D3DDDI_RECLAIM_RESULT_DISCARDED;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 320), v45, v46);
  return DxgkVidMmAllowFailOnOfferReclaimErrors() != 0 ? 0xC000000D : 0;
}
