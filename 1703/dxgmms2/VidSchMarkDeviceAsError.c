/*
 * XREFs of VidSchMarkDeviceAsError @ 0x1C002A070
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG __fastcall VidSchMarkDeviceAsError(__int64 a1, int a2)
{
  return VidSchiMarkDeviceAsError(a1, a2);
}
