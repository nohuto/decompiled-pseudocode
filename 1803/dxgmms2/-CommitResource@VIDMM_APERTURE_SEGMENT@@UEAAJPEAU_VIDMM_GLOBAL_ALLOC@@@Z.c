/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007E990
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0005984 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055F90 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005E3CC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B4F4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072694 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C007884C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1014 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // si
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  VIDMM_GLOBAL *v10; // rcx
  VIDMM_GLOBAL *v11; // rdi
  __int64 v12; // rsi
  BOOL v13; // ebx
  struct _MDL *FullMDL; // rax
  __int64 v15; // rcx
  __int16 v16; // cx
  VIDMM_APERTURE_SEGMENT *v17; // rax
  VIDMM_APERTURE_SEGMENT **v18; // rdx
  unsigned int v19; // ecx
  int v20; // ecx
  struct _VIDMM_GLOBAL_ALLOC *v21; // r8
  __int64 v22; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v24; // rcx
  VIDMM_GLOBAL *v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  struct _VIDMM_MDL *v29; // rax
  unsigned int *v30; // rcx
  struct _VIDMM_MDL *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  int v37; // eax
  signed __int32 v38[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v27 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v27 + 24) = a2;
    *(_QWORD *)(v27 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v28 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v28 + 24) = a2;
    WdLogEvent5_WdEvent(v28);
    return 3221226166LL;
  }
  v6 = 0;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    v8 = 0;
  }
  else
  {
    v8 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    if ( v8 >= 0 )
    {
      v6 = 1;
      v7 = *((_QWORD *)this[1] + 3);
      if ( (*(_DWORD *)(v7 + 300) & 4) == 0 )
      {
        if ( (**((_DWORD **)a2 + 63) & 8) == 0 )
          KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
        v29 = VidMmiProbeAndLockAllocation(
                a2,
                0LL,
                *((_QWORD *)a2 + 1),
                IoModifyAccess,
                (struct VIDMM_SEGMENT *)this,
                0LL);
        v30 = (unsigned int *)*((_QWORD *)a2 + 63);
        v31 = v29;
        v7 = *v30;
        if ( (v7 & 8) == 0 )
          KeUnstackDetachProcess(&ApcState);
        if ( v31 )
        {
          *((_QWORD *)a2 + 14) = v31;
        }
        else
        {
          v32 = WdLogNewEntry5_WdWarning(v30, v7);
          *(_QWORD *)(v32 + 24) = a2;
          WdLogEvent5_WdWarning(v32);
          VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
          v8 = -1073741801;
        }
      }
    }
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v8 < 0 )
    goto LABEL_39;
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v33 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v34, v7);
      *(_QWORD *)(v35 + 24) = a2;
      WdLogEvent5_WdAssertion(v35);
      v8 = -1073741801;
LABEL_39:
      if ( v6 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v7, v9);
      return (unsigned int)v8;
    }
    *((_QWORD *)a2 + 46) = v33;
  }
  v10 = this[1];
  if ( *((_BYTE *)v10 + 40675) )
    v8 = VIDMM_GLOBAL::IoMmuMapAllocation(v10, a2);
  if ( v8 < 0 )
    goto LABEL_39;
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  v11 = *this;
  v12 = *((_QWORD *)a2 + 27) / 4096LL;
  v13 = (**((_DWORD **)a2 + 63) & 0x800004) == 4;
  FullMDL = VidMmGetFullMDL(a2, 0LL);
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))v11
   + 27))(
    this,
    a2,
    *((_QWORD *)a2 + 1) >> 12,
    v12,
    v12,
    FullMDL,
    0,
    v13);
  v15 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 19) = *((_QWORD *)a2 + 26);
  *((_DWORD *)a2 + 32) = 2;
  *((_QWORD *)a2 + 17) = v15;
  if ( (*(_DWORD *)(v15 + 80) & 0x1000) != 0 )
    v16 = 0;
  else
    v16 = *(_DWORD *)(v15 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = v16;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  *((_QWORD *)a2 + 28) = 0LL;
  v17 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 26) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_BYTE *)a2 + 97) = 1;
  v18 = (VIDMM_APERTURE_SEGMENT **)this[21];
  if ( *v18 != (VIDMM_APERTURE_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v17 = this + 20;
  *((_QWORD *)a2 + 49) = v18;
  *v18 = v17;
  this[21] = v17;
  v19 = *((_DWORD *)a2 + 18);
  if ( !v19
    || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v36 = *((_DWORD *)this + 4) + 1) : (v36 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v36
     || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v37 = *((_DWORD *)this + 4) + 1) : (v37 = 0),
         ((v19 >> 6) & 0x1F) == v37)) )
  {
    v20 = 0x800000;
  }
  else
  {
    v20 = 0;
  }
  v21 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 19) = v20 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  if ( v21 && *((_QWORD *)v21 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v21, (__int64)this, *((_QWORD *)a2 + 2), 0);
  if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
  {
    LOBYTE(v21) = 1;
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, v21);
  }
  v22 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v22 + *((_QWORD *)this[1] + 5090) + 1544) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v22 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL);
    v21 = *(struct _VIDMM_GLOBAL_ALLOC **)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v22);
    v24 = *((_QWORD *)v21 + 6) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v24 + 240) += *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v22, (__int64)v21);
  v25 = this[1];
  _InterlockedOr(v38, 0);
  ++*((_QWORD *)v25 + 5);
  return 0LL;
}
