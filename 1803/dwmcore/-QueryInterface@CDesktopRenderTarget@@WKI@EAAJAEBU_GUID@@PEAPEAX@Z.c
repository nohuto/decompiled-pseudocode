/*
 * XREFs of ?QueryInterface@CDesktopRenderTarget@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CMILCOMBase *)(a1 - 168), a2, a3);
}
