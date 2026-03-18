/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C000E26C
 * Callers:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     ?VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C000E210 (-VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 * Callees:
 *     ?FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000E488 (-FreeSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@.c)
 *     ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000E500 (-FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FreeFenceStorageSlot(struct VIDMM_MONITORED_FENCE_STORAGE *a1, char a2)
{
  __int64 v4; // rcx
  VIDMM_PROCESS_FENCE_STORAGE *v5; // rcx

  v4 = *(_QWORD *)a1;
  if ( v4 )
  {
    v5 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v4 + 120);
    if ( a2 || *((_BYTE *)v5 + 64) )
      VIDMM_PROCESS_FENCE_STORAGE::FreeSharedFenceStorageSlot(v5, a1);
    else
      VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot(v5, a1);
  }
}
