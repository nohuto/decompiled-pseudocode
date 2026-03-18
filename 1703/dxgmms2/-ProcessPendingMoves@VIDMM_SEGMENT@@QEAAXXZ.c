/*
 * XREFs of ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A29D8
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C001E418 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001E970 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C002175C (Template_qqqxx.c)
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0021894 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006DE3C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A1554 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00AB610 (VidSchiSuspendFlipQueues.c)
 */

void __fastcall VIDMM_SEGMENT::ProcessPendingMoves(VIDMM_SEGMENT *this)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  _QWORD *v7; // rax
  VIDMM_GLOBAL *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // r14
  struct _VIDMM_DMA_BUFFER *v12; // rdx
  __int64 v13; // r15
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  SIZE_T v18; // r14
  SIZE_T v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  SIZE_T v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v33; // [rsp+58h] [rbp-11h] BYREF
  SIZE_T v34; // [rsp+60h] [rbp-9h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v35; // [rsp+68h] [rbp-1h] BYREF

  if ( !*((_BYTE *)this + 496) )
    return;
  *((_BYTE *)this + 496) = 0;
  v32[0] = 0;
  v33 = 0LL;
  if ( *((_BYTE *)this + 497) )
    VidSchiSuspendFlipQueues(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 416LL));
  if ( *((_QWORD *)this + 57) )
    v2 = *((_QWORD *)this + 55);
  else
    v2 = *((_QWORD *)this + 6);
  v3 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
         *((_QWORD *)this + 22),
         0,
         v2,
         1,
         (__int64)VIDMM_SEGMENT::MoveOneResource,
         (__int64)this,
         0LL,
         (__int64)&v33,
         (__int64)v32);
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4);
    v7[3] = v33;
    v7[4] = v6;
LABEL_33:
    v7[5] = v32[0];
    WdLogEvent5_WdWarning(v7);
    return;
  }
  if ( !*((_QWORD *)this + 57) )
    return;
  v8 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v9 = *((unsigned int *)this + 101);
  v10 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 2192LL);
  v11 = (*(_DWORD *)(v10 + 48 * v9 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v10 + 48 * v9 + 16) & 8) != 0 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v8, v9, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101));
    LOBYTE(v12) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), v12);
  }
  v13 = *((_QWORD *)this + 56);
  v14 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
          *((_QWORD *)this + 22),
          v2,
          v13,
          1,
          (__int64)VIDMM_SEGMENT::MoveOneResource,
          (__int64)this,
          0LL,
          (__int64)&v33,
          (__int64)v32);
  if ( v11 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101));
    VIDMM_GLOBAL::SetVPRPaging(*((VIDMM_GLOBAL **)this + 1), 0LL);
  }
  v15 = *((_QWORD *)this + 22);
  v34 = 0LL;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       v15,
                       v2,
                       v13,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v34,
                       (__int64)&v33,
                       (__int64)v32) != -1073741823 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v31 + 24) = 6374LL;
    WdLogEvent5_WdAssertion(v31);
    goto LABEL_31;
  }
  v18 = *((_QWORD *)this + 55);
  v19 = ~*((_QWORD *)this + 53) & v34;
  v34 = v19;
  if ( v19 <= v18 )
  {
LABEL_31:
    if ( v14 >= 0 )
      return;
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16);
    v7[3] = v33;
    v7[4] = v14;
    goto LABEL_33;
  }
  memset(&v35, 0, sizeof(v35));
  v20 = (*((_DWORD *)this + 20) & 0x1000) == 0;
  v35.PhysicalAdapterIndex = *((_DWORD *)this + 101);
  if ( v20 )
    v35.SegmentIndex = *((_DWORD *)this + 4) + 1;
  else
    v35.SegmentIndex = 0;
  v21 = *((_QWORD *)this + 1);
  v35.CurrentSize = *((_QWORD *)this + 57);
  v22 = *((_QWORD *)this + 56) - v19;
  v35.CurrentStartOffset = v18;
  v35.NewSize = v22;
  *((_QWORD *)this + 57) = v22;
  v35.NewStartOffset = v19;
  *((_QWORD *)this + 55) = v19;
  if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v21 + 41024)) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q(v24, &EventPerformanceWarning, v25, 24);
    KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
  }
  VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v23, v25);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101));
  VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v35);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_qqqxx(
      v27,
      v26,
      v28,
      v35.PhysicalAdapterIndex,
      v35.SegmentIndex,
      v35.VprIndex,
      v35.NewStartOffset,
      v35.NewSize);
  v14 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2288LL),
          &v35);
  if ( v14 < 0 )
  {
    if ( g_IsInternalRelease )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v29);
      v30[3] = 270LL;
      v30[4] = 9LL;
      v30[5] = 0LL;
      v30[6] = 0LL;
      v30[7] = 0LL;
      WdLogEvent5_WdCriticalError(v30);
    }
    goto LABEL_31;
  }
}
