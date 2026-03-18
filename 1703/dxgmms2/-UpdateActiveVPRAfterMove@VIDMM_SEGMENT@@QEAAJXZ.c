/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00A40CC
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00942F0 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C001E418 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001E970 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_qqqxx @ 0x1C002175C (Template_qqqxx.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006DE3C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A1554 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::UpdateActiveVPRAfterMove(VIDMM_SEGMENT *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  int v4; // esi
  SIZE_T v5; // r14
  SIZE_T v6; // rdi
  bool v7; // zf
  __int64 v8; // rcx
  SIZE_T v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rax
  _BYTE v20[8]; // [rsp+58h] [rbp-9h] BYREF
  SIZE_T v21; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp+7h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v23; // [rsp+70h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 56);
  v2 = *((_QWORD *)this + 55);
  v4 = 0;
  v21 = 0LL;
  v20[0] = 0;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       *((_QWORD *)this + 22),
                       v2,
                       v1,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v21,
                       (__int64)v22,
                       (__int64)v20) == -1073741823 )
  {
    v5 = *((_QWORD *)this + 55);
    v6 = v5 & ~*((_QWORD *)this + 53);
    v21 = v6;
    if ( v6 > v5 )
    {
      memset(&v23, 0, sizeof(v23));
      v7 = (*((_DWORD *)this + 20) & 0x1000) == 0;
      v23.PhysicalAdapterIndex = *((_DWORD *)this + 101);
      if ( v7 )
        v23.SegmentIndex = *((_DWORD *)this + 4) + 1;
      else
        v23.SegmentIndex = 0;
      v8 = *((_QWORD *)this + 1);
      v23.CurrentSize = *((_QWORD *)this + 57);
      v9 = *((_QWORD *)this + 56) - v6;
      v23.CurrentStartOffset = v5;
      v23.NewSize = v9;
      *((_QWORD *)this + 57) = v9;
      v23.NewStartOffset = v6;
      *((_QWORD *)this + 55) = v6;
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v8 + 41024)) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v11, &EventPerformanceWarning, v12, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v10, v12);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 101));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v23);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqxx(
          v14,
          v13,
          v15,
          v23.PhysicalAdapterIndex,
          v23.SegmentIndex,
          v23.VprIndex,
          v23.NewStartOffset,
          v23.NewSize);
      v4 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2288LL),
             &v23);
      if ( v4 < 0 && g_IsInternalRelease )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(*(_QWORD *)&g_IsInternalRelease, v16, v17);
        v18[5] = 0LL;
        v18[6] = 0LL;
        v18[7] = 0LL;
        v18[3] = 270LL;
        v18[4] = 9LL;
        WdLogEvent5_WdCriticalError(v18);
      }
    }
  }
  return (unsigned int)v4;
}
