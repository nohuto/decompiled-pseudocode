/*
 * XREFs of ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00ABA38
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004F1A0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ @ 0x1C004C008 (-GetMoveableResourceCallback@VIDMM_GLOBAL@@QEAAP6A_NPEAU_VIDMM_GLOBAL_ALLOC@@@ZXZ.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0050454 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009A650 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A98B4 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00AC538 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z @ 0x1C00B1A40 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAXPEAUVIDMM_DEFRAGMENT_ARGS@@@Z.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00B2D64 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r12
  __int64 v9; // rsi
  VIDMM_GLOBAL *v10; // rcx
  VIDMM_GLOBAL *v11; // rcx
  bool (__fastcall *v12)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  VIDMM_GLOBAL *v17; // r9
  VIDMM_GLOBAL *v18; // rcx
  bool (__fastcall *MoveableResourceCallback)(struct _VIDMM_GLOBAL_ALLOC *); // rax
  VIDMM_LINEAR_POOL *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  int v25; // [rsp+60h] [rbp-69h]
  _QWORD v26[22]; // [rsp+70h] [rbp-59h] BYREF
  char v27; // [rsp+130h] [rbp+67h]
  unsigned __int64 v28; // [rsp+138h] [rbp+6Fh]

  v4 = *((_QWORD *)this + 52);
  v6 = *((_QWORD *)this + 53);
  v25 = *((_DWORD *)a2 + 8);
  v28 = *((_QWORD *)a2 + 2);
  LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 19),
                  v28,
                  v25,
                  0,
                  v4,
                  v6,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 27,
                  (void **)a2 + 26);
  if ( (int)v9 < 0 )
  {
    VIDMM_SEGMENT::TrimOfferLists(this, 1LL, v28, *((unsigned int *)a2 + 8));
    LODWORD(v9) = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v28,
                    v25,
                    0,
                    v4,
                    v6,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 27,
                    (void **)a2 + 26);
    if ( (int)v9 < 0 )
    {
      if ( *((_QWORD *)this + 55) + v28 < (unsigned __int64)(unsigned int)dword_1C0040440
                                        * *((_QWORD *)this + 54)
                                        / (unsigned int)dword_1C0040444 )
      {
        v16 = v4;
        v17 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
        v27 = 0;
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 3) + 2216LL) + 48LL * *((unsigned int *)this + 95) + 16) & 4) != 0 )
        {
          VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v17);
          memset(v26, 0, 0x78uLL);
          v18 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          v26[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
          v26[0] = v4;
          v26[1] = v6;
          LODWORD(v26[2]) = 1;
          MoveableResourceCallback = VIDMM_GLOBAL::GetMoveableResourceCallback(v18);
          v20 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
          LODWORD(v26[8]) |= 4u;
          v26[4] = MoveableResourceCallback;
          v26[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
          v26[7] = VIDMM_SEGMENT::GetAlignmentCB;
          VIDMM_LINEAR_POOL::DefragmentRange(v20, (struct VIDMM_DEFRAGMENT_ARGS *)v26);
          v21 = VIDMM_LINEAR_POOL::Allocate(
                  *((VIDMM_LINEAR_POOL **)this + 19),
                  v28,
                  v25,
                  0,
                  v4,
                  v6,
                  a3,
                  a4,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 27,
                  (void **)a2 + 26);
          v16 = v26[9];
          LODWORD(v9) = v21;
          v27 = 1;
        }
        if ( (int)v9 < 0 )
        {
          v22 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v16, a2, a3, a4);
          v9 = v22;
          if ( v22 < 0 )
          {
            if ( v27 )
              goto LABEL_13;
          }
        }
      }
      else
      {
        LODWORD(v9) = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 52), a2, a3, a4);
        if ( (int)v9 < 0 )
        {
          v10 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 3) + 2216LL) + 48LL * *((unsigned int *)this + 95) + 16) & 4) != 0 )
          {
            VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(v10);
            memset(v26, 0, 0x78uLL);
            v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
            v26[3] = VIDMM_SEGMENT::UpdatePendingResourceReserveCB;
            v26[0] = v4;
            v26[1] = v6;
            LODWORD(v26[2]) = 1;
            v12 = VIDMM_GLOBAL::GetMoveableResourceCallback(v11);
            v13 = (VIDMM_LINEAR_POOL *)*((_QWORD *)this + 19);
            LODWORD(v26[8]) |= 4u;
            v26[4] = v12;
            v26[5] = VIDMM_SEGMENT::IsNonOverlappingResourceCB;
            v26[7] = VIDMM_SEGMENT::GetAlignmentCB;
            VIDMM_LINEAR_POOL::DefragmentRange(v13, (struct VIDMM_DEFRAGMENT_ARGS *)v26);
            v14 = VIDMM_LINEAR_POOL::Allocate(
                    *((VIDMM_LINEAR_POOL **)this + 19),
                    v28,
                    v25,
                    0,
                    v4,
                    v6,
                    a3,
                    a4,
                    a2,
                    (union _LARGE_INTEGER *)a2 + 27,
                    (void **)a2 + 26);
            v9 = v14;
            if ( v14 < 0 )
            {
LABEL_13:
              v23 = WdLogNewEntry5_WdWarning(v15);
              *(_QWORD *)(v23 + 24) = v9;
              WdLogEvent5_WdWarning(v23);
              VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 19), v4, v6, 1LL);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v9;
}
