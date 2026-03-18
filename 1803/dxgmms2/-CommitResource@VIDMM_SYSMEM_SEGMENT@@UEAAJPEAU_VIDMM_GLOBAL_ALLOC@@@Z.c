/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072340
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0005984 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0024250 (McTemplateK0ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055F90 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B4F4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072694 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1014 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rdx
  VIDMM_GLOBAL *v5; // rcx
  bool v6; // bp
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // r8
  VIDMM_GLOBAL *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  VIDMM_SYSMEM_SEGMENT *v16; // rax
  VIDMM_SYSMEM_SEGMENT **v17; // rdx
  unsigned int v18; // ecx
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v26; // rcx
  VIDMM_GLOBAL *v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  VIDMM_GLOBAL *v33; // r9
  __int64 v34; // rax
  signed __int32 v35[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v36; // [rsp+28h] [rbp-10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v29 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v29 + 24) = a2;
    *(_QWORD *)(v29 + 32) = *((int *)a2 + 87);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
  v5 = this[1];
  if ( *(_BYTE *)(*((_QWORD *)v5 + 3) + 2414LL) || *(_BYTE *)(*((_QWORD *)v5 + 2) + 777LL) )
  {
    v34 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v34 + 24) = a2;
    WdLogEvent5_WdEvent(v34);
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
    v6 = v8 >= 0;
  }
  *((_DWORD *)a2 + 21) &= ~2u;
  if ( v8 < 0 )
    goto LABEL_34;
  v7 = **((_DWORD **)a2 + 63) >> 14;
  if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 && !*((_QWORD *)a2 + 46) )
  {
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL));
    if ( !v30 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31, v7);
      *(_QWORD *)(v32 + 24) = a2;
      WdLogEvent5_WdAssertion(v32);
      v8 = -1073741801;
LABEL_34:
      if ( v6 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v7, v9);
      return (unsigned int)v8;
    }
    *((_QWORD *)a2 + 46) = v30;
  }
  v10 = this[1];
  if ( *((_BYTE *)v10 + 40675) )
    v8 = VIDMM_GLOBAL::IoMmuMapAllocation(v10, a2);
  if ( v8 < 0 )
    goto LABEL_34;
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v33 = this[1];
    LODWORD(v36) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v11, &EventPagingOpSysmemCommit, v12, *((_QWORD *)v33 + 3), a2, v36);
  }
  v13 = *((_QWORD *)a2 + 28);
  *((_QWORD *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 17) = v13;
  v14 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_QWORD *)a2 + 18) = v14;
  v15 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 19) = v15;
  v16 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384);
  *((_DWORD *)a2 + 32) = 2;
  *((_BYTE *)a2 + 97) = 1;
  v17 = (VIDMM_SYSMEM_SEGMENT **)this[21];
  if ( *v17 != (VIDMM_SYSMEM_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v16 = this + 20;
  *((_QWORD *)a2 + 49) = v17;
  *v17 = v16;
  this[21] = v16;
  v18 = *((_DWORD *)a2 + 18);
  if ( !v18
    || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v19 = *((_DWORD *)this + 4) + 1) : (v19 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v19
     || (((*((_DWORD *)this + 20) >> 12) & 1) == 0 ? (v20 = *((_DWORD *)this + 4) + 1) : (v20 = 0),
         ((v18 >> 6) & 0x1F) == v20)) )
  {
    v21 = 0x800000;
  }
  else
  {
    v21 = 0;
  }
  v22 = *((_QWORD *)a2 + 13);
  v23 = v21 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  *((_DWORD *)a2 + 19) = v23;
  if ( v22 && *(_QWORD *)(v22 + 8) )
  {
    VidMmRecordAlloc(this[1], (__int64)a2, v22, (__int64)this, *((_QWORD *)a2 + 2), 0);
    v23 = *((_DWORD *)a2 + 19);
  }
  v24 = 1560LL * (v23 & 0x3F);
  *(_QWORD *)(v24 + *((_QWORD *)this[1] + 5090) + 1544) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v24 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL);
    v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v24);
    v26 = *(_QWORD *)(v22 + 48) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v26 + 240) += *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v24, v22);
  v27 = this[1];
  _InterlockedOr(v35, 0);
  ++*((_QWORD *)v27 + 5);
  return 0LL;
}
