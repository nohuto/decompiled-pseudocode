/*
 * XREFs of CoTaskMemAlloc_0 @ 0x1800431BC
 * Callers:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18003CAEC (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall CoTaskMemAlloc_0(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
