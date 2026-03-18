/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C00644AC
 * Callers:
 *     ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C00133D0 (-VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXG.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0001EA0 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq @ 0x1C0021A3C (McTemplateK0ppqq.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005C85C (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C009B6F0 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C009D2F0 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::BeginCPUAccess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _VIDMM_REGION *a6,
        VIDMM_GLOBAL **a7,
        void **a8)
{
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v11; // rdi
  _QWORD *v12; // r13
  __int64 v13; // rbp
  void **v14; // rbx
  unsigned int v15; // r15d
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  VIDMM_GLOBAL *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  void *v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  char v26; // bl
  __int64 v28; // rax
  VIDMM_GLOBAL *v29; // rcx
  char *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int8 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int8 v53; // [rsp+20h] [rbp-58h]
  unsigned int v55; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = (unsigned int)a4;
  v55 = 0;
  LODWORD(v11) = 0;
  if ( *(_WORD *)(*((_QWORD *)a2 + 12) + 4LL) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v35 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v35 + 24) = a2;
      *(_QWORD *)(v35 + 32) = 2LL;
      goto LABEL_45;
    }
    v37 = WdLogNewEntry5_WdError(v32, v31, v33, v34);
    *(_QWORD *)(v37 + 24) = a2;
    *(_QWORD *)(v37 + 32) = 2LL;
    WdLogEvent5_WdError(v37);
  }
  v12 = *(_QWORD **)a2;
  v13 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v13 + 84) & 0x20) != 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v38 + 24) = 7314LL;
    WdLogEvent5_WdAssertion(v38);
    return (unsigned int)v11;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v39 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v39 + 24) = a2;
    *(_QWORD *)(v39 + 32) = v9;
  }
  v14 = a8;
  v15 = v9 & 0xFFFFFFA7;
  *a8 = 0LL;
  if ( (v15 & 0xFFFFFC58) != 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v35 + 24) = v15;
    goto LABEL_45;
  }
  v16 = **(unsigned int **)(v13 + 504);
  if ( (v16 & 1) == 0 )
  {
    v36 = WdLogNewEntry5_WdError(v16, a2, a3, a4);
    *(_QWORD *)(v36 + 24) = 7354LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_47;
  }
  if ( (v16 & 8) == 0 )
  {
    v17 = (_QWORD *)v12[1];
    if ( *v17 == PsGetCurrentProcess(v16, a2, a3, a4) )
    {
      v14 = a8;
      goto LABEL_10;
    }
    v35 = WdLogNewEntry5_WdAssertion(v16, v18);
    *(_QWORD *)(v35 + 24) = 7368LL;
LABEL_45:
    WdLogEvent5_WdAssertion(v35);
LABEL_47:
    LODWORD(v11) = -1073741811;
    return (unsigned int)v11;
  }
LABEL_10:
  v19 = this;
  v20 = **(unsigned int **)(v13 + 504);
  if ( (**(_DWORD **)(v13 + 504) & 0x60000000) == 0x20000000 && v12 != *(_QWORD **)(v13 + 104) )
  {
    v16 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
    if ( (v16 & 0x10) == 0 && (v16 & 8) == 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v16, this);
      *(_QWORD *)(v35 + 24) = 7383LL;
      goto LABEL_45;
    }
  }
  if ( (v15 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 76) & 0x40) == 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v16, this);
      *(_QWORD *)(v35 + 24) = 7409LL;
      goto LABEL_45;
    }
    if ( !*((_BYTE *)this + 6497) && (v20 & 4) != 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v16, this);
      *(_QWORD *)(v35 + 24) = 7420LL;
      goto LABEL_45;
    }
  }
  if ( (v15 & 0x81) != 0 )
  {
    if ( (v15 & 0x100) != 0 )
    {
      v28 = WdLogNewEntry5_WdEvent(v16, this);
      *(_QWORD *)(v28 + 24) = a2;
      *(_QWORD *)(v28 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v28);
      return 3223191812LL;
    }
    v29 = *a7;
    if ( *a7 )
    {
      v30 = (char *)v29 + 136;
      *((_QWORD *)v30 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync(v29, a2);
    v16 = (__int64)*a7;
    if ( *a7 )
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v16 + 136));
    v55 = 4;
  }
  else if ( (v15 & 2) == 0 )
  {
    if ( bTracingEnabled )
    {
      v40 = *((_QWORD *)a2 + 1);
      if ( v40 )
        v8 = *(_QWORD *)(v40 + 24);
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqq(v16, (__int64)this, v20, v8, a2, v15, 2);
    }
    VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v15, 2, 0);
    LODWORD(v11) = -1071775486;
    return (unsigned int)v11;
  }
  if ( v12[3] )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v12[1] + 24LL) + 152LL))(*(_QWORD *)(v12[1] + 24LL), v12[3]);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v21, v22);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 344));
  if ( (*(_DWORD *)(v13 + 80) & 0x1000) != 0 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    v11 = (int)LockParavirtualizedAllocationOnHost(a2, v14);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v41, v42);
    if ( (int)v11 >= 0 )
      goto LABEL_26;
    v43 = WdLogNewEntry5_WdAssertion(v16, v19);
    *(_QWORD *)(v43 + 24) = v11;
    WdLogEvent5_WdAssertion(v43);
    goto LABEL_81;
  }
  if ( (**(_DWORD **)(v13 + 504) & 0x40000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16);
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v13 + 76) & 0x80u) == 0 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
    {
      v48 = WdLogNewEntry5_WdWarning(v45);
      *(_QWORD *)(v48 + 24) = v13;
    }
    else
    {
      if ( (*((_DWORD *)this + 1616) & 0x20) != 0 || *((_BYTE *)this + 6496) )
      {
        LODWORD(v11) = -1073741823;
        goto LABEL_79;
      }
      v49 = *(_QWORD *)(v13 + 136);
      if ( !v49 || (*(_DWORD *)(v49 + 80) & 0x1001) != 0 )
        goto LABEL_79;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v45);
      LODWORD(v11) = VIDMM_GLOBAL::SetupAllocationForCPUAccess(this, a2, v46, v47, v53);
      if ( (int)v11 >= 0 )
        goto LABEL_79;
      v48 = WdLogNewEntry5_WdWarning(v50);
      *(_QWORD *)(v48 + 24) = a2;
    }
    WdLogEvent5_WdWarning(v48);
LABEL_79:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v44, v46);
    if ( (int)v11 >= 0 )
      goto LABEL_23;
    v52 = WdLogNewEntry5_WdWarning(v51);
    *(_QWORD *)(v52 + 24) = a2;
    WdLogEvent5_WdWarning(v52);
LABEL_81:
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 344));
    return (unsigned int)v11;
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(v16);
LABEL_23:
  v16 = **(unsigned int **)(v13 + 504);
  if ( (v16 & 8) != 0 )
  {
    v23 = *(void **)(v13 + 368);
    goto LABEL_25;
  }
LABEL_24:
  v23 = (void *)v12[2];
LABEL_25:
  *v14 = v23;
LABEL_26:
  v24 = bTracingEnabled == 0;
  *(_BYTE *)(v13 + 97) = 1;
  if ( v24 )
  {
    v26 = v55;
  }
  else
  {
    v25 = *((_QWORD *)a2 + 1);
    if ( v25 )
      v8 = *(_QWORD *)(v25 + 24);
    v26 = v55;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppqq(v16, (__int64)v19, v20, v8, a2, v15, v55);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v15, v26, 0);
  return 0LL;
}
