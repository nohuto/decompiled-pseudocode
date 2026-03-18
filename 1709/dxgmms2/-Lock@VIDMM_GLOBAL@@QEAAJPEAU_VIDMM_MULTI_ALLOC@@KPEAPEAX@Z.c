/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00665D0
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00020E0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0059AE0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C005C730 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006C234 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C006CEB8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, void **a4)
{
  __int64 v4; // rbx
  void **v5; // r12
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int16 v11; // di
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  VIDMM_RECYCLE_MULTIRANGE *v26; // rdi
  __int64 v27; // rcx
  void (*v28)(VIDMM_RECYCLE_HEAP_MGR *__hidden, void *); // rax
  bool v29; // zf
  DXGFASTMUTEX *v30; // rcx
  __int64 v31; // rdx
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  __int64 v33; // r8
  struct _KTHREAD **v34; // rdi
  __int64 v35; // rdi
  __int64 *v36; // rdx
  __int64 v37; // r8
  int v38; // r10d
  __int64 v39; // rcx
  int v40; // r9d
  int v41; // edi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // [rsp+48h] [rbp-39h] BYREF
  char v74; // [rsp+4Ch] [rbp-35h]
  struct _KTHREAD **v75; // [rsp+50h] [rbp-31h] BYREF
  char v76; // [rsp+58h] [rbp-29h]
  _QWORD v77[14]; // [rsp+68h] [rbp-19h] BYREF

  v4 = (unsigned int)a3;
  *a4 = 0LL;
  v5 = a4;
  if ( (_DWORD)a3 )
  {
    v43 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v43 + 24) = v4;
    *(_QWORD *)(v43 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v43);
    return 3221225485LL;
  }
  v8 = *a2;
  v9 = **a2;
  v10 = **(unsigned int **)(v9 + 504);
  if ( (v10 & 1) == 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v44 + 24) = 21159LL;
    WdLogEvent5_WdAssertion(v44);
    return 3221225485LL;
  }
  v11 = *((_WORD *)a2[12] + 2);
  if ( v11 )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v49 = WdLogNewEntry5_WdAssertion(v46, v45);
      *(_QWORD *)(v49 + 32) = v11;
      *(_QWORD *)(v49 + 24) = a2;
      WdLogEvent5_WdAssertion(v49);
      return 3221225485LL;
    }
    v50 = WdLogNewEntry5_WdError(v46, v45, v47, v48);
    *(_QWORD *)(v50 + 32) = v11;
    *(_QWORD *)(v50 + 24) = a2;
    WdLogEvent5_WdError(v50);
  }
  v12 = **(unsigned int **)(v9 + 504);
  if ( (v12 & 8) == 0 )
  {
    v13 = (_QWORD *)v8[1];
    if ( *v13 != PsGetCurrentProcess(v12, a2, a3, a4) )
    {
      v51 = WdLogNewEntry5_WdAssertion(v14, a2);
      *(_QWORD *)(v51 + 24) = 21193LL;
      WdLogEvent5_WdAssertion(v51);
      return 3221225485LL;
    }
  }
  v15 = **(_DWORD **)(v9 + 504);
  if ( (v15 & 0x20000000) != 0 && (v15 & 0x40000000) == 0 )
  {
    v52 = *((_QWORD *)this + 3);
    v53 = *(_DWORD *)(v52 + 300);
    if ( (v53 & 0x10) == 0 && (v53 & 8) == 0 && (*(_DWORD *)(v52 + 1700) & 0x80u) == 0 && v8 != *(__int64 **)(v9 + 104) )
    {
      v54 = WdLogNewEntry5_WdAssertion(v52, a2);
      *(_QWORD *)(v54 + 24) = 21209LL;
      WdLogEvent5_WdAssertion(v54);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 480, 0LL);
  if ( *(_DWORD *)(v9 + 344) && (*(_DWORD *)(v9 + 84) & 0x20) == 0 )
  {
    v55 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v55 + 24) = 21220LL;
LABEL_78:
    WdLogEvent5_WdAssertion(v55);
    ExReleasePushLockExclusiveEx(v9 + 480, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v8 + 19) )
  {
    v18 = *(_DWORD *)(v9 + 76);
    if ( (*(_DWORD *)(v9 + 80) & 0x80u) == 0 )
    {
      if ( (v18 & 0x80u) == 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v17, v16);
        *(_QWORD *)(v55 + 24) = 21271LL;
        goto LABEL_78;
      }
    }
    else if ( (**(_DWORD **)(v9 + 504) & 4) != 0 )
    {
      if ( (v18 & 0x40) == 0 )
      {
        v56 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
        if ( (v56 & 8) == 0 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v56, v16);
          *(_QWORD *)(v55 + 24) = 21246LL;
          goto LABEL_78;
        }
      }
    }
    else if ( ((*((_BYTE *)a2 + 25) & 1) != 0) | *((_DWORD *)a2 + 38) )
    {
      v19 = *(unsigned int *)(v9 + 76);
      if ( (v19 & 0xD0000) == 0 )
      {
        v57 = *(unsigned __int8 *)(1552LL * (*(_DWORD *)(v9 + 76) & 0x3F) + *((_QWORD *)this + 5021) + 437);
        if ( (v57 & 0x40) != 0 && (v18 & 0x40) == 0 && (v19 & 0x100) == 0 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v57, v19);
          *(_QWORD *)(v55 + 24) = 21256LL;
          goto LABEL_78;
        }
      }
    }
  }
  if ( v8[3] )
  {
    v20 = *(_QWORD *)(v9 + 320);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v20 + 8) == KeGetCurrentThread() )
    {
      if ( *(int *)(v20 + 24) <= 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v22, v21);
        *(_QWORD *)(v58 + 24) = 362LL;
        WdLogEvent5_WdAssertion(v58);
      }
      ++*(_DWORD *)(v20 + 24);
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v59 = *(_DWORD *)(v20 + 28);
          if ( v59 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v24, (__int64)&EventBlockThread, v25, v59);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v20);
        ExAcquirePushLockExclusiveEx(v20 + 16, 0LL);
      }
      if ( *(_QWORD *)(v20 + 8) )
      {
        v60 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v60 + 24) = 386LL;
        WdLogEvent5_WdAssertion(v60);
      }
      if ( *(_DWORD *)(v20 + 24) )
      {
        v61 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v61 + 24) = 387LL;
        WdLogEvent5_WdAssertion(v61);
      }
      v5 = a4;
      *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
      *(_DWORD *)(v20 + 24) = 1;
    }
    v26 = (VIDMM_RECYCLE_MULTIRANGE *)v8[3];
    v27 = *(_QWORD *)(v8[1] + 24);
    v28 = *(void (**)(VIDMM_RECYCLE_HEAP_MGR *__hidden, void *))(*(_QWORD *)v27 + 152LL);
    if ( v28 == VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded )
    {
      v29 = v27 == -1184;
      v30 = (DXGFASTMUTEX *)(v27 + 1184);
      v76 = 0;
      v75 = (struct _KTHREAD **)v30;
      if ( v29 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v30, VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded);
        *(_QWORD *)(v62 + 24) = 464LL;
        WdLogEvent5_WdAssertion(v62);
        if ( v76 )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v64, v63, v65);
          v66[5] = &v75;
          v66[3] = 275LL;
          v66[4] = 4LL;
          v66[6] = 0LL;
          v66[7] = 0LL;
          WdLogEvent5_WdCriticalError(v66);
        }
        v30 = (DXGFASTMUTEX *)v75;
      }
      DXGFASTMUTEX::Acquire(v30);
      v76 = 1;
      if ( !dword_1C0040370 )
        goto LABEL_27;
      for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v26 + 8);
            (*((_BYTE *)i + 84) & 2) == 0;
            i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
      {
        if ( i == *((struct VIDMM_RECYCLE_RANGE **)v26 + 9) )
          goto LABEL_27;
      }
      VIDMM_RECYCLE_MULTIRANGE::ZeroMultirangeMemory(v26);
      if ( v76 )
      {
LABEL_27:
        v34 = v75;
        v76 = 0;
        if ( v75[1] != KeGetCurrentThread() )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v31, v33);
          v67[3] = 275LL;
          v67[4] = 4LL;
          v67[5] = v34;
          v67[6] = 0LL;
          v67[7] = 0LL;
          WdLogEvent5_WdCriticalError(v67);
        }
        if ( *((int *)v34 + 6) <= 0 )
        {
          v68 = WdLogNewEntry5_WdAssertion(i, v31);
          *(_QWORD *)(v68 + 24) = 406LL;
          WdLogEvent5_WdAssertion(v68);
        }
        v29 = (*((_DWORD *)v34 + 6))-- == 1;
        if ( v29 )
        {
          v34[1] = 0LL;
          ExReleasePushLockExclusiveEx(v34 + 2, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64))v28)(v27, v8[3]);
    }
    v35 = *(_QWORD *)(v9 + 320);
    if ( *(struct _KTHREAD **)(v35 + 8) != KeGetCurrentThread() )
    {
      v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v31, v33);
      v69[3] = 275LL;
      v69[4] = 4LL;
      v69[5] = v35;
      v69[6] = 0LL;
      v69[7] = 0LL;
      WdLogEvent5_WdCriticalError(v69);
    }
    if ( *(int *)(v35 + 24) <= 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(i, v31);
      *(_QWORD *)(v70 + 24) = 406LL;
      WdLogEvent5_WdAssertion(v70);
    }
    v29 = (*(_DWORD *)(v35 + 24))-- == 1;
    if ( v29 )
    {
      *(_QWORD *)(v35 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v35 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v36 = *a2;
  v73 = 0;
  v74 = 0;
  v37 = *v36;
  if ( !*((_DWORD *)v36 + 19) )
  {
    v38 = *(_DWORD *)(v37 + 80);
    v39 = *(_QWORD *)(v37 + 136);
    v73 = 1;
    if ( (v38 & 0x80u) == 0 )
    {
      v73 = 5;
    }
    else if ( (*((_DWORD *)this + 1616) & 0x20) != 0 )
    {
      if ( v39 )
        goto LABEL_94;
    }
    else if ( v39 )
    {
      v40 = *(_DWORD *)(v39 + 80);
      if ( (v40 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v37 + 504) & 4) != 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 8) == 0
          || (v38 & 0x4000) != 0 )
        {
          goto LABEL_94;
        }
        if ( (v40 & 4) != 0 )
        {
          if ( (v36[4] & 1) == 0 )
          {
            v73 = 3;
            if ( *(_QWORD *)(v37 + 264) )
              goto LABEL_94;
          }
        }
        else
        {
          if ( (v40 & 0x2000) == 0 )
            goto LABEL_94;
          v72 = *(_QWORD *)(v37 + 104);
          if ( !v72 || (*(_BYTE *)(v72 + 32) & 1) == 0 )
            goto LABEL_94;
          v73 = 0;
        }
      }
    }
  }
  v41 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v73, (struct VIDMM_ALLOC *)a2, v5, 0, 0LL, 0LL);
  if ( v74 )
  {
LABEL_94:
    ExReleasePushLockExclusiveEx(v9 + 480, 0LL);
    KeLeaveCriticalRegion();
    memset(v77, 0, 0x50uLL);
    v71 = *(_DWORD *)(v9 + 76) & 0x3F;
    LODWORD(v77[0]) = 208;
    v77[2] = a2;
    v77[4] = v5;
    LODWORD(v77[5]) = 0;
    v41 = VIDMM_GLOBAL::QueueDeferredCommand(
            this,
            (struct VIDMM_PAGING_QUEUE *)(a2[1][9] + 160 * v71),
            (struct _VIDMM_DEFERRED_COMMAND *)v77,
            1,
            0LL);
    goto LABEL_48;
  }
  ExReleasePushLockExclusiveEx(v9 + 480, 0LL);
  KeLeaveCriticalRegion();
LABEL_48:
  if ( v41 >= 0 && (*((_BYTE *)this + 40872) & 8) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v9 + 76) & 0x3F) + 738,
      (const unsigned __int64 *)(v9 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v9 + 76) & 0x3F) + 674);
  return (unsigned int)v41;
}
