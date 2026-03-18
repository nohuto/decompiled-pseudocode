/*
 * XREFs of ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1C0058BAC
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C00584DC (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C00717D0 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MDL_RANGE::Unlock(PMDL *this)
{
  MmUnlockPages(*this);
  IoFreeMdl(*this);
  *this = 0LL;
}
