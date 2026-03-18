/*
 * XREFs of DpiInitialize @ 0x1C0041220
 * Callers:
 *     <none>
 * Callees:
 *     DpiInitializeInternal @ 0x1C0041238 (DpiInitializeInternal.c)
 */

__int64 __fastcall DpiInitialize(__int64 a1, __int64 a2, __int64 a3)
{
  return DpiInitializeInternal(a1, a2, a3, 0LL);
}
