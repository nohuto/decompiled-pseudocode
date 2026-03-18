/*
 * XREFs of AlpcpAllocateBuffer @ 0x140455490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall AlpcpAllocateBuffer(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
