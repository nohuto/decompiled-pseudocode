/*
 * XREFs of ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A3448
 * Callers:
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C004AE30 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EEEW4_VIDMM_PLACEMENT_RESTRICTION@.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C004BFC8 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00A1154 (-AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 *     ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3834 (-ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00A3F68 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 *     ?DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_ALLOC@@0@ZP6A_N2@Z4P6AK2@ZPEA_K@Z @ 0x1C00A9378 (-DefragmentRange@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6AXPEAU_VIDMM_GLOBAL_.c)
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00AA3E4 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveVPRResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v6; // r15
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r10
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v19; // [rsp+60h] [rbp-48h]
  char v20; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v21; // [rsp+B8h] [rbp+10h]

  v4 = *((_QWORD *)this + 55);
  v6 = *((_QWORD *)this + 56);
  v19 = *((_DWORD *)a2 + 8);
  v21 = *((_QWORD *)a2 + 2);
  LODWORD(v10) = VIDMM_LINEAR_POOL::Allocate(
                   *((VIDMM_LINEAR_POOL **)this + 22),
                   v21,
                   v19,
                   0,
                   v4,
                   v6,
                   a3,
                   a4,
                   a2,
                   (union _LARGE_INTEGER *)a2 + 27,
                   (void **)a2 + 26);
  if ( (int)v10 >= 0 )
    return (unsigned int)v10;
  VIDMM_SEGMENT::TrimOfferLists(this, 1LL, v21, *((unsigned int *)a2 + 8));
  LODWORD(v10) = VIDMM_LINEAR_POOL::Allocate(
                   *((VIDMM_LINEAR_POOL **)this + 22),
                   v21,
                   v19,
                   0,
                   v4,
                   v6,
                   a3,
                   a4,
                   a2,
                   (union _LARGE_INTEGER *)a2 + 27,
                   (void **)a2 + 26);
  if ( (int)v10 >= 0 )
    return (unsigned int)v10;
  if ( *((_QWORD *)this + 58) + v21 < (unsigned __int64)(unsigned int)dword_1C003C408
                                    * *((_QWORD *)this + 57)
                                    / (unsigned int)dword_1C003C40C )
  {
    v14 = v4;
    v20 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2192LL)
                    + 48LL * *((unsigned int *)this + 101)
                    + 16) & 4) != 0 )
    {
      VIDMM_LINEAR_POOL::DefragmentRange(*((_QWORD *)this + 22));
      v15 = VIDMM_LINEAR_POOL::Allocate(
              *((VIDMM_LINEAR_POOL **)this + 22),
              v21,
              v19,
              0,
              v4,
              v6,
              a3,
              a4,
              a2,
              (union _LARGE_INTEGER *)a2 + 27,
              (void **)a2 + 26);
      v14 = v4;
      LODWORD(v10) = v15;
      v20 = 1;
    }
    if ( (int)v10 >= 0 )
      return (unsigned int)v10;
    v16 = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, v14, a2, a3, a4);
    v10 = v16;
    if ( v16 >= 0 )
      return (unsigned int)v10;
    if ( !v20 )
    {
LABEL_13:
      v17 = WdLogNewEntry5_WdWarning(v13, v12);
      *(_QWORD *)(v17 + 24) = v10;
      WdLogEvent5_WdWarning(v17);
      VIDMM_LINEAR_POOL::RollbackPlacementOfPendingResources(*((_QWORD *)this + 22), v4, v6, 1LL);
    }
LABEL_14:
    VIDMM_SEGMENT::ResumeFlipQueuesIfSuspendedForMove(this);
    return (unsigned int)v10;
  }
  LODWORD(v10) = VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(this, *((_QWORD *)this + 55), a2, a3, a4);
  if ( (int)v10 >= 0 )
    return (unsigned int)v10;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2192LL)
                  + 48LL * *((unsigned int *)this + 101)
                  + 16) & 4) == 0 )
    goto LABEL_14;
  VIDMM_LINEAR_POOL::DefragmentRange(*((_QWORD *)this + 22));
  v11 = VIDMM_LINEAR_POOL::Allocate(
          *((VIDMM_LINEAR_POOL **)this + 22),
          v21,
          v19,
          0,
          v4,
          v6,
          a3,
          a4,
          a2,
          (union _LARGE_INTEGER *)a2 + 27,
          (void **)a2 + 26);
  v10 = v11;
  if ( v11 < 0 )
    goto LABEL_13;
  return (unsigned int)v10;
}
