/*
 * XREFs of VidSchIsDeviceBusy @ 0x1C000382C
 * Callers:
 *     ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0068C24 (-IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C006B830 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00A0430 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsDeviceBusy(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 1224) || *(_DWORD *)(a1 + 1212) )
    return 1;
  return v1;
}
