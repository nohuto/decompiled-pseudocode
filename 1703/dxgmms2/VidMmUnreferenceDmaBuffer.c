/*
 * XREFs of VidMmUnreferenceDmaBuffer @ 0x1C001EE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmUnreferenceDmaBuffer(VIDMM_GLOBAL ***a1, char a2)
{
  VIDMM_GLOBAL::UnreferenceDmaBuffer(*a1[17], (struct _VIDMM_DMA_BUFFER *)a1, a2);
}
