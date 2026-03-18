/*
 * XREFs of ?VidMmMapCpuVA@@YAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z @ 0x1C0012A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall VidMmMapCpuVA(struct VIDMM_GLOBAL *a1, struct VIDMM_MONITORED_FENCE_STORAGE *a2, void **a3)
{
  return VIDMM_GLOBAL::MapCpuVA(a1, a2, a3);
}
