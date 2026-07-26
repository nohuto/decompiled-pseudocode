/*
 * XREFs of NdisImmediateReadSharedMemory @ 0x1C00E4700
 * Callers:
 *     <none>
 * Callees:
 *     ndisImmediateReadWriteSharedMemory @ 0x1C00E4CC8 (ndisImmediateReadWriteSharedMemory.c)
 */

__int64 __fastcall NdisImmediateReadSharedMemory(__int64 a1)
{
  return ndisImmediateReadWriteSharedMemory(a1);
}
