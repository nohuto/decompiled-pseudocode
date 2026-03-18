/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C004E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001100 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001638 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0001738 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001B34 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059DE8 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00611B0 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0072A24 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  unsigned __int8 v6; // bp
  struct _VIDMM_LOCAL_ALLOC *v9; // rsi
  int v10; // r12d
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v17; // r15
  _QWORD **v18; // r10
  VIDMM_GLOBAL *v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r11
  __int64 v23; // rcx
  VIDMM_GLOBAL *v24; // rbp
  _QWORD *i; // rdi
  _QWORD *j; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rax

  v6 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_DWORD *)a2 + 40) && g_IsInternalRelease )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v29[3] = 270LL;
    v29[4] = 9LL;
    v29[5] = 0LL;
    v29[6] = 0LL;
    v29[7] = 0LL;
    WdLogEvent5_WdCriticalError(v29);
  }
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 480, 0LL);
  v9 = a6;
  if ( !a6 )
    v9 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
  v10 = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    v10 = 1;
    if ( *((_BYTE *)a2 + 98) )
      *((_BYTE *)a2 + 97) = 0;
    v6 = 0;
  }
  VIDMM_MEMORY_SEGMENT::TransferToSystem((VIDMM_MEMORY_SEGMENT *)this, a2, v6, v9, 0);
  if ( *((_QWORD *)a2 + 56) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(this[61], a2);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(this[61], a2);
  }
  v11 = *((_QWORD *)a2 + 19);
  if ( v11 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*this + 3))(
      this,
      a2,
      v11,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 19) = 0LL;
  }
  v12 = (_QWORD *)((char *)a2 + 384);
  v13 = *((_QWORD *)a2 + 48);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v13 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (v14 = (_QWORD *)*((_QWORD *)a2 + 49), (_QWORD *)*v14 != v12) )
  {
    __fastfail(3u);
  }
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v9 && *((_QWORD *)v9 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v9, (__int64)this, *((_QWORD *)a2 + 2), 1);
  v15 = 1552LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v15 + *((_QWORD *)this[1] + 5021) + 1528) -= *((_QWORD *)a2 + 2);
  this[39] = (VIDMM_GLOBAL *)((char *)this[39] + *((_QWORD *)a2 + 2));
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94));
  v17 = (_QWORD **)((char *)a2 + 296);
  this[PriorityClass + 41] = (VIDMM_GLOBAL *)((char *)this[PriorityClass + 41] + *((_QWORD *)a2 + 2));
  v18 = (_QWORD **)*((_QWORD *)a2 + 37);
  while ( v18 != v17 )
  {
    v19 = this[1];
    v20 = *(_QWORD *)((*(v18 - 6))[2] + 8LL * *(unsigned int *)(*((_QWORD *)v19 + 3) + 200LL));
    if ( v20 )
      v21 = *(_QWORD *)(v20 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v21 = 0LL;
    VidMmRecordEviction((__int64)v19 + 7128, v21 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v19 + 2));
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 - 48) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 200LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v23 + 232) -= *((_QWORD *)a2 + 2);
  }
  *((_QWORD *)this[1] + 5020) -= *((_QWORD *)a2 + 2) >> 12;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_DWORD *)a2 + 32) = 0;
  v24 = this[1];
  if ( (*((_BYTE *)v24 + 40872) & 1) != 0 )
  {
    for ( i = *v17; i != v17; i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
        VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v24, (struct VIDMM_ALLOC *)(j - 5));
    }
  }
  if ( !v10 )
  {
    *((_DWORD *)a2 + 21) &= ~8u;
    *((_BYTE *)a2 + 98) = 0;
  }
  ExReleasePushLockExclusiveEx((char *)a2 + 480, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v27, v28);
}
