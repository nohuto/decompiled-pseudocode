/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C009EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0001714 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001964 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004911C (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C004E4A4 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00582B8 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0058308 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A34C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B6D8 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E21C (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E40C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006373C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006D220 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0091788 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C00A22B8 (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v7; // di
  __int64 v10; // rax
  _QWORD *v11; // rax
  struct _VIDMM_LOCAL_ALLOC *v12; // rbp
  VIDMM_GLOBAL *v13; // rcx
  char v14; // bl
  VIDMM_GLOBAL *v15; // rdi
  __int64 v16; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  unsigned int PriorityClass; // eax
  __int64 v27; // r8
  char *v28; // r11
  char *v29; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v31; // r9
  void *v32; // rdx
  __int64 v33; // rax
  signed __int32 v34[8]; // [rsp+0h] [rbp-58h] BYREF

  v7 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = *((int *)a2 + 87);
  }
  if ( *((_DWORD *)a2 + 40) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v11[3] = 270LL;
    v11[4] = 9LL;
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  v12 = a6;
  if ( !a6 )
    v12 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v13 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  v14 = 0;
  if ( ((unsigned int)v13 & 0x100000) == 0 )
    v14 = v7;
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 40088LL) )
  {
    if ( ((unsigned int)v13 & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v13, a2);
    if ( (**((_DWORD **)a2 + 65) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), a2, 0LL);
    if ( v14 )
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(
        this,
        a2);
    if ( (*((_DWORD *)a2 + 19) & 0x400000) == 0 )
    {
      v15 = *(VIDMM_GLOBAL **)this;
      v16 = *((_QWORD *)a2 + 18) / 4096LL;
      FullMDL = VidMmGetFullMDL(a2, v12);
      (*((void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))v15
       + 26))(
        this,
        a2,
        *((_QWORD *)a2 + 1) >> 12,
        v16,
        v16,
        FullMDL,
        0);
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v18, v19);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = (unsigned int)v13 | 0x100000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 1);
  v20 = (_DWORD *)*((_QWORD *)a2 + 65);
  v21 = *v20 & 0x8000000;
  if ( (*v20 & 0x8000000) == 0 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (_DWORD)v21
      && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      *((_DWORD *)a2 + 21) |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 65) & 0x4000) != 0 )
        *((_QWORD *)a2 + 46) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, v12);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 21) &= ~2u;
      }
    }
  }
  if ( *((_QWORD *)a2 + 19) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
      v22[3] = *((_QWORD *)a2 + 19);
      v22[4] = *((int *)a2 + 37);
      v22[5] = *((unsigned int *)a2 + 36);
    }
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      *((_QWORD *)a2 + 19),
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v21);
  }
  v23 = (_QWORD *)((char *)a2 + 416);
  v24 = *((_QWORD *)a2 + 52);
  v25 = (_QWORD *)*((_QWORD *)a2 + 53);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v24 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416)
    || (_QWORD *)*v25 != v23 )
  {
    __fastfail(3u);
  }
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  *v23 = 0LL;
  *((_QWORD *)a2 + 53) = 0LL;
  if ( v12 && *((_QWORD *)v12 + 1) && (*((_DWORD *)a2 + 21) & 4) == 0 )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v12, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 336LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 102));
  v28 = (char *)a2 + 296;
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 352) += *((_QWORD *)a2 + 2);
  v29 = (char *)*((_QWORD *)a2 + 37);
  while ( v29 != v28 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              *((VIDMM_PROCESS **)v29 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 200LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v31 + 7128, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v31 + 8));
  }
  *(_WORD *)(*((_QWORD *)a2 + 65) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 65) + 24LL) = 0LL;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  v32 = (void *)*((_QWORD *)a2 + 50);
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( v32 )
  {
    VIDMM_SEGMENT::MakeRangePageable(this, v32);
    *((_QWORD *)a2 + 50) = 0LL;
  }
  if ( !a5 )
  {
    if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
    {
      VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
      *((_DWORD *)a2 + 21) |= 0x10u;
      *((_QWORD *)a2 + 59) = *(_QWORD *)(*((_QWORD *)this + 1) + 4608LL);
    }
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), (__int64)v32, v27);
  v33 = *((_QWORD *)this + 1);
  _InterlockedOr(v34, 0);
  ++*(_QWORD *)(v33 + 40);
}
