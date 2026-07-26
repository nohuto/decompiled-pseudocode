/*
 * XREFs of ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C000E300
 * Callers:
 *     ndisPplAllocate @ 0x1C000E174 (ndisPplAllocate.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0023D80 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ndisAllocateFromNPagedPool(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  _QWORD *PoolWithTagPriority; // rax

  if ( NumberOfBytes + 32 < NumberOfBytes )
    return 0LL;
  PoolWithTagPriority = ExAllocatePoolWithTagPriority(NonPagedPoolNx, NumberOfBytes + 32, Tag, NormalPoolPriority);
  if ( !PoolWithTagPriority )
    return 0LL;
  *PoolWithTagPriority = 0LL;
  return PoolWithTagPriority + 4;
}
