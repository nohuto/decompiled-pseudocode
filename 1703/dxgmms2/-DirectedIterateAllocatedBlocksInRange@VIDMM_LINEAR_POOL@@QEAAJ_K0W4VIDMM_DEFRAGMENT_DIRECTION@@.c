/*
 * XREFs of ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A1154 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A17A0 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A2864 (-MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A29D8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00A40CC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 (__fastcall *a5)(__int64, unsigned __int64, __int64, __int64),
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD *v12; // rbx
  unsigned int v13; // r8d
  _QWORD *v14; // rbp
  unsigned __int64 *v15; // rdi

  if ( a4 )
    v12 = *(_QWORD **)(a1 + 80);
  else
    v12 = *(_QWORD **)(a1 + 72);
  v13 = 0;
  v14 = (_QWORD *)(a1 + 72);
  while ( v12 != v14 )
  {
    v15 = v12 - 5;
    if ( a4 )
      v12 = (_QWORD *)v12[1];
    else
      v12 = (_QWORD *)*v12;
    if ( *v15 + v15[1] > a2 )
    {
      if ( *v15 < a3 )
      {
        if ( (unsigned __int8)(*((_BYTE *)v15 + 56) - 3) <= 1u )
        {
          v13 = a5(a6, v15[2], a9, a7);
          if ( (v13 & 0x80000000) != 0 )
          {
            *a8 = v15[2];
            return v13;
          }
        }
      }
      else if ( !a4 )
      {
        return v13;
      }
    }
    else if ( a4 )
    {
      return v13;
    }
  }
  return v13;
}
