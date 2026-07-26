/*
 * XREFs of NdisImmediateReadSharedMemory @ 0x1C00DA6E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00DACB8 (ndisImmediateReadWriteSharedMemory.c)
 */

__int64 __fastcall NdisImmediateReadSharedMemory(__int64 a1)
{
  return ndisImmediateReadWriteSharedMemory(a1);
}
