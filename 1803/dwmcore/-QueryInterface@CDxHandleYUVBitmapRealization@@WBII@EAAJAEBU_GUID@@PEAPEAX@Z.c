/*
 * XREFs of ?QueryInterface@CDxHandleYUVBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CMILCOMBase *)(a1 - 392), a2, a3);
}
