/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B3410
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0022578 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0022C8C (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C002618C (McTemplateK0qqqxxp.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00262E0 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009DF90 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00B1DE0 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00BA7A8 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rax
  bool v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r15
  int v15; // esi
  unsigned __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  SIZE_T v20; // r14
  SIZE_T v21; // rdi
  bool v22; // zf
  __int64 v23; // rcx
  SIZE_T v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rax
  _BYTE v33[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v34; // [rsp+58h] [rbp-11h] BYREF
  SIZE_T v35; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v36; // [rsp+68h] [rbp-1h] BYREF

  if ( !*((_BYTE *)this + 472) )
    return;
  *((_BYTE *)this + 472) = 0;
  v33[0] = 0;
  v34 = 0LL;
  if ( *((_QWORD *)this + 54) )
    v2 = *((_QWORD *)this + 52);
  else
    v2 = *((_QWORD *)this + 6);
  v3 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
         *((_QWORD *)this + 19),
         0,
         v2,
         1,
         (__int64)VIDMM_SEGMENT::MoveOneResource,
         (__int64)this,
         0LL,
         (__int64)&v34,
         (__int64)v33);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4);
    v7[3] = v34;
    v7[4] = v6;
LABEL_31:
    v7[5] = v33[0];
    WdLogEvent5_WdWarning(v7);
    return;
  }
  if ( !*((_QWORD *)this + 54) )
    return;
  v8 = *((unsigned int *)this + 95);
  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v10 = *(_QWORD *)(*((_QWORD *)v9 + 3) + 2360LL);
  v11 = (*(_DWORD *)(v10 + 352 * v8 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v10 + 352 * v8 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v9, v8, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    LOBYTE(v12) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v12, v13);
  }
  v14 = *((_QWORD *)this + 53);
  v15 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
          *((_QWORD *)this + 19),
          v2,
          v14,
          1,
          (__int64)VIDMM_SEGMENT::MoveOneResource,
          (__int64)this,
          0LL,
          (__int64)&v34,
          (__int64)v33);
  if ( v11 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL, v16);
  }
  v17 = *((_QWORD *)this + 19);
  v35 = 0LL;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v17,
                       v2,
                       v14,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v35,
                       (__int64)&v34,
                       (__int64)v33) != -1073741823 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v32 + 24) = 6160LL;
    WdLogEvent5_WdAssertion(v32);
    goto LABEL_29;
  }
  v20 = *((_QWORD *)this + 52);
  v21 = v35 & ~*((_QWORD *)this + 50);
  v35 = v21;
  if ( v21 <= v20 )
  {
LABEL_29:
    if ( v15 >= 0 )
      return;
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18);
    v7[3] = v34;
    v7[4] = v15;
    goto LABEL_31;
  }
  memset(&v36, 0, sizeof(v36));
  v22 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v36.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  if ( v22 )
    v36.SegmentIndex = *((_DWORD *)this + 4) + 1;
  else
    v36.SegmentIndex = 0;
  v23 = *((_QWORD *)this + 1);
  v36.CurrentSize = *((_QWORD *)this + 54);
  v24 = *((_QWORD *)this + 53) - v21;
  v36.CurrentStartOffset = v20;
  v36.NewSize = v24;
  *((_QWORD *)this + 54) = v24;
  v36.NewStartOffset = v21;
  *((_QWORD *)this + 52) = v21;
  if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v23 + 41600)) )
  {
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v26, (__int64)&EventPerformanceWarning, v27, 24);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41640LL), Executive, 0, 0, 0LL);
  }
  VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v25, v27);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v36);
  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqxxp(
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v28,
      v29,
      v36.PhysicalAdapterIndex,
      v36.SegmentIndex,
      v36.VprIndex,
      v36.NewStartOffset,
      v36.NewSize,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v15 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2464LL),
          &v36);
  if ( v15 < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18, v30);
      v31[3] = 270LL;
      v31[4] = 9LL;
      v31[5] = 0LL;
      v31[6] = 0LL;
      v31[7] = 0LL;
      WdLogEvent5_WdCriticalError(v31);
    }
    goto LABEL_29;
  }
}
