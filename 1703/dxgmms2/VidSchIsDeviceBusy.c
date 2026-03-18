/*
 * XREFs of VidSchIsDeviceBusy @ 0x1C001273C
 * Callers:
 *     ?IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0061530 (-IsAllocationAccessPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C00638F0 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C0093190 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsDeviceBusy(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 1200) || *(_DWORD *)(a1 + 1188) )
    return 1;
  return v1;
}
