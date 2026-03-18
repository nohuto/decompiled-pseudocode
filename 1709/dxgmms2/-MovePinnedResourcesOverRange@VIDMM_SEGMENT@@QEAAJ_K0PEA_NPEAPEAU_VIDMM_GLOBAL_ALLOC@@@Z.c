/*
 * XREFs of ?MovePinnedResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAD60
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009BDF4 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 * Callees:
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00B1E3C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::MovePinnedResourcesOverRange(
        VIDMM_SEGMENT *this,
        __int64 a2,
        __int64 a3,
        bool *a4,
        struct _VIDMM_GLOBAL_ALLOC **a5)
{
  __int64 v7; // rcx
  int v8; // esi
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  _QWORD v17[2]; // [rsp+50h] [rbp-28h] BYREF

  v7 = *((_QWORD *)this + 19);
  v8 = a3;
  v9 = a2;
  v17[0] = a2;
  v17[1] = a3;
  v10 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
          v7,
          a2,
          a3,
          0,
          (__int64)VIDMM_SEGMENT::ReserveOutsideRangeIfDisplayableCB,
          (__int64)this,
          (__int64)v17,
          (__int64)a5,
          (__int64)a4);
  v12 = v10;
  if ( v10 < 0
    || (v13 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
                *((_QWORD *)this + 19),
                v9,
                v8,
                0,
                (__int64)VIDMM_SEGMENT::MoveOneResource,
                (__int64)this,
                0LL,
                (__int64)a5,
                (__int64)a4),
        v12 = v13,
        v13 < 0) )
  {
    v14 = WdLogNewEntry5_WdWarning(v11);
    *(_QWORD *)(v14 + 24) = v12;
    WdLogEvent5_WdWarning(v14);
  }
  return (unsigned int)v12;
}
