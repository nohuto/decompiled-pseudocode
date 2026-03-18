/*
 * XREFs of ?CheckOcclusionState@CDesktopRenderTarget@@WGI@EAAJXZ @ 0x1800DD4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::CheckOcclusionState(__int64 a1, const struct _GUID *a2, void **a3)
{
  return Dwm3DRECompositorThunk::HrFindInterface((Dwm3DRECompositorThunk *)(a1 - 104), a2, a3);
}
