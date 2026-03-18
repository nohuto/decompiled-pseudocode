/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AEA20
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C000582C (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0005984 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055F90 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0056234 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005E8F0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C005FCC4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C005FD14 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063038 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00653C0 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0065588 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006B4F4 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0074528 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A1068 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
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
  __int64 v13; // rcx
  int v14; // edx
  char v15; // bl
  VIDMM_GLOBAL *v16; // rdi
  __int64 v17; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _DWORD *v22; // rbx
  __int64 v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int PriorityClass; // eax
  __int64 v29; // r8
  _QWORD **v30; // rdi
  _QWORD **v31; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  _QWORD *i; // r9
  __int64 v36; // rcx
  __int64 v37; // rcx
  signed __int32 v38[8]; // [rsp+0h] [rbp-58h] BYREF

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
  v13 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v13 + 40675) )
  {
    VIDMM_GLOBAL::IoMmuUnmapAllocation((VIDMM_GLOBAL *)v13, a2, v12);
    v13 = *((_QWORD *)this + 1);
  }
  v14 = *((_DWORD *)a2 + 19);
  v15 = 0;
  if ( (v14 & 0x100000) == 0 )
    v15 = v7;
  if ( *(_DWORD *)(v13 + 40664) )
  {
    if ( (v14 & 0x8000000) != 0 )
    {
      VIDMM_GLOBAL::NotifyContextAllocationEviction((VIDMM_GLOBAL *)v13, a2);
      v13 = *((_QWORD *)this + 1);
    }
    if ( (**((_DWORD **)a2 + 63) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)v13, a2, 0LL);
    if ( v15 )
      (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(
        this,
        a2);
    if ( (*((_DWORD *)a2 + 19) & 0x400000) == 0 )
    {
      v16 = *(VIDMM_GLOBAL **)this;
      v17 = *((_QWORD *)a2 + 18) / 4096LL;
      FullMDL = VidMmGetFullMDL(a2, v12);
      (*((void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))v16
       + 28))(
        this,
        a2,
        *((_QWORD *)a2 + 1) >> 12,
        v17,
        v17,
        FullMDL,
        0);
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v19, v20);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = v14 | 0x100000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 1);
  v22 = (_DWORD *)((char *)a2 + 84);
  if ( (**((_DWORD **)a2 + 63) & 0x8000000) == 0 )
    goto LABEL_29;
  if ( (*v22 & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
    {
      *v22 |= 2u;
      goto LABEL_33;
    }
LABEL_29:
    if ( (**((_DWORD **)a2 + 63) & 0x4000) != 0 )
      *((_QWORD *)a2 + 46) = 0LL;
    VIDMM_SEGMENT::UnlockAllocationBackingStore(*((struct VIDMM_GLOBAL **)this + 1), a2, v12);
    if ( (*v22 & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
      *v22 &= ~2u;
    }
  }
LABEL_33:
  v23 = *((_QWORD *)a2 + 19);
  if ( v23 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v21);
      v24[3] = *((_QWORD *)a2 + 19);
      v24[4] = *((int *)a2 + 37);
      v24[5] = *((unsigned int *)a2 + 36);
      v23 = *((_QWORD *)a2 + 19);
    }
    (*(void (__fastcall **)(VIDMM_APERTURE_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))(*(_QWORD *)this + 24LL))(
      this,
      a2,
      v23,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v21);
  }
  v25 = (_QWORD *)((char *)a2 + 384);
  v26 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v26 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v27 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v27 != v25) )
  {
    __fastfail(3u);
  }
  *v27 = v26;
  *(_QWORD *)(v26 + 8) = v27;
  *v25 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v12 && *((_QWORD *)v12 + 1) && (*v22 & 4) == 0 )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v12, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 94));
  v30 = (_QWORD **)((char *)a2 + 296);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v31 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v31 != v30 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              (VIDMM_PROCESS *)*(v31 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 200LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v33 + 7704, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v33 + 8));
  }
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = 0LL;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
    *v22 |= 0x10u;
    *((_QWORD *)a2 + 55) = *(_QWORD *)(*((_QWORD *)this + 1) + 4608LL);
  }
  v34 = 1560LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v34 + *(_QWORD *)(*((_QWORD *)this + 1) + 40720LL) + 1544) -= *((_QWORD *)a2 + 2);
  for ( i = *v30; i != v30; i = (_QWORD *)*i )
  {
    v34 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 200LL);
    v29 = *(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL) + 8 * v34);
    v36 = *(_QWORD *)(v29 + 48) + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v36 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v34, v29);
  v37 = *((_QWORD *)this + 1);
  _InterlockedOr(v38, 0);
  ++*(_QWORD *)(v37 + 40);
}
