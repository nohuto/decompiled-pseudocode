/*
 * XREFs of NdisImmediateWriteSharedMemory @ 0x1C00DA790
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00DACB8 (ndisImmediateReadWriteSharedMemory.c)
 */

__int64 __fastcall NdisImmediateWriteSharedMemory(__int64 a1)
{
  return ndisImmediateReadWriteSharedMemory(a1);
}
