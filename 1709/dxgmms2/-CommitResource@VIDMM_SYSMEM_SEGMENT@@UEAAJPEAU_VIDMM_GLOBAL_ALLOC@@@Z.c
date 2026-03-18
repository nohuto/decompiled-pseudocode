/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004DA90
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0021904 (McTemplateK0ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004EE1C (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C00599B8 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066C00 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
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
  VIDMM_SYSMEM_SEGMENT *v14; // rax
  VIDMM_SYSMEM_SEGMENT **v15; // rdx
  unsigned int v16; // ecx
  int v17; // r8d
  int v18; // eax
  int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  VIDMM_GLOBAL *v23; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  VIDMM_GLOBAL *v32; // r9
  signed __int32 v33[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v34; // [rsp+28h] [rbp-10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v26 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v26 + 24) = a2;
    *(_QWORD *)(v26 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v27 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v27 + 24) = a2;
    WdLogEvent5_WdEvent(v27);
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
    goto LABEL_31;
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v28 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v31 + 24) = a2;
      WdLogEvent5_WdAssertion(v31);
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      v7 = -1073741801;
LABEL_31:
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v6, v8);
      return (unsigned int)v7;
    }
    *((_QWORD *)a2 + 46) = v28;
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v32 = this[1];
    LODWORD(v34) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v9, &EventPagingOpSysmemCommit, v10, *((_QWORD *)v32 + 3), a2, v34);
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
  v14 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_DWORD *)a2 + 32) = 2;
  *((_BYTE *)a2 + 97) = 1;
  v15 = (VIDMM_SYSMEM_SEGMENT **)this[21];
  if ( *v15 != (VIDMM_SYSMEM_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v14 = this + 20;
  *((_QWORD *)a2 + 49) = v15;
  *v15 = v14;
  this[21] = v14;
  v16 = *((_DWORD *)a2 + 18);
  if ( !v16
    || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v17 = *((_DWORD *)this + 4) + 1) : (v17 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v17
     || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v18 = *((_DWORD *)this + 4) + 1) : (v18 = 0),
         ((v16 >> 6) & 0x1F) == v18)) )
  {
    v19 = 0x800000;
  }
  else
  {
    v19 = 0;
  }
  v20 = *((_QWORD *)a2 + 13);
  *((_DWORD *)a2 + 19) = v19 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  if ( v20 && *(_QWORD *)(v20 + 8) )
    VidMmRecordAlloc(this[1], (__int64)a2, v20, (__int64)this, *((_QWORD *)a2 + 2), 0);
  v21 = 1552LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v21 + *((_QWORD *)this[1] + 5021) + 1536) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v21 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL);
    v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v21);
    v25 = *(_QWORD *)(v20 + 48) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v25 + 240) += *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v21, v20);
  v23 = this[1];
  _InterlockedOr(v33, 0);
  ++*((_QWORD *)v23 + 5);
  return 0LL;
}
