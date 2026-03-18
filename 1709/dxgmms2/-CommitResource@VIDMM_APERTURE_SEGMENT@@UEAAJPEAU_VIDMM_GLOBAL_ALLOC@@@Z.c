/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BA00
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004C420 (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EE1C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C00599B8 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005D61C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066C00 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00728B4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // r8
  VIDMM_GLOBAL *v9; // rdi
  __int64 v10; // rsi
  BOOL v11; // ebx
  struct _MDL *FullMDL; // rax
  __int64 v13; // rcx
  __int16 v14; // cx
  VIDMM_APERTURE_SEGMENT *v15; // rax
  VIDMM_APERTURE_SEGMENT **v16; // rdx
  unsigned int v17; // ecx
  int v18; // ecx
  struct _VIDMM_GLOBAL_ALLOC *v19; // r8
  __int64 v20; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  VIDMM_GLOBAL *v22; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  struct _VIDMM_MDL *v27; // rax
  unsigned int *v28; // rcx
  struct _VIDMM_MDL *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r8d
  int v36; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v25 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v26 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v26 + 24) = a2;
    WdLogEvent5_WdEvent(v26);
    return 3221226166LL;
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    v7 = 0;
  }
  else
  {
    v7 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    if ( v7 >= 0 )
    {
      v6 = *((_QWORD *)this[1] + 3);
      if ( (*(_DWORD *)(v6 + 300) & 4) == 0 )
      {
        if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
          KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
        v27 = VidMmiProbeAndLockAllocation(
                a2,
                0LL,
                *((_QWORD *)a2 + 1),
                IoModifyAccess,
                (struct VIDMM_SEGMENT *)this,
                0LL);
        v28 = (unsigned int *)*((_QWORD *)a2 + 63);
        v29 = v27;
        v6 = *v28;
        if ( (v6 & 8) == 0 )
          KeUnstackDetachProcess(&ApcState);
        if ( v29 )
        {
          *((_QWORD *)a2 + 14) = v29;
        }
        else
        {
          v30 = WdLogNewEntry5_WdWarning(v28);
          *(_QWORD *)(v30 + 24) = a2;
          WdLogEvent5_WdWarning(v30);
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
          v7 = -1073741801;
        }
      }
    }
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v7 < 0 )
    goto LABEL_36;
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v31 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, v32);
      *(_QWORD *)(v34 + 24) = a2;
      WdLogEvent5_WdAssertion(v34);
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      v7 = -1073741801;
LABEL_36:
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v6, v8);
      return (unsigned int)v7;
    }
    *((_QWORD *)a2 + 46) = v31;
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  v9 = *this;
  v10 = *((_QWORD *)a2 + 27) / 4096LL;
  v11 = (**((_DWORD **)a2 + 63) & 0x800004) == 4;
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))v9
   + 27))(
    this,
    a2,
    *((_QWORD *)a2 + 1) >> 12,
    v10,
    v10,
    FullMDL,
    0,
    v11);
  v13 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 26);
  *((_DWORD *)a2 + 32) = 2;
  *((_QWORD *)a2 + 17) = v13;
  if ( (*(_DWORD *)(v13 + 80) & 0x1000) != 0 )
    v14 = 0;
  else
    v14 = *(_DWORD *)(v13 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v14;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  *((_QWORD *)a2 + 28) = 0LL;
  v15 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_BYTE *)a2 + 97) = 1;
  v16 = (VIDMM_APERTURE_SEGMENT **)this[21];
  if ( *v16 != (VIDMM_APERTURE_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v15 = this + 20;
  *((_QWORD *)a2 + 49) = v16;
  *v16 = v15;
  this[21] = v15;
  v17 = *((_DWORD *)a2 + 18);
  if ( !v17
    || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v35 = *((_DWORD *)this + 4) + 1) : (v35 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v35
     || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v36 = *((_DWORD *)this + 4) + 1) : (v36 = 0),
         ((v17 >> 6) & 0x1F) == v36)) )
  {
    v18 = 0x800000;
  }
  else
  {
    v18 = 0;
  }
  v19 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 19) = v18 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  if ( v19 && *((_QWORD *)v19 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v19, (__int64)this, *((_QWORD *)a2 + 2), 0);
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
  {
    LOBYTE(v19) = 1;
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, v19);
  }
  v20 = 1552LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v20 + *((_QWORD *)this[1] + 5021) + 1536) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v20 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL);
    v19 = *(struct _VIDMM_GLOBAL_ALLOC **)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v20);
    v24 = *((_QWORD *)v19 + 6) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v24 + 240) += *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v20, (__int64)v19);
  v22 = this[1];
  _InterlockedOr(v37, 0);
  ++*((_QWORD *)v22 + 5);
  return 0LL;
}
