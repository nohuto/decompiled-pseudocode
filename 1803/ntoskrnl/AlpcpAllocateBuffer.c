/*
 * XREFs of AlpcpAllocateBuffer @ 0x14057C0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AlpcpAllocateBuffer(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(a1, a2, a3);
}
