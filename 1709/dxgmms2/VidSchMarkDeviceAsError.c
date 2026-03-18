/*
 * XREFs of VidSchMarkDeviceAsError @ 0x1C002BA50
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0061210 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 */

LONG __fastcall VidSchMarkDeviceAsError(__int64 a1, int a2)
{
  return VidSchiMarkDeviceAsError(a1, a2);
}
