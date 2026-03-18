/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C006AE50
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00053C0 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C005E500 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0060EC0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00649C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006F7E0 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, void **a4)
{
  int v4; // r12d
  __int64 v5; // rbx
  void **v6; // r15
  __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  VIDMM_RECYCLE_MULTIRANGE *v26; // rdi
  __int64 v27; // rcx
  void (*v28)(VIDMM_RECYCLE_HEAP_MGR *__hidden, void *); // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  DXGFASTMUTEX *v32; // rdi
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  int v36; // eax
  int v37; // eax
  __int64 *v38; // rdx
  __int64 v39; // r9
  int v40; // r11d
  __int64 v41; // r8
  int v42; // r10d
  char v43; // al
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rax
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  int v77; // [rsp+40h] [rbp-98h] BYREF
  char v78; // [rsp+44h] [rbp-94h]
  DXGFASTMUTEX *v79; // [rsp+48h] [rbp-90h] BYREF
  char v80; // [rsp+50h] [rbp-88h]
  _QWORD v81[15]; // [rsp+60h] [rbp-78h] BYREF

  v4 = 0;
  v5 = (unsigned int)a3;
  *a4 = 0LL;
  v6 = a4;
  if ( (_DWORD)a3 )
  {
    v46 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v46 + 24) = v5;
    *(_QWORD *)(v46 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v46);
    return 3221225485LL;
  }
  v9 = *a2;
  v10 = **a2;
  v11 = **(unsigned int **)(v10 + 504);
  if ( (v11 & 1) == 0 )
  {
    v47 = WdLogNewEntry5_WdAssertion(v11, a2);
    *(_QWORD *)(v47 + 24) = 21491LL;
    WdLogEvent5_WdAssertion(v47);
    return 3221225485LL;
  }
  v12 = *((unsigned __int16 *)a2[12] + 2);
  if ( (_WORD)v12 )
  {
    v48 = (unsigned __int16)v12;
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v53 = WdLogNewEntry5_WdAssertion(v50, v49);
      *(_QWORD *)(v53 + 24) = a2;
      *(_QWORD *)(v53 + 32) = v48;
      WdLogEvent5_WdAssertion(v53);
      return 3221225485LL;
    }
    v54 = WdLogNewEntry5_WdError(v50, v49, v51, v52);
    *(_QWORD *)(v54 + 24) = a2;
    *(_QWORD *)(v54 + 32) = v48;
    WdLogEvent5_WdError(v54);
    v11 = **(unsigned int **)(v10 + 504);
  }
  if ( (v11 & 8) == 0 )
  {
    v13 = *(_QWORD *)v9[1];
    if ( v13 != PsGetCurrentProcess(v11, v12, a3, a4) )
    {
      v55 = WdLogNewEntry5_WdAssertion(v14, v12);
      *(_QWORD *)(v55 + 24) = 21525LL;
      WdLogEvent5_WdAssertion(v55);
      return 3221225485LL;
    }
  }
  v15 = **(_DWORD **)(v10 + 504);
  if ( (v15 & 0x20000000) != 0 && (v15 & 0x40000000) == 0 )
  {
    v56 = *((_QWORD *)this + 3);
    v57 = *(_DWORD *)(v56 + 300);
    if ( (v57 & 0x10) == 0 && (v57 & 8) == 0 && (*(_DWORD *)(v56 + 1836) & 0x80u) == 0 && v9 != *(__int64 **)(v10 + 104) )
    {
      v58 = WdLogNewEntry5_WdAssertion(v56, v12);
      *(_QWORD *)(v58 + 24) = 21541LL;
      WdLogEvent5_WdAssertion(v58);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10 + 480, 0LL);
  if ( *(_DWORD *)(v10 + 344) && (*(_DWORD *)(v10 + 84) & 0x20) == 0 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v59 + 24) = 21552LL;
LABEL_74:
    WdLogEvent5_WdAssertion(v59);
    ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v9 + 19) )
  {
    v18 = *(unsigned int *)(v10 + 76);
    if ( (*(_DWORD *)(v10 + 80) & 0x80u) == 0 )
    {
      if ( (v18 & 0x80u) == 0LL )
      {
        v59 = WdLogNewEntry5_WdAssertion(v18, v16);
        *(_QWORD *)(v59 + 24) = 21603LL;
        goto LABEL_74;
      }
    }
    else
    {
      LOBYTE(v16) = (v18 & 0x40) != 0;
      if ( (**(_DWORD **)(v10 + 504) & 4) != 0 )
      {
        if ( (v18 & 0x40) == 0 )
        {
          v60 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
          if ( (v60 & 8) == 0 )
          {
            v59 = WdLogNewEntry5_WdAssertion(v60, v16);
            *(_QWORD *)(v59 + 24) = 21578LL;
            goto LABEL_74;
          }
        }
      }
      else if ( ((*((_BYTE *)a2 + 25) & 1) != 0) | *((_DWORD *)a2 + 38) )
      {
        if ( (*(_DWORD *)(v10 + 76) & 0xD0000) == 0 )
        {
          v45 = *(unsigned __int8 *)(1560LL * (*(_DWORD *)(v10 + 76) & 0x3F) + *((_QWORD *)this + 5090) + 437);
          if ( (v45 & 0x40) != 0 && !(_BYTE)v16 && (*(_DWORD *)(v10 + 76) & 0x100) == 0 )
          {
            v59 = WdLogNewEntry5_WdAssertion(v45, v16);
            *(_QWORD *)(v59 + 24) = 21588LL;
            goto LABEL_74;
          }
        }
      }
    }
  }
  if ( v9[3] )
  {
    v19 = *(_QWORD *)(v10 + 320);
    KeEnterCriticalRegion();
    if ( *(struct _KTHREAD **)(v19 + 8) == KeGetCurrentThread() )
    {
      v61 = *(_DWORD *)(v19 + 24);
      if ( v61 <= 0 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v21, v20);
        *(_QWORD *)(v62 + 24) = 406LL;
        WdLogEvent5_WdAssertion(v62);
        v61 = *(_DWORD *)(v19 + 24);
      }
      v25 = v61 + 1;
    }
    else
    {
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v19 + 16, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v63 = *(_DWORD *)(v19 + 28);
          if ( v63 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v23, (__int64)&EventBlockThread, v24, v63);
        }
        _InterlockedIncrement64((volatile signed __int64 *)v19);
        ExAcquirePushLockExclusiveEx(v19 + 16, 0LL);
      }
      if ( *(_QWORD *)(v19 + 8) )
      {
        v64 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v64 + 24) = 430LL;
        WdLogEvent5_WdAssertion(v64);
      }
      if ( *(_DWORD *)(v19 + 24) )
      {
        v65 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v65 + 24) = 431LL;
        WdLogEvent5_WdAssertion(v65);
      }
      v6 = a4;
      *(_QWORD *)(v19 + 8) = KeGetCurrentThread();
      v25 = 1;
    }
    *(_DWORD *)(v19 + 24) = v25;
    v26 = (VIDMM_RECYCLE_MULTIRANGE *)v9[3];
    v27 = *(_QWORD *)(v9[1] + 24);
    v28 = *(void (**)(VIDMM_RECYCLE_HEAP_MGR *__hidden, void *))(*(_QWORD *)v27 + 152LL);
    if ( v28 == VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded )
    {
      v80 = 0;
      v79 = (DXGFASTMUTEX *)(v27 + 1328);
      if ( v27 == -1328 )
      {
        v66 = WdLogNewEntry5_WdAssertion(-1328LL, VIDMM_RECYCLE_HEAP_MGR::ZeroIfNeeded);
        *(_QWORD *)(v66 + 24) = 508LL;
        WdLogEvent5_WdAssertion(v66);
        if ( v80 )
        {
          v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68, v67, v69);
          v70[5] = &v79;
          v70[3] = 275LL;
          v70[4] = 4LL;
          v70[6] = 0LL;
          v70[7] = 0LL;
          WdLogEvent5_WdCriticalError(v70);
        }
      }
      DXGFASTMUTEX::Acquire(v79);
      v80 = 1;
      VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded(v26);
      if ( v80 )
      {
        v32 = v79;
        v80 = 0;
        if ( *((struct _KTHREAD **)v79 + 1) != KeGetCurrentThread() )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
          v71[3] = 275LL;
          v71[4] = 4LL;
          v71[5] = v32;
          v71[6] = 0LL;
          v71[7] = 0LL;
          WdLogEvent5_WdCriticalError(v71);
        }
        v33 = *((_DWORD *)v32 + 6);
        if ( v33 <= 0 )
        {
          v72 = WdLogNewEntry5_WdAssertion(v30, v29);
          *(_QWORD *)(v72 + 24) = 450LL;
          WdLogEvent5_WdAssertion(v72);
          v33 = *((_DWORD *)v32 + 6);
        }
        v34 = v33 - 1;
        *((_DWORD *)v32 + 6) = v34;
        if ( !v34 )
        {
          *((_QWORD *)v32 + 1) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v32 + 16, 0LL);
        }
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      ((void (__fastcall *)(__int64, __int64))v28)(v27, v9[3]);
    }
    v35 = *(_QWORD *)(v10 + 320);
    if ( *(struct _KTHREAD **)(v35 + 8) != KeGetCurrentThread() )
    {
      v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
      v73[3] = 275LL;
      v73[4] = 4LL;
      v73[5] = v35;
      v73[6] = 0LL;
      v73[7] = 0LL;
      WdLogEvent5_WdCriticalError(v73);
    }
    v36 = *(_DWORD *)(v35 + 24);
    if ( v36 <= 0 )
    {
      v74 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v74 + 24) = 450LL;
      WdLogEvent5_WdAssertion(v74);
      v36 = *(_DWORD *)(v35 + 24);
    }
    v37 = v36 - 1;
    *(_DWORD *)(v35 + 24) = v37;
    if ( !v37 )
    {
      *(_QWORD *)(v35 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v35 + 16, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v38 = *a2;
  v77 = 0;
  v78 = 0;
  v39 = *v38;
  if ( *((_DWORD *)v38 + 19) )
    goto LABEL_42;
  v40 = *(_DWORD *)(v39 + 80);
  v41 = *(_QWORD *)(v39 + 136);
  v77 = 1;
  if ( (v40 & 0x80u) == 0 )
  {
    v77 = 5;
    goto LABEL_42;
  }
  if ( (*((_DWORD *)this + 1760) & 0x20) != 0 )
  {
    if ( v41 )
      goto LABEL_88;
    goto LABEL_42;
  }
  if ( !v41 || (v42 = *(_DWORD *)(v41 + 80), (v42 & 0x1001) != 0) )
  {
LABEL_42:
    v4 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v77, (struct VIDMM_ALLOC *)a2, v6, 0, 0LL, 0LL);
    v43 = v78;
    goto LABEL_43;
  }
  if ( (**(_DWORD **)(v39 + 504) & 4) != 0 && !*(_BYTE *)(v41 + 474) || (v40 & 0x8000) != 0 )
    goto LABEL_88;
  if ( (v42 & 4) != 0 )
  {
    if ( (v38[4] & 1) != 0 )
      goto LABEL_42;
    v77 = 3;
    if ( !*(_QWORD *)(v39 + 264) )
      goto LABEL_42;
  }
  else if ( (v42 & 0x2000) != 0 )
  {
    v76 = *(_QWORD *)(v39 + 104);
    if ( v76 )
    {
      if ( (*(_BYTE *)(v76 + 32) & 1) != 0 )
      {
        v77 = 0;
        goto LABEL_42;
      }
    }
  }
  v43 = 1;
LABEL_43:
  if ( v43 )
  {
LABEL_88:
    ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
    KeLeaveCriticalRegion();
    memset(v81, 0, 0x50uLL);
    v75 = *(_DWORD *)(v10 + 76) & 0x3F;
    LODWORD(v81[0]) = 208;
    v81[2] = a2;
    v81[4] = v6;
    LODWORD(v81[5]) = 0;
    v4 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)(a2[1][9] + 160 * v75),
           (struct _VIDMM_DEFERRED_COMMAND *)v81,
           1,
           0LL);
    goto LABEL_45;
  }
  ExReleasePushLockExclusiveEx(v10 + 480, 0LL);
  KeLeaveCriticalRegion();
LABEL_45:
  if ( v4 >= 0 && (*((_BYTE *)this + 41448) & 0x10) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v10 + 76) & 0x3F) + 746,
      (const unsigned __int64 *)(v10 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v10 + 76) & 0x3F) + 682);
  return (unsigned int)v4;
}
