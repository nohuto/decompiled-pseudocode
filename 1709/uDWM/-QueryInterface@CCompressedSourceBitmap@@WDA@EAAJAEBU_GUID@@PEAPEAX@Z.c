/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800469E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CCompressedSourceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCompoundBitmapLock::QueryInterface((CCompoundBitmapLock *)(a1 - 48), a2, a3);
}
