/*
 * XREFs of ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056CCC
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL::NeedsApertureForLock(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a2 + 19);
  if ( (v2 & 0xD0000) != 0 )
    return 0;
  else
    return *(_BYTE *)(280LL * (v2 & 0x3F) + *((_QWORD *)this + 5150) + 274);
}
