/*
 * XREFs of ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0001E70
 * Callers:
 *     ?VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C0001F50 (-VidMmFreeFenceStorageSlot@@YAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009ED0 (VidSchiReleaseSyncObjectReference.c)
 * Callees:
 *     ?FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0001CF0 (-FreeFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
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
      VIDMM_PROCESS_FENCE_STORAGE::FreeFenceStorageSlot((KSPIN_LOCK *)v5, (KSPIN_LOCK **)a1);
  }
}
