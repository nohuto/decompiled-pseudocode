/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AAF74
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0020054 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00206F8 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C00237DC (McTemplateK0qqqxxp.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0023930 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00799E4 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A9CB4 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00B1E3C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  bool v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r15
  int v14; // esi
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  SIZE_T v19; // r14
  SIZE_T v20; // rdi
  bool v21; // zf
  __int64 v22; // rcx
  SIZE_T v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
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
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v4);
    v6[3] = v34;
    v6[4] = v5;
LABEL_31:
    v6[5] = v33[0];
    WdLogEvent5_WdWarning(v6);
    return;
  }
  if ( !*((_QWORD *)this + 54) )
    return;
  v7 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v8 = *((unsigned int *)this + 95);
  v9 = *(_QWORD *)(*((_QWORD *)v7 + 3) + 2216LL);
  v10 = (*(_DWORD *)(v9 + 48 * v8 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v9 + 48 * v8 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v7, v8, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    LOBYTE(v11) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v11, v12);
  }
  v13 = *((_QWORD *)this + 53);
  v14 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
          *((_QWORD *)this + 19),
          v2,
          v13,
          1,
          (__int64)VIDMM_SEGMENT::MoveOneResource,
          (__int64)this,
          0LL,
          (__int64)&v34,
          (__int64)v33);
  if ( v10 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL, v15);
  }
  v16 = *((_QWORD *)this + 19);
  v35 = 0LL;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v16,
                       v2,
                       v13,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v35,
                       (__int64)&v34,
                       (__int64)v33) != -1073741823 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v32 + 24) = 6158LL;
    WdLogEvent5_WdAssertion(v32);
    goto LABEL_29;
  }
  v19 = *((_QWORD *)this + 52);
  v20 = ~*((_QWORD *)this + 50) & v35;
  v35 = v20;
  if ( v20 <= v19 )
  {
LABEL_29:
    if ( v14 >= 0 )
      return;
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(v18);
    v6[3] = v34;
    v6[4] = v14;
    goto LABEL_31;
  }
  memset(&v36, 0, sizeof(v36));
  v21 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v36.PhysicalAdapterIndex = *((_DWORD *)this + 95);
  if ( v21 )
    v36.SegmentIndex = *((_DWORD *)this + 4) + 1;
  else
    v36.SegmentIndex = 0;
  v22 = *((_QWORD *)this + 1);
  v36.CurrentSize = *((_QWORD *)this + 54);
  v23 = *((_QWORD *)this + 53) - v20;
  v36.CurrentStartOffset = v19;
  v36.NewSize = v23;
  *((_QWORD *)this + 54) = v23;
  v36.NewStartOffset = v20;
  *((_QWORD *)this + 52) = v20;
  if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v22 + 41024)) )
  {
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v25, (__int64)&EventPerformanceWarning, v26, 24);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
  }
  VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v24, v26);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v36);
  if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqxxp(
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v27,
      v28,
      v36.PhysicalAdapterIndex,
      v36.SegmentIndex,
      v36.VprIndex,
      v36.NewStartOffset,
      v36.NewSize,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
  v14 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2312LL),
          &v36);
  if ( v14 < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v29, v30);
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
