/*
 * XREFs of VidMmUnreferenceDmaBuffer @ 0x1C0020EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C00201F8 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 */

void __fastcall VidMmUnreferenceDmaBuffer(VIDMM_GLOBAL ***a1, char a2)
{
  VIDMM_GLOBAL::UnreferenceDmaBuffer(*a1[17], (struct _VIDMM_DMA_BUFFER *)a1, a2);
}
