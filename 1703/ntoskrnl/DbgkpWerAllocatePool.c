/*
 * XREFs of DbgkpWerAllocatePool @ 0x140682BC4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401E23D8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x57676244u);
}
