/*
 * XREFs of Win32UAFMAllocPoolImpl @ 0x1C01E8FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
char *__fastcall Win32UAFMAllocPoolImpl(enum _POOL_TYPE a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  return NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AllocatePool(a1, a2, a3, a4);
}
