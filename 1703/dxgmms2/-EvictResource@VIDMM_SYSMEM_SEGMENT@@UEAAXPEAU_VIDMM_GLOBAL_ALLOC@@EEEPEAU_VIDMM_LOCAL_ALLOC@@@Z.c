/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049610
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0001714 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_ppq @ 0x1C001F838 (Template_ppq.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0056FF0 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0058308 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00594A0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B6D8 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E21C (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E40C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006373C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006D220 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v7; // si
  VIDMM_GLOBAL *v10; // rcx
  struct _VIDMM_LOCAL_ALLOC *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // r8
  VIDMM_GLOBAL *v14; // rbp
  struct _VIDMM_GLOBAL_ALLOC *i; // rsi
  _QWORD *j; // r14
  unsigned int k; // esi
  _DWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  unsigned int PriorityClass; // eax
  __int64 v24; // r8
  char *v25; // r11
  __int64 v26; // rdx
  char *v27; // r10
  VIDMM_GLOBAL *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  VIDMM_GLOBAL *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  VIDMM_GLOBAL *v37; // r9
  signed __int32 v38[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+28h] [rbp-40h]

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v34 + 24) = a2;
    *(_QWORD *)(v34 + 32) = *((int *)a2 + 87);
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v35[3] = 270LL;
    v35[4] = 9LL;
    v35[5] = 0LL;
    v35[6] = 0LL;
    v35[7] = 0LL;
    WdLogEvent5_WdCriticalError(v35);
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
  v14 = this[1];
  if ( (*((_BYTE *)v14 + 40872) & 1) != 0 )
  {
    for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
          i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v14, (struct VIDMM_ALLOC *)(j - 5));
    }
    for ( k = 0; k < *((_DWORD *)v14 + 1604); ++k )
      VIDMM_GLOBAL::FlushPagingBufferInternal(v14, k, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEngines(v14, a2);
  }
  v18 = (_DWORD *)*((_QWORD *)a2 + 65);
  v19 = *v18 & 0x8000000;
  if ( (*v18 & 0x8000000) == 0 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (_DWORD)v19 && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[1], *((_QWORD *)a2 + 1)) >= 0 )
    {
      *((_DWORD *)a2 + 21) |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 65) & 0x4000) != 0 )
        *((_QWORD *)a2 + 46) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, v11);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
      }
    }
  }
  if ( *((_QWORD *)a2 + 19) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v19);
      v36[3] = *((_QWORD *)a2 + 19);
      v36[4] = *((int *)a2 + 37);
      v36[5] = *((unsigned int *)a2 + 36);
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
    WdLogNewEntry5_WdTrace(v19);
  }
  v20 = (_QWORD *)((char *)a2 + 416);
  v21 = *((_QWORD *)a2 + 52);
  v22 = (_QWORD *)*((_QWORD *)a2 + 53);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v21 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416)
    || (_QWORD *)*v22 != v20 )
  {
    __fastfail(3u);
  }
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  *v20 = 0LL;
  *((_QWORD *)a2 + 53) = 0LL;
  if ( v11 && *((_QWORD *)v11 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v11, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 336LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 102));
  v25 = (char *)a2 + 296;
  v26 = PriorityClass;
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 352) += *((_QWORD *)a2 + 2);
  v27 = (char *)*((_QWORD *)a2 + 37);
  while ( v27 != v25 )
  {
    v28 = this[1];
    v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 - 6) + 16LL) + 8LL * *(unsigned int *)(*((_QWORD *)v28 + 3) + 200LL));
    if ( v29 )
      v30 = *(_QWORD *)(v29 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v30 = 0LL;
    VidMmRecordEviction((__int64)v28 + 7128, v30 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v28 + 2));
  }
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
    *((_DWORD *)a2 + 21) |= 0x10u;
    *((_QWORD *)a2 + 59) = *((_QWORD *)this[1] + 576);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v26, v24);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v37 = this[1];
    LODWORD(v39) = *((_DWORD *)this + 4) + 1;
    Template_ppq(v31, &EventPagingOpSysmemUncommit, v32, *((_QWORD *)v37 + 3), a2, v39);
  }
  v33 = this[1];
  _InterlockedOr(v38, 0);
  ++*((_QWORD *)v33 + 5);
}
