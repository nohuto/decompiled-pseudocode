/*
 * XREFs of ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0061254
 * Callers:
 *     ?VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C0012730 (-VidMmBeginCPUAccess@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXG.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ @ 0x1C0001A84 (-IsCurrentProcess@VIDMM_PROCESS@@QEAAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0002850 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     Template_ppqq @ 0x1C001F978 (Template_ppqq.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00595C4 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C0095240 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
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
  int v11; // ebx
  __int64 *v12; // r13
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // rcx
  __int64 v16; // rdx
  VIDMM_GLOBAL *v17; // r8
  __int64 v18; // rdx
  VIDMM_GLOBAL *v19; // rcx
  char *v20; // rcx
  void *v21; // rax
  bool v22; // zf
  char v23; // bl
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int8 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int8 v46; // [rsp+20h] [rbp-58h]
  unsigned int v48; // [rsp+90h] [rbp+18h]

  v8 = 0LL;
  v9 = (unsigned int)a4;
  v48 = 0;
  v11 = 0;
  if ( *(_WORD *)(*((_QWORD *)a2 + 12) + 4LL) )
  {
    if ( DxgkVidMmAllowFailOnOfferReclaimErrors() )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v30 + 24) = a2;
      *(_QWORD *)(v30 + 32) = 2LL;
LABEL_41:
      WdLogEvent5_WdAssertion(v30);
      return (unsigned int)-1073741811;
    }
    v32 = WdLogNewEntry5_WdError(v27, v26, v28, v29);
    *(_QWORD *)(v32 + 24) = a2;
    *(_QWORD *)(v32 + 32) = 2LL;
    WdLogEvent5_WdError(v32);
  }
  v12 = *(__int64 **)a2;
  v13 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v13 + 84) & 0x20) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v33 + 24) = 6838LL;
    WdLogEvent5_WdAssertion(v33);
    return (unsigned int)v11;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v34 + 24) = a2;
    *(_QWORD *)(v34 + 32) = v9;
  }
  v14 = v9 & 0xFFFFFFA7;
  *a8 = 0LL;
  if ( (v14 & 0xFFFFFC58) != 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v30 + 24) = v14;
    goto LABEL_41;
  }
  v15 = **(unsigned int **)(v13 + 520);
  if ( (v15 & 1) == 0 )
  {
    v31 = WdLogNewEntry5_WdError(v15, a2, a3, a4);
    *(_QWORD *)(v31 + 24) = 6878LL;
    WdLogEvent5_WdError(v31);
    return (unsigned int)-1073741811;
  }
  if ( (v15 & 8) == 0 && !VIDMM_PROCESS::IsCurrentProcess((VIDMM_PROCESS *)v12[1]) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v15, v16);
    *(_QWORD *)(v30 + 24) = 6892LL;
    goto LABEL_41;
  }
  v17 = this;
  v18 = **(unsigned int **)(v13 + 520);
  if ( (**(_DWORD **)(v13 + 520) & 0x60000000) == 0x20000000 && v12 != *(__int64 **)(v13 + 104) )
  {
    v15 = *(unsigned int *)(*((_QWORD *)this + 3) + 300LL);
    if ( (v15 & 0x10) == 0 && (v15 & 8) == 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v30 + 24) = 6908LL;
      goto LABEL_41;
    }
  }
  if ( (v14 & 0x82) != 0 )
  {
    if ( (*(_DWORD *)(v13 + 76) & 0x40) == 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v30 + 24) = 6934LL;
      goto LABEL_41;
    }
    if ( !*((_BYTE *)this + 6497) && (v18 & 4) != 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v15, v18);
      *(_QWORD *)(v30 + 24) = 6945LL;
      goto LABEL_41;
    }
  }
  if ( (v14 & 0x81) != 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      v25 = WdLogNewEntry5_WdEvent(v15, v18);
      v11 = -1071775484;
      *(_QWORD *)(v25 + 24) = a2;
      *(_QWORD *)(v25 + 32) = -1071775484LL;
      WdLogEvent5_WdEvent(v25);
      return (unsigned int)v11;
    }
    v19 = *a7;
    if ( *a7 )
    {
      v20 = (char *)v19 + 112;
      *((_QWORD *)v20 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v20, 0LL);
      KeLeaveCriticalRegion();
    }
    VIDMM_GLOBAL::WaitOnAllocForceSync(v19, a2, (__int64)v17, a4);
    v15 = (__int64)*a7;
    if ( *a7 )
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 112));
    v48 = 4;
  }
  else if ( (v14 & 2) == 0 )
  {
    if ( bTracingEnabled )
    {
      v35 = *((_QWORD *)a2 + 1);
      if ( v35 )
        v8 = *(_QWORD *)(v35 + 24);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_ppqq(v15, v18, (__int64)this, v8, a2, v14, 2);
    }
    VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v14, 2, 0);
    return (unsigned int)-1071775486;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 344));
  if ( (*(_DWORD *)(v13 + 80) & 0x2000) != 0 )
  {
    v21 = *(void **)(v13 + 392);
    goto LABEL_25;
  }
  if ( (**(_DWORD **)(v13 + 520) & 0x40000000) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v13 + 76) & 0x80u) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v15);
    goto LABEL_23;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
  if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v37, v36);
    *(_QWORD *)(v40 + 24) = v13;
LABEL_64:
    WdLogEvent5_WdWarning(v40);
    goto LABEL_74;
  }
  if ( (*((_DWORD *)this + 1616) & 0x20) != 0 || *((_BYTE *)this + 6496) )
  {
    v11 = -1073741823;
  }
  else
  {
    v41 = *(_QWORD *)(v13 + 136);
    if ( v41 && (*(_DWORD *)(v41 + 80) & 0x1001) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v37);
      v11 = VIDMM_GLOBAL::SetupAllocationForCPUAccess(this, a2, v38, v39, v46);
      if ( v11 < 0 )
      {
        v40 = WdLogNewEntry5_WdWarning(v42, v36);
        *(_QWORD *)(v40 + 24) = a2;
        goto LABEL_64;
      }
    }
  }
LABEL_74:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v36, v38);
  if ( v11 < 0 )
  {
    v44 = WdLogNewEntry5_WdWarning(v43, v18);
    *(_QWORD *)(v44 + 24) = a2;
    WdLogEvent5_WdWarning(v44);
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 344));
    return (unsigned int)v11;
  }
LABEL_23:
  v15 = **(unsigned int **)(v13 + 520);
  if ( (v15 & 8) != 0 )
  {
    v21 = *(void **)(v13 + 368);
    goto LABEL_25;
  }
LABEL_24:
  v21 = (void *)v12[2];
LABEL_25:
  v22 = bTracingEnabled == 0;
  *a8 = v21;
  *(_BYTE *)(v13 + 97) = 1;
  if ( v22 )
  {
    v23 = v48;
  }
  else
  {
    v45 = *((_QWORD *)a2 + 1);
    if ( v45 )
      v8 = *(_QWORD *)(v45 + 24);
    v23 = v48;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_ppqq(v15, v18, (__int64)v17, v8, a2, v14, v48);
  }
  VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7128), v14, v23, 0);
  return 0LL;
}
