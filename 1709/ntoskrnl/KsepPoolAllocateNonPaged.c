/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x14015CCD8
 * Callers:
 *     KseSetCompletionHook @ 0x14020ED10 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x14054418C (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_14036A248);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_14036A254);
  }
  return v3;
}
