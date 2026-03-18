/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0001738 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0021904 (McTemplateK0ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004D0D8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A040 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005B3AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C005B3FC (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C005C730 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005EA5C (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FE8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00611B0 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0066C00 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0072A24 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v7; // bp
  VIDMM_GLOBAL *v10; // rcx
  struct _VIDMM_LOCAL_ALLOC *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  unsigned int PriorityClass; // eax
  __int64 v19; // r8
  _QWORD **v20; // rsi
  _QWORD **v21; // r10
  VIDMM_GLOBAL *v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  _QWORD *i; // r9
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  VIDMM_GLOBAL *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  VIDMM_GLOBAL *v34; // r9
  signed __int32 v35[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+28h] [rbp-20h]

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v31 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v31 + 24) = a2;
    *(_QWORD *)(v31 + 32) = *((int *)a2 + 87);
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v32[3] = 270LL;
    v32[4] = 9LL;
    v32[5] = 0LL;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v11 = a6;
  if ( !a6 )
    v11 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  if ( *((_DWORD *)this[1] + 10022) )
  {
    if ( (*((_DWORD *)a2 + 19) & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v10, a2);
    if ( v7 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this[1],
      (struct _VIDSCH_SYNC_OBJECT **)this[1] + (*((_DWORD *)a2 + 19) & 0x3F) + 738,
      (const unsigned __int64 *)a2 + 22,
      1u,
      (const unsigned __int64 *)this[1] + (*((_DWORD *)a2 + 19) & 0x3F) + 674);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v12, v13);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) |= 0x100000u;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(this[1], a2, 1u);
  if ( (**((_DWORD **)a2 + 63) & 0x8000000) == 0 )
    goto LABEL_13;
  if ( (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[1], *((_QWORD *)a2 + 1)) < 0 )
    {
LABEL_13:
      if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
        *((_QWORD *)a2 + 46) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, v11);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
      }
      goto LABEL_17;
    }
    *((_DWORD *)a2 + 21) |= 2u;
  }
LABEL_17:
  if ( *((_QWORD *)a2 + 19) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v33[3] = *((_QWORD *)a2 + 19);
      v33[4] = *((int *)a2 + 37);
      v33[5] = *((unsigned int *)a2 + 36);
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD))*this + 3))(
      this,
      a2,
      *((_QWORD *)a2 + 19),
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v14);
  }
  v15 = (_QWORD *)((char *)a2 + 384);
  v16 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v16 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v17 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v17 != v15) )
  {
    __fastfail(3u);
  }
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  *v15 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v11 && *((_QWORD *)v11 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v11, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94));
  v20 = (_QWORD **)((char *)a2 + 296);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v21 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v21 != v20 )
  {
    v22 = this[1];
    v23 = *(_QWORD *)((*(v21 - 6))[2] + 8LL * *(unsigned int *)(*((_QWORD *)v22 + 3) + 200LL));
    if ( v23 )
      v24 = *(_QWORD *)(v23 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v24 = 0LL;
    VidMmRecordEviction((__int64)v22 + 7128, v24 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v22 + 2));
  }
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
    *((_DWORD *)a2 + 21) |= 0x10u;
    *((_QWORD *)a2 + 55) = *((_QWORD *)this[1] + 576);
  }
  v25 = 1552LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v25 + *((_QWORD *)this[1] + 5021) + 1536) -= *((_QWORD *)a2 + 2);
  for ( i = *v20; i != v20; i = (_QWORD *)*i )
  {
    v25 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL);
    v19 = *(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL) + 8 * v25);
    v27 = *(_QWORD *)(v19 + 48) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v27 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v25, v19);
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v34 = this[1];
    LODWORD(v36) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v28, &EventPagingOpSysmemUncommit, v29, *((_QWORD *)v34 + 3), a2, v36);
  }
  v30 = this[1];
  _InterlockedOr(v35, 0);
  ++*((_QWORD *)v30 + 5);
}
