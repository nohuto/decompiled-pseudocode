/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C00688C8
 * Callers:
 *     ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0003B30 (-VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXG.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0005170 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0005AD0 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqq @ 0x1C0024388 (McTemplateK0ppqq.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060FF0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00A1598 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00A3950 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
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
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v11; // rbx
  __int64 *v12; // r12
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 v16; // rdx
  VIDMM_GLOBAL *v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  void *v20; // rax
  bool v21; // zf
  __int64 v22; // rax
  char v23; // bl
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  VIDMM_GLOBAL *v28; // rcx
  char *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  unsigned __int8 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int8 v52; // [rsp+20h] [rbp-58h]
  unsigned int v54; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = (unsigned int)a4;
  v54 = 0;
  LODWORD(v11) = 0;
  if ( *(_WORD *)(*((_QWORD *)a2 + 12) + 4LL) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v34 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v34 + 24) = a2;
      *(_QWORD *)(v34 + 32) = 2LL;
LABEL_44:
      WdLogEvent5_WdAssertion(v34);
LABEL_46:
      LODWORD(v11) = -1073741811;
      return (unsigned int)v11;
    }
    v36 = WdLogNewEntry5_WdError(v31, v30, v32, v33);
    *(_QWORD *)(v36 + 24) = a2;
    *(_QWORD *)(v36 + 32) = 2LL;
    WdLogEvent5_WdError(v36);
  }
  v12 = *(__int64 **)a2;
  v13 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v13 + 84) & 0x20) != 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v37 + 24) = 7376LL;
    WdLogEvent5_WdAssertion(v37);
    return (unsigned int)v11;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v38 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v38 + 24) = a2;
    *(_QWORD *)(v38 + 32) = v9;
  }
  v14 = v9 & 0xFFFFFFA7;
  *a8 = 0LL;
  if ( (v14 & 0xFFFFFC58) != 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v34 + 24) = v14;
    goto LABEL_44;
  }
  v15 = **(unsigned int **)(v13 + 504);
  if ( (v15 & 1) == 0 )
  {
    v35 = WdLogNewEntry5_WdError(v15, a2, a3, a4);
    *(_QWORD *)(v35 + 24) = 7416LL;
    WdLogEvent5_WdError(v35);
    goto LABEL_46;
  }
  if ( (v15 & 8) == 0 && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v12[1]) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v15, v16);
    *(_QWORD *)(v34 + 24) = 7430LL;
    goto LABEL_44;
  }
  v17 = this;
  v18 = **(unsigned int **)(v13 + 504);
  if ( (**(_DWORD **)(v13 + 504) & 0x60000000) == 0x20000000 && v12 != *(__int64 **)(v13 + 104) )
  {
    v15 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
    if ( (v15 & 0x10) == 0 && (v15 & 8) == 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v34 + 24) = 7445LL;
      goto LABEL_44;
    }
  }
  if ( (v14 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 76) & 0x40) == 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v34 + 24) = 7471LL;
      goto LABEL_44;
    }
    if ( !*((_BYTE *)this + 7073) && (v18 & 4) != 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v34 + 24) = 7482LL;
      goto LABEL_44;
    }
  }
  if ( (v14 & 0x81) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      v27 = WdLogNewEntry5_WdEvent(v15, v18);
      LODWORD(v11) = -1071775484;
      *(_QWORD *)(v27 + 24) = a2;
      *(_QWORD *)(v27 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v27);
      return (unsigned int)v11;
    }
    v28 = *a7;
    if ( *a7 )
    {
      v29 = (char *)v28 + 144;
      *((_QWORD *)v29 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v29, 0LL);
      KeLeaveCriticalRegion();
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync(v28, a2);
    v15 = (__int64)*a7;
    if ( *a7 )
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 144));
    v54 = 4;
  }
  else if ( (v14 & 2) == 0 )
  {
    if ( bTracingEnabled )
    {
      v39 = *((_QWORD *)a2 + 1);
      if ( v39 )
        v8 = *(_QWORD *)(v39 + 24);
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqq(v15, v18, (__int64)this, v8, a2, v14, 2);
    }
    VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7704), v14, 2, 0);
    LODWORD(v11) = -1071775486;
    return (unsigned int)v11;
  }
  if ( v12[3] )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v12[1] + 24) + 152LL))(*(_QWORD *)(v12[1] + 24), v12[3]);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v25, v26);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 344));
  v19 = *(_DWORD *)(v13 + 80);
  if ( (v19 & 0x2000) != 0 )
  {
    v20 = *(void **)(v13 + 528);
    goto LABEL_26;
  }
  if ( (v19 & 0x1000) != 0 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    v11 = (int)LockParavirtualizedAllocationOnHost(a2, a8);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v40, v41);
    if ( (int)v11 >= 0 )
      goto LABEL_27;
    v42 = WdLogNewEntry5_WdAssertion(v15, v18);
    *(_QWORD *)(v42 + 24) = v11;
    WdLogEvent5_WdAssertion(v42);
    goto LABEL_83;
  }
  v15 = **(unsigned int **)(v13 + 504);
  if ( (v15 & 0x40000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v13 + 76) & 0x80u) == 0 )
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
    if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
    {
      v47 = WdLogNewEntry5_WdWarning(v44, v43);
      *(_QWORD *)(v47 + 24) = v13;
    }
    else
    {
      if ( (*((_DWORD *)this + 1760) & 0x20) != 0 || *((_BYTE *)this + 7072) )
      {
        LODWORD(v11) = -1073741823;
        goto LABEL_81;
      }
      v48 = *(_QWORD *)(v13 + 136);
      if ( !v48 || (*(_DWORD *)(v48 + 80) & 0x1001) != 0 )
        goto LABEL_81;
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v44);
      LODWORD(v11) = VIDMM_GLOBAL::SetupAllocationForCPUAccess(this, a2, v45, v46, v52);
      if ( (int)v11 >= 0 )
        goto LABEL_81;
      v47 = WdLogNewEntry5_WdWarning(v49, v43);
      *(_QWORD *)(v47 + 24) = a2;
    }
    WdLogEvent5_WdWarning(v47);
LABEL_81:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v43, v45);
    if ( (int)v11 >= 0 )
      goto LABEL_68;
    v51 = WdLogNewEntry5_WdWarning(v50, v18);
    *(_QWORD *)(v51 + 24) = a2;
    WdLogEvent5_WdWarning(v51);
LABEL_83:
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 344));
    return (unsigned int)v11;
  }
  if ( !g_IsInternalReleaseOrDbg )
    goto LABEL_24;
  WdLogNewEntry5_WdTrace(v15);
LABEL_68:
  v15 = **(unsigned int **)(v13 + 504);
LABEL_24:
  if ( (v15 & 8) != 0 )
  {
    v20 = *(void **)(v13 + 368);
    goto LABEL_26;
  }
LABEL_25:
  v20 = (void *)v12[2];
LABEL_26:
  *a8 = v20;
LABEL_27:
  v21 = bTracingEnabled == 0;
  *(_BYTE *)(v13 + 97) = 1;
  if ( v21 )
  {
    v23 = v54;
  }
  else
  {
    v22 = *((_QWORD *)a2 + 1);
    if ( v22 )
      v8 = *(_QWORD *)(v22 + 24);
    v23 = v54;
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0ppqq(v15, v18, (__int64)v17, v8, a2, v14, v54);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7704), v14, v23, 0);
  return 0LL;
}
