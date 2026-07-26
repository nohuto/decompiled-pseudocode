/*
 * XREFs of NdisImmediateReadSharedMemory @ 0x1C00E5F60
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00E6528 (ndisImmediateReadWriteSharedMemory.c)
 */

__int64 __fastcall NdisImmediateReadSharedMemory(__int64 a1)
{
  return ndisImmediateReadWriteSharedMemory(a1);
}
