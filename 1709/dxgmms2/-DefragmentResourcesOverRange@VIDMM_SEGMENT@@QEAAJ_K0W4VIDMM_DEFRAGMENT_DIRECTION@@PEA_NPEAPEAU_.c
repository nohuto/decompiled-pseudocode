/*
 * XREFs of ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00AA00C
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009BDF4 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAE3C (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C004C008 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009A650 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00B1A40 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00B1E3C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00B2D64 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::DefragmentResourcesOverRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  VIDMM_GLOBAL *v10; // rcx
  bool (__fastcall *MoveableResourceCallback)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v12; // rcx
  bool v14; // dl
  VIDMM_GLOBAL *v15; // r11
  __int64 v16; // r10
  __int64 v17; // rax
  bool v18; // si
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  _QWORD v22[16]; // [rsp+58h] [rbp-51h] BYREF

  VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(*(VIDMM_GLOBAL **)(a1 + 8));
  memset(v22, 0, 0x78uLL);
  v10 = *(VIDMM_GLOBAL **)(a1 + 8);
  v22[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v22[0] = a2;
  v22[1] = a3;
  LODWORD(v22[2]) = a4;
  MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v10);
  v12 = *(VIDMM_LINEAR_POOL **)(a1 + 152);
  LODWORD(v22[8]) |= 4u;
  v22[4] = MoveableResourceCallback;
  v22[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v22[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v22[7] = VIDMM_SEGMENT::GetAlignmentCB;
  VIDMM_LINEAR_POOL::DefragmentRange(v12, (struct VIDMM_DEFRAGMENT_ARGS *)v22);
  if ( !*(_BYTE *)(a1 + 472) )
    return 0LL;
  *(_BYTE *)(a1 + 472) = 0;
  v14 = a2 == *(_QWORD *)(a1 + 416) && a3 == *(_QWORD *)(a1 + 424);
  v15 = *(VIDMM_GLOBAL **)(a1 + 8);
  v16 = *(unsigned int *)(a1 + 380);
  v17 = *(_QWORD *)(*((_QWORD *)v15 + 3) + 2216LL);
  v18 = (*(_DWORD *)(v17 + 48 * v16 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v17 + 48 * v16 + 16) & 8) != 0 && v14 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v15, v16, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380));
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 40873LL) |= 4u;
  }
  v20 = (int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
               *(_QWORD *)(a1 + 152),
               a2,
               a3,
               a4,
               (__int64)VIDMM_SEGMENT::MoveOneResource,
               a1,
               0LL,
               a6,
               a5);
  if ( v18 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 380));
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 40873LL) &= ~4u;
  }
  if ( (int)v20 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdWarning(v21);
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*(_QWORD *)(a1 + 152), a2, a3, a4);
  }
  return (unsigned int)v20;
}
