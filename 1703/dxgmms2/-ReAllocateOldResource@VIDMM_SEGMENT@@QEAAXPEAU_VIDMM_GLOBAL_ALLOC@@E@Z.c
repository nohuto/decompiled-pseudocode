/*
 * XREFs of ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A2E00
 * Callers:
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0092670 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C001F194 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004B3B0 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00A9324 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // r8
  int v12; // esi
  VIDMM_SEGMENT *v13; // rax
  struct _VIDMM_GLOBAL_ALLOC **v14; // rdx
  VIDMM_SEGMENT **v15; // rcx
  VIDMM_SEGMENT **v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-18h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v5 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = a2;
  }
  v6 = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 30) += v6;
  v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 41200LL) + 280LL * *((unsigned int *)this + 101);
  *(_QWORD *)(v7 + 8LL * *((int *)this + 125) + 248) += v6;
  *((_QWORD *)this + 31) += *((_QWORD *)a2 + 2);
  if ( *((_DWORD *)this + 98) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
  {
    v8 = *((_QWORD *)this + 32);
    v9 = v8 + *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 32) = v9;
    if ( v8 <= qword_1C003C3D8 && v9 > qword_1C003C3D8 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 1) + 40008LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 40072LL));
    if ( !v8 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 1), this);
  }
  ++*((_DWORD *)this + 86);
  ++*((_DWORD *)this + 87);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v21 = *((_DWORD *)this + 4) + 1;
    Template_pqx(
      v21,
      &TotalBytesResidentInSegment,
      a3,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v21,
      *((_QWORD *)this + 31));
  }
  if ( (*((_DWORD *)this + 20) & 0x1001) != 0 )
  {
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
      *((_QWORD *)a2 + 2));
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture,
      *((_QWORD *)a2 + 2));
    *(_QWORD *)(*((_QWORD *)this + 1) + 40152LL) += *((_QWORD *)a2 + 2);
  }
  v10 = *((_DWORD *)this + 20);
  if ( (v10 & 0x20) != 0 )
    v11 = *((_QWORD *)a2 + 3);
  else
    v11 = *((_QWORD *)a2 + 2);
  if ( (v10 & 0x1000) != 0 )
  {
    v12 = 0;
    *((_QWORD *)a2 + 19) = 1LL;
  }
  else
  {
    v12 = VIDMM_LINEAR_POOL::AllocateAt(
            *((VIDMM_LINEAR_POOL **)this + 22),
            *(union _LARGE_INTEGER *)((char *)a2 + 144),
            v11,
            a2,
            (void **)a2 + 19);
  }
  v13 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416);
  v14 = (struct _VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 52);
  v15 = (VIDMM_SEGMENT **)*((_QWORD *)a2 + 53);
  if ( v14[1] != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416) || *v15 != v13 )
    __fastfail(3u);
  *v15 = (VIDMM_SEGMENT *)v14;
  v14[1] = (struct _VIDMM_GLOBAL_ALLOC *)v15;
  v16 = (VIDMM_SEGMENT **)*((_QWORD *)this + 24);
  if ( *v16 != (VIDMM_SEGMENT *)((char *)this + 184) )
    __fastfail(3u);
  *(_QWORD *)v13 = (char *)this + 184;
  *((_QWORD *)a2 + 53) = v16;
  *v16 = v13;
  *((_QWORD *)this + 24) = v13;
  VIDMM_SEGMENT::MarkResourcesForEviction((VIDMM_LINEAR_POOL **)this, a2, 0LL, 0LL);
  if ( v12 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v17, v19);
    v20[7] = 0LL;
    v20[6] = v12;
    v20[3] = 270LL;
    v20[4] = 6LL;
    v20[5] = a2;
    WdLogEvent5_WdCriticalError(v20);
  }
}
