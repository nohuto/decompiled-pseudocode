/*
 * XREFs of DbgkpWerAllocatePool @ 0x1406ADE9C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401E659C (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall DbgkpWerAllocatePool(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57676244u);
}
