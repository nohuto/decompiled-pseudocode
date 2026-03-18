/*
 * XREFs of VidMmEscape @ 0x1C001ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall VidMmEscape(VIDMM_GLOBAL *a1, struct VIDMM_DEVICE *a2, struct _D3DKMT_VIDMM_ESCAPE *a3, int a4)
{
  return VIDMM_GLOBAL::Escape(a1, a2, a3, a4);
}
