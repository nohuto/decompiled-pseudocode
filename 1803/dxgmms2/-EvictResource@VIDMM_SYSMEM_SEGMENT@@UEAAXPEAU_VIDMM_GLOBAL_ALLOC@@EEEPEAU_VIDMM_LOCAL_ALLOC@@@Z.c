/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0071EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C000582C (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0005984 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0024250 (McTemplateK0ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055F90 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0056234 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005E6D0 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C005FD14 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0060EC0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063038 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00653C0 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0065588 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B4F4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A1068 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v7; // di
  struct _VIDMM_LOCAL_ALLOC *v10; // r13
  VIDMM_GLOBAL *v11; // rax
  VIDMM_GLOBAL *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  VIDMM_GLOBAL *v15; // rbp
  struct _VIDMM_GLOBAL_ALLOC *i; // rdi
  _QWORD *j; // r14
  unsigned int k; // edi
  _DWORD *v19; // rdi
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  unsigned int PriorityClass; // eax
  __int64 v25; // r8
  _QWORD **v26; // r14
  _QWORD **v27; // r10
  VIDMM_GLOBAL *v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  _QWORD *m; // r9
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  VIDMM_GLOBAL *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  VIDMM_GLOBAL *v40; // r9
  signed __int32 v41[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v42; // [rsp+28h] [rbp-40h]

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v37 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v37 + 24) = a2;
    *(_QWORD *)(v37 + 32) = *((int *)a2 + 87);
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v38[3] = 270LL;
    v38[4] = 9LL;
    v38[5] = 0LL;
    v38[6] = 0LL;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v10 = a6;
  if ( !a6 )
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v11 = this[1];
  if ( *((_BYTE *)v11 + 40675) )
  {
    VIDMM_GLOBAL::IoMmuUnmapAllocation(this[1], a2, v10);
    v11 = this[1];
  }
  v12 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( *((_DWORD *)v11 + 10166) )
  {
    if ( ((unsigned int)v12 & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v12, a2);
    if ( v7 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      this[1],
      (struct _VIDSCH_SYNC_OBJECT **)this[1] + (*((_DWORD *)a2 + 19) & 0x3F) + 746,
      (const unsigned __int64 *)a2 + 22,
      1u,
      (const unsigned __int64 *)this[1] + (*((_DWORD *)a2 + 19) & 0x3F) + 682);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v13, v14);
      return;
    }
  }
  else
  {
    LODWORD(v12) = (unsigned int)v12 | 0x100000;
    *((_DWORD *)a2 + 19) = (_DWORD)v12;
  }
  v15 = this[1];
  if ( (*((_BYTE *)v15 + 41448) & 2) != 0 )
  {
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v15, (struct VIDMM_ALLOC *)(j - 5));
    }
    for ( k = 0; k < *((_DWORD *)v15 + 1748); ++k )
      VIDMM_GLOBAL::FlushPagingBufferInternal(v15, k, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::xWaitForAllPagingEngines(
      v15,
      (struct _VIDSCH_SYNC_OBJECT **)v15 + (*((_DWORD *)a2 + 19) & 0x3F) + 746,
      (const unsigned __int64 *)a2 + 22,
      1u,
      (const unsigned __int64 *)v15 + (*((_DWORD *)a2 + 19) & 0x3F) + 682);
  }
  v19 = (_DWORD *)((char *)a2 + 84);
  if ( (**((_DWORD **)a2 + 63) & 0x8000000) == 0 )
    goto LABEL_24;
  if ( (*v19 & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[1], *((_QWORD *)a2 + 1)) < 0 )
    {
LABEL_24:
      if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
        *((_QWORD *)a2 + 46) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, v10);
      if ( (*v19 & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
        *v19 &= ~2u;
      }
      goto LABEL_28;
    }
    *v19 |= 2u;
  }
LABEL_28:
  v20 = *((_QWORD *)a2 + 19);
  if ( v20 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
      v39[3] = *((_QWORD *)a2 + 19);
      v39[4] = *((int *)a2 + 37);
      v39[5] = *((unsigned int *)a2 + 36);
      v20 = *((_QWORD *)a2 + 19);
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*this + 3))(
      this,
      a2,
      v20,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v12);
  }
  v21 = (_QWORD *)((char *)a2 + 384);
  v22 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v22 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v23 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v23 != v21) )
  {
    __fastfail(3u);
  }
  *v23 = v22;
  *(_QWORD *)(v22 + 8) = v23;
  *v21 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v10 && *((_QWORD *)v10 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v10, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 94));
  v26 = (_QWORD **)((char *)a2 + 296);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v27 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v27 != v26 )
  {
    v28 = this[1];
    v29 = *(_QWORD *)((*(v27 - 6))[2] + 8LL * *(unsigned int *)(*((_QWORD *)v28 + 3) + 200LL));
    if ( v29 )
      v30 = *(_QWORD *)(v29 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v30 = 0LL;
    VidMmRecordEviction((__int64)v28 + 7704, v30 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v28 + 2));
  }
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
    *v19 |= 0x10u;
    *((_QWORD *)a2 + 55) = *((_QWORD *)this[1] + 576);
  }
  v31 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v31 + *((_QWORD *)this[1] + 5090) + 1544) -= *((_QWORD *)a2 + 2);
  for ( m = *v26; m != v26; m = (_QWORD *)*m )
  {
    v31 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL);
    v25 = *(_QWORD *)(*(_QWORD *)(*(m - 6) + 16LL) + 8 * v31);
    v33 = *(_QWORD *)(v25 + 48) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v33 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v31, v25);
  if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v40 = this[1];
    LODWORD(v42) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq(v34, &EventPagingOpSysmemUncommit, v35, *((_QWORD *)v40 + 3), a2, v42);
  }
  v36 = this[1];
  _InterlockedOr(v41, 0);
  ++*((_QWORD *)v36 + 5);
}
