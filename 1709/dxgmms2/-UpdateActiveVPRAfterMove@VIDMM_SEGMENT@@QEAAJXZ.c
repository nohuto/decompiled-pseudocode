/*
 * XREFs of ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00AC660
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009BDF4 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0020054 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00206F8 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp @ 0x1C00237DC (McTemplateK0qqqxxp.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00799E4 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00A9CB4 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00B1E3C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
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
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  _BYTE v19[8]; // [rsp+58h] [rbp-9h] BYREF
  SIZE_T v20; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp+7h] BYREF
  struct _DXGKARG_SETVIDEOPROTECTEDREGION v22; // [rsp+70h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 53);
  v2 = *((_QWORD *)this + 52);
  v4 = 0;
  v20 = 0LL;
  v19[0] = 0;
  if ( (unsigned int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                       *((_QWORD *)this + 19),
                       v2,
                       v1,
                       0,
                       (__int64)VIDMM_SEGMENT::CheckLowestAddress,
                       (__int64)this,
                       (__int64)&v20,
                       (__int64)v21,
                       (__int64)v19) == -1073741823 )
  {
    v5 = *((_QWORD *)this + 52);
    v6 = v5 & ~*((_QWORD *)this + 50);
    v20 = v6;
    if ( v6 > v5 )
    {
      memset(&v22, 0, sizeof(v22));
      v7 = (*((_DWORD *)this + 20) & 0x1000) == 0;
      v22.PhysicalAdapterIndex = *((_DWORD *)this + 95);
      if ( v7 )
        v22.SegmentIndex = *((_DWORD *)this + 4) + 1;
      else
        v22.SegmentIndex = 0;
      v8 = *((_QWORD *)this + 1);
      v22.CurrentSize = *((_QWORD *)this + 54);
      v9 = *((_QWORD *)this + 53) - v6;
      v22.CurrentStartOffset = v5;
      v22.NewSize = v9;
      *((_QWORD *)this + 54) = v9;
      v22.NewStartOffset = v6;
      *((_QWORD *)this + 52) = v6;
      if ( (unsigned int)DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE *)(v8 + 41024)) )
      {
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v11, (__int64)&EventPerformanceWarning, v12, 24);
        KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
      }
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(*((VIDMM_GLOBAL **)this + 1), v10, v12);
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, &v22);
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqxxp(
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
          v13,
          v14,
          v22.PhysicalAdapterIndex,
          v22.SegmentIndex,
          v22.VprIndex,
          v22.NewStartOffset,
          v22.NewSize,
          *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      v4 = ADAPTER_RENDER::DdiSetVideoProtectedRegion(
             *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2312LL),
             &v22);
      if ( v4 < 0 && g_IsInternalRelease )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(*(_QWORD *)&g_IsInternalRelease, v15, v16);
        v17[5] = 0LL;
        v17[6] = 0LL;
        v17[7] = 0LL;
        v17[3] = 270LL;
        v17[4] = 9LL;
        WdLogEvent5_WdCriticalError(v17);
      }
    }
  }
  return (unsigned int)v4;
}
