/*
 * XREFs of DbgkpWerAllocatePool @ 0x14071274C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140223BFC (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
