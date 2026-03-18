/*
 * XREFs of ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A17A0
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00942F0 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A2940 (-MoveResourcesForAllocationPlacement@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_ALLOC@@_K1W4VIDMM_DEFRAGMENT_.c)
 * Callees:
 *     ?SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0021894 (-SetVPRPaging@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C00A9378 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00AA3E4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00AB610 (VidSchiSuspendFlipQueues.c)
 */

__int64 __fastcall VIDMM_SEGMENT::DefragmentResourcesOverRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  bool v11; // zf
  bool v12; // dl
  VIDMM_GLOBAL *v13; // r11
  __int64 v14; // r10
  __int64 v15; // rax
  bool v16; // r14
  struct _VIDMM_DMA_BUFFER *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax

  VIDMM_LINEAR_POOL::DefragmentRange(*(_QWORD *)(a1 + 176));
  if ( !*(_BYTE *)(a1 + 496) )
    return 0LL;
  v11 = *(_BYTE *)(a1 + 497) == 0;
  *(_BYTE *)(a1 + 496) = 0;
  if ( !v11 )
    VidSchiSuspendFlipQueues(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 416LL));
  v12 = a2 == *(_QWORD *)(a1 + 440) && a3 == *(_QWORD *)(a1 + 448);
  v13 = *(VIDMM_GLOBAL **)(a1 + 8);
  v14 = *(unsigned int *)(a1 + 404);
  v15 = *(_QWORD *)(*((_QWORD *)v13 + 3) + 2192LL);
  v16 = (*(_DWORD *)(v15 + 48 * v14 + 16) & 8) != 0;
  if ( (*(_DWORD *)(v15 + 48 * v14 + 16) & 8) != 0 && v12 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(v13, v14, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 404));
    LOBYTE(v17) = 1;
    VIDMM_GLOBAL::SetVPRPaging(*(VIDMM_GLOBAL **)(a1 + 8), v17);
  }
  v20 = (int)VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
               *(_QWORD *)(a1 + 176),
               a2,
               a3,
               a4,
               (__int64)VIDMM_SEGMENT::MoveOneResource,
               a1,
               0LL,
               a6,
               a5);
  if ( v16 )
  {
    VIDMM_GLOBAL::FlushPagingBufferInternal(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 404), 0, 0LL, 0LL, 0, 1);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*(VIDMM_GLOBAL **)(a1 + 8), *(_DWORD *)(a1 + 404));
    VIDMM_GLOBAL::SetVPRPaging(*(VIDMM_GLOBAL **)(a1 + 8), 0LL);
  }
  if ( (int)v20 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18);
    *(_QWORD *)(v21 + 24) = v20;
    WdLogEvent5_WdWarning(v21);
    VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*(_QWORD *)(a1 + 176), a2, a3, a4);
  }
  return (unsigned int)v20;
}
