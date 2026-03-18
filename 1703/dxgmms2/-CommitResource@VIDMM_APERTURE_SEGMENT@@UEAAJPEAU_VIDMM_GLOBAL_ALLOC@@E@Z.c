/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0075920
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004843C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004ABC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0056BDC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A34C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006373C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z @ 0x1C00A21B4 (-MakeRangeNonPageable@VIDMM_SEGMENT@@QEAAJ_K0PEAPEAX@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C00A22B8 (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  VIDMM_GLOBAL *v11; // rdi
  __int64 v12; // rsi
  BOOL v13; // ebx
  struct _MDL *FullMDL; // rax
  __int64 v15; // rcx
  __int16 v16; // cx
  VIDMM_GLOBAL *v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // ecx
  __int64 v21; // r8
  VIDMM_GLOBAL *v22; // rax
  __int64 result; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  struct _VIDMM_MDL *v27; // rax
  unsigned int *v28; // rcx
  struct _VIDMM_MDL *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  void *v35; // rdx
  int v36; // eax
  signed __int32 v37[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v24 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v24 + 24) = a2;
    *(_QWORD *)(v24 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v25 = WdLogNewEntry5_WdEvent(v7, v6);
    *(_QWORD *)(v25 + 24) = a2;
    WdLogEvent5_WdEvent(v25);
    return 3221226166LL;
  }
  if ( a3 != 1
    || (((_DWORD)this[10] & 0x20) == 0 ? (v26 = *((_QWORD *)a2 + 2)) : (v26 = *((_QWORD *)a2 + 3)),
        result = VIDMM_SEGMENT::MakeRangeNonPageable((VIDMM_SEGMENT *)this, *((_QWORD *)a2 + 27), v26, (void **)a2 + 50),
        (int)result >= 0) )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
    if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
      v9 = 0;
    }
    else
    {
      v9 = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
      if ( v9 >= 0 )
      {
        v8 = *((_QWORD *)this[1] + 3);
        if ( (*(_DWORD *)(v8 + 300) & 4) == 0 )
        {
          if ( (**((_DWORD **)a2 + 65) & 8) == 0 )
            KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 13) + 8LL), &ApcState);
          v27 = VidMmiProbeAndLockAllocation(
                  a2,
                  0LL,
                  *((_QWORD *)a2 + 1),
                  IoModifyAccess,
                  (struct VIDMM_SEGMENT *)this,
                  0LL);
          v28 = (unsigned int *)*((_QWORD *)a2 + 65);
          v29 = v27;
          v8 = *v28;
          if ( (v8 & 8) == 0 )
            KeUnstackDetachProcess(&ApcState);
          if ( v29 )
          {
            *((_QWORD *)a2 + 14) = v29;
          }
          else
          {
            v30 = WdLogNewEntry5_WdWarning(v28, v8);
            *(_QWORD *)(v30 + 24) = a2;
            WdLogEvent5_WdWarning(v30);
            VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
            v9 = -1073741801;
          }
        }
      }
    }
    *((_DWORD *)a2 + 21) &= ~2u;
    if ( v9 < 0 )
      goto LABEL_40;
    if ( (**((_DWORD **)a2 + 65) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
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
        v9 = -1073741801;
LABEL_40:
        DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v8, v10);
        v35 = (void *)*((_QWORD *)a2 + 50);
        if ( v35 )
        {
          VIDMM_SEGMENT::MakeRangePageable((VIDMM_SEGMENT *)this, v35);
          *((_QWORD *)a2 + 50) = 0LL;
        }
        return (unsigned int)v9;
      }
      *((_QWORD *)a2 + 46) = v31;
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v11 = *this;
    v12 = *((_QWORD *)a2 + 27) / 4096LL;
    v13 = (**((_DWORD **)a2 + 65) & 0x800004) == 4;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))v11
     + 25))(
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
    *(_WORD *)(*((_QWORD *)a2 + 65) + 6LL) = v16;
    *(_QWORD *)(*((_QWORD *)a2 + 65) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
    *((_QWORD *)a2 + 28) = 0LL;
    v17 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416);
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_DWORD *)a2 + 21) &= ~8u;
    *((_BYTE *)a2 + 97) = 1;
    v18 = (__int64)this[24];
    if ( *(VIDMM_GLOBAL ***)v18 != this + 23 )
      __fastfail(3u);
    *(_QWORD *)v17 = this + 23;
    *((_QWORD *)a2 + 53) = v18;
    *(_QWORD *)v18 = v17;
    this[24] = v17;
    v19 = *((_DWORD *)a2 + 18);
    if ( !v19
      || (((_DWORD)this[10] & 0x1000) == 0 ? (v18 = (unsigned int)(*((_DWORD *)this + 4) + 1)) : (v18 = 0LL),
          (*((_DWORD *)a2 + 18) & 0x1F) == (_DWORD)v18
       || (((_DWORD)this[10] & 0x1000) == 0 ? (v36 = *((_DWORD *)this + 4) + 1) : (v36 = 0), ((v19 >> 6) & 0x1F) == v36)) )
    {
      v20 = 0x800000;
    }
    else
    {
      v20 = 0;
    }
    v21 = *((_QWORD *)a2 + 13);
    *((_DWORD *)a2 + 19) = v20 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
    if ( v21 && *(_QWORD *)(v21 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v21, (__int64)this, *((_QWORD *)a2 + 2), 0);
    if ( (**((_DWORD **)a2 + 65) & 0x10000) != 0 )
    {
      LOBYTE(v21) = 1;
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, (struct _VIDMM_GLOBAL_ALLOC *)v21);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v18, v21);
    v22 = this[1];
    _InterlockedOr(v37, 0);
    ++*((_QWORD *)v22 + 5);
    return 0LL;
  }
  return result;
}
