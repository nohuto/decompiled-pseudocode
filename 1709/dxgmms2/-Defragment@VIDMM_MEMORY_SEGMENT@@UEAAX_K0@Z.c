/*
 * XREFs of ?Defragment@VIDMM_MEMORY_SEGMENT@@UEAAX_K0@Z @ 0x1C00A8C20
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C004C008 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00A8DCC (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00B1A40 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00B1E3C (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z @ 0x1C00B29CC (-PatchGapsWithFreeBlocks@VIDMM_LINEAR_POOL@@QEAAX_K0@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00B2D64 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::Defragment(VIDMM_MEMORY_SEGMENT *this, unsigned __int64 a2, unsigned __int64 a3)
{
  VIDMM_GLOBAL *v6; // r9
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  bool i; // zf
  VIDMM_LINEAR_POOL *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  _QWORD v17[20]; // [rsp+50h] [rbp-49h] BYREF
  char v18; // [rsp+100h] [rbp+67h] BYREF
  char v19; // [rsp+108h] [rbp+6Fh] BYREF

  memset(v17, 0, 0x78uLL);
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  LODWORD(v17[2]) = 0;
  v17[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
  v17[4] = VIDMM_GLOBAL::GetMoveableResourceCallback(v6);
  v7 = a2;
  v17[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
  v17[6] = VIDMM_SEGMENT::IsDisplayingResourceCB;
  v17[7] = VIDMM_SEGMENT::GetAlignmentCB;
  LODWORD(v17[8]) = LODWORD(v17[8]) ^ (LOBYTE(v17[8]) ^ (unsigned __int8)(*(_DWORD *)(v8 + 6464) >> 17)) & 2 | 1;
  for ( i = a2 == a3; !i; i = v7 == a3 )
  {
    v10 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
    v17[0] = v7;
    v17[1] = a3;
    VIDMM_LINEAR_POOL::DefragmentRange(v10, (struct VIDMM_DEFRAGMENT_ARGS *)v17);
    if ( *((_BYTE *)this + 472) )
    {
      v11 = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
              *((_QWORD *)this + 19),
              v7,
              v17[1],
              0,
              (__int64)VIDMM_SEGMENT::MoveOneResource,
              (__int64)this,
              0LL,
              (__int64)&v19,
              (__int64)&v18);
      v14 = v11;
      *((_BYTE *)this + 472) = 0;
      if ( v11 < 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(v13, v12);
        *(_QWORD *)(v16 + 24) = v14;
        WdLogEvent5_WdAssertion(v16);
        VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 19), v7, a3, 0LL);
        break;
      }
    }
    v7 = v17[10];
    if ( v17[11] )
    {
      v15 = VIDMM_MEMORY_SEGMENT::MoveDisplayingResource(this, a2, a3, (const struct VIDMM_DISPLAYING_BLOCK *)&v17[11]);
      v17[11] = 0LL;
      v7 = v15;
    }
  }
  VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks(*((VIDMM_LINEAR_POOL **)this + 19), 0LL, *((_QWORD *)this + 6));
}
