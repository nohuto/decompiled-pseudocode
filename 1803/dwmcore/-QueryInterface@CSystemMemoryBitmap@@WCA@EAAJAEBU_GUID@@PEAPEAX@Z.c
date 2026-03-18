/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CMILCOMBase *)(a1 - 32), a2, a3);
}
