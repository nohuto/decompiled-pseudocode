/*
 * XREFs of ?QueryInterface@CCoRenderContent@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoRenderContent::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CMILCOMBase *)(a1 - 56), a2, a3);
}
