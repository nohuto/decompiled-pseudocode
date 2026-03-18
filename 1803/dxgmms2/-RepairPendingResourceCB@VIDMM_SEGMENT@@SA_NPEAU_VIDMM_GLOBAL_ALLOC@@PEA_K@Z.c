/*
 * XREFs of ?RepairPendingResourceCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00B4064
 * Callers:
 *     ?RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6A_NPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z@Z @ 0x1C00BB744 (-RollbackPlacementOfPendingResources@VIDMM_LINEAR_POOL@@QEAAX_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P6.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_SEGMENT::RepairPendingResourceCB(struct _VIDMM_GLOBAL_ALLOC *a1, unsigned __int64 *a2)
{
  bool result; // al

  if ( !a1 || !*((_QWORD *)a1 + 28) )
    return 0;
  *a2 = *((_QWORD *)a1 + 18);
  result = 1;
  *((_QWORD *)a1 + 26) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  return result;
}
