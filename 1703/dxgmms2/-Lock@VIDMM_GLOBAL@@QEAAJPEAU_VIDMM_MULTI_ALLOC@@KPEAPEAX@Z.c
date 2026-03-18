/*
 * XREFs of ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0063270
 * Callers:
 *     ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0002B70 (-VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0056D00 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00594A0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C005CFE0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Lock(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3, void **a4)
{
  __int64 v4; // rbx
  __int64 *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int16 v11; // di
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  _QWORD v43[15]; // [rsp+40h] [rbp-78h] BYREF
  int v44; // [rsp+D8h] [rbp+20h] BYREF
  char v45; // [rsp+DCh] [rbp+24h]

  v4 = a3;
  *a4 = 0LL;
  if ( a3 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v26 + 24) = v4;
    *(_QWORD *)(v26 + 32) = 0LL;
    WdLogEvent5_WdAssertion(v26);
    return 3221225485LL;
  }
  v8 = *a2;
  v9 = **a2;
  v10 = **(unsigned int **)(v9 + 520);
  if ( (v10 & 1) == 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v27 + 24) = 20616LL;
    WdLogEvent5_WdAssertion(v27);
    return 3221225485LL;
  }
  v11 = *((_WORD *)a2[12] + 2);
  if ( v11 )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v32 = WdLogNewEntry5_WdAssertion(v29, v28);
      *(_QWORD *)(v32 + 32) = v11;
      *(_QWORD *)(v32 + 24) = a2;
      WdLogEvent5_WdAssertion(v32);
      return 3221225485LL;
    }
    v33 = WdLogNewEntry5_WdError(v29, v28, v30, v31);
    *(_QWORD *)(v33 + 32) = v11;
    *(_QWORD *)(v33 + 24) = a2;
    WdLogEvent5_WdError(v33);
  }
  v12 = **(unsigned int **)(v9 + 520);
  if ( (v12 & 8) == 0 )
  {
    v13 = (_QWORD *)v8[1];
    if ( *v13 != PsGetCurrentProcess(v12) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v14, a2);
      *(_QWORD *)(v34 + 24) = 20650LL;
      WdLogEvent5_WdAssertion(v34);
      return 3221225485LL;
    }
  }
  if ( (**(_DWORD **)(v9 + 520) & 0x60000000) == 0x20000000 )
  {
    v35 = *((_QWORD *)this + 3);
    v36 = *(_DWORD *)(v35 + 300);
    if ( (v36 & 0x10) == 0 && (v36 & 8) == 0 && (*(_DWORD *)(v35 + 1676) & 0x80u) == 0 && v8 != *(__int64 **)(v9 + 104) )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35, a2);
      *(_QWORD *)(v37 + 24) = 20666LL;
      WdLogEvent5_WdAssertion(v37);
      return 3221225485LL;
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v9 + 512, 0LL);
  if ( *(_DWORD *)(v9 + 344) && (*(_DWORD *)(v9 + 84) & 0x20) == 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v38 + 24) = 20677LL;
LABEL_47:
    WdLogEvent5_WdAssertion(v38);
    ExReleasePushLockExclusiveEx(v9 + 512, 0LL);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  if ( !*((_DWORD *)v8 + 19) )
  {
    v17 = *(_DWORD *)(v9 + 76);
    if ( (*(_DWORD *)(v9 + 80) & 0x80u) == 0 )
    {
      if ( (v17 & 0x80u) == 0 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v38 + 24) = 20728LL;
        goto LABEL_47;
      }
    }
    else if ( (**(_DWORD **)(v9 + 520) & 4) != 0 )
    {
      if ( (v17 & 0x40) == 0 )
      {
        v39 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
        if ( (v39 & 8) == 0 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v39, v15);
          *(_QWORD *)(v38 + 24) = 20703LL;
          goto LABEL_47;
        }
      }
    }
    else if ( ((*((_BYTE *)a2 + 25) & 1) != 0) | *((_DWORD *)a2 + 38) )
    {
      v18 = *(unsigned int *)(v9 + 76);
      if ( (v18 & 0xD0000) == 0 )
      {
        v40 = *(unsigned __int8 *)(280 * (v18 & 0x3F) + *((_QWORD *)this + 5150) + 274);
        if ( (_BYTE)v40 )
        {
          if ( (v17 & 0x40) == 0 && (v18 & 0x100) == 0 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v40, v18);
            *(_QWORD *)(v38 + 24) = 20713LL;
            goto LABEL_47;
          }
        }
      }
    }
  }
  v19 = *a2;
  v44 = 0;
  v45 = 0;
  v20 = *v19;
  if ( !*((_DWORD *)v19 + 19) )
  {
    v21 = *(_DWORD *)(v20 + 80);
    v22 = *(_QWORD *)(v20 + 136);
    v44 = 1;
    if ( (v21 & 0x80u) == 0 )
    {
      v44 = 5;
    }
    else if ( (*((_DWORD *)this + 1616) & 0x20) != 0 )
    {
      if ( v22 )
        goto LABEL_49;
    }
    else if ( v22 )
    {
      v23 = *(_DWORD *)(v22 + 80);
      if ( (v23 & 0x1001) == 0 )
      {
        if ( (**(_DWORD **)(v20 + 520) & 4) != 0 && (*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 8) == 0 )
          goto LABEL_49;
        if ( (v23 & 4) != 0 )
        {
          if ( (v19[4] & 1) == 0 )
          {
            v44 = 3;
            if ( *(_QWORD *)(v20 + 264) )
              goto LABEL_49;
          }
        }
        else
        {
          if ( (v23 & 0x2000) == 0 )
            goto LABEL_49;
          v42 = *(_QWORD *)(v20 + 104);
          if ( !v42 || (*(_BYTE *)(v42 + 32) & 1) == 0 )
            goto LABEL_49;
          v44 = 0;
        }
      }
    }
  }
  v24 = VIDMM_GLOBAL::LockInternal(this, (struct VIDMM_LOCK2_DATA *)&v44, (struct VIDMM_ALLOC *)a2, a4, 0, 0LL, 0LL);
  if ( v45 )
  {
LABEL_49:
    ExReleasePushLockExclusiveEx(v9 + 512, 0LL);
    KeLeaveCriticalRegion();
    memset(v43, 0, 0x50uLL);
    v41 = *(_DWORD *)(v9 + 76) & 0x3F;
    LODWORD(v43[0]) = 208;
    v43[2] = a2;
    v43[4] = a4;
    LODWORD(v43[5]) = 0;
    v24 = VIDMM_GLOBAL::QueueDeferredCommand(
            this,
            (struct VIDMM_PAGING_QUEUE *)(a2[1][9] + 160 * v41),
            (struct _VIDMM_DEFERRED_COMMAND *)v43,
            1,
            0LL);
    goto LABEL_20;
  }
  ExReleasePushLockExclusiveEx(v9 + 512, 0LL);
  KeLeaveCriticalRegion();
LABEL_20:
  if ( v24 >= 0 && (*((_BYTE *)this + 40872) & 8) == 0 )
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this,
      (struct _VIDSCH_SYNC_OBJECT **)this + (*(_DWORD *)(v9 + 76) & 0x3F) + 738,
      (const unsigned __int64 *)(v9 + 176),
      1u,
      (const unsigned __int64 *)this + (*(_DWORD *)(v9 + 76) & 0x3F) + 674);
  return (unsigned int)v24;
}
