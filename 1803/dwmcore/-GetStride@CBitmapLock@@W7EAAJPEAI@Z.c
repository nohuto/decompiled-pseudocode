/*
 * XREFs of ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x1800DE6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::GetStride(__int64 a1, unsigned int *a2)
{
  return CBitmapLock::GetStride((CBitmapLock *)(a1 - 8), a2);
}
