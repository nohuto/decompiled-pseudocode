/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00499F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_ppq @ 0x1C001F838 (Template_ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004ABC4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0056BDC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006373C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  VIDMM_GLOBAL *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // ecx
  __int64 v19; // r8
  VIDMM_GLOBAL *v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  VIDMM_GLOBAL *v28; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+28h] [rbp-10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v22 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v23 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdEvent(v23);
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
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v7 < 0 )
    goto LABEL_28;
  if ( (**((_DWORD **)a2 + 65) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v24 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v27 + 24) = a2;
      WdLogEvent5_WdAssertion(v27);
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      v7 = -1073741801;
LABEL_28:
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v6, v8);
      return (unsigned int)v7;
    }
    *((_QWORD *)a2 + 46) = v24;
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v28 = this[1];
    LODWORD(v30) = *((_DWORD *)this + 4) + 1;
    Template_ppq(v9, &EventPagingOpSysmemCommit, v10, *((_QWORD *)v28 + 3), a2, v30);
  }
  v11 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 17) = v11;
  v12 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 18) = v12;
  v13 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 19) = v13;
  v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416);
  *((_DWORD *)a2 + 32) = 2;
  *((_BYTE *)a2 + 97) = 1;
  v15 = (__int64)this[24];
  if ( *(VIDMM_GLOBAL ***)v15 != this + 23 )
    __fastfail(3u);
  *(_QWORD *)v14 = this + 23;
  *((_QWORD *)a2 + 53) = v15;
  *(_QWORD *)v15 = v14;
  this[24] = v14;
  v16 = *((_DWORD *)a2 + 18);
  if ( !v16
    || (((_DWORD)this[10] & 0x1000) == 0 ? (v15 = (unsigned int)(*((_DWORD *)this + 4) + 1)) : (v15 = 0LL),
        (*((_DWORD *)a2 + 18) & 0x1F) == (_DWORD)v15
     || (((_DWORD)this[10] & 0x1000) == 0 ? (v17 = *((_DWORD *)this + 4) + 1) : (v17 = 0), ((v16 >> 6) & 0x1F) == v17)) )
  {
    v18 = 0x800000;
  }
  else
  {
    v18 = 0;
  }
  v19 = *((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 19) = v18 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 8) )
      VidMmRecordAlloc(this[1], (__int64)a2, v19, (__int64)this, *((_QWORD *)a2 + 2), 0);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v15, v19);
  v20 = this[1];
  _InterlockedOr(v29, 0);
  ++*((_QWORD *)v20 + 5);
  return 0LL;
}
