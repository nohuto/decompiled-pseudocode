/*
 * XREFs of ExCleanupAutoExpandPushLock @ 0x1400B5B60
 * Callers:
 *     ExFreeAutoExpandPushLock @ 0x14015BFD0 (ExFreeAutoExpandPushLock.c)
 *     MiDeletePhysicalProcessPages @ 0x14074FB68 (MiDeletePhysicalProcessPages.c)
 * Callees:
 *     ExSaFree @ 0x14015E51C (ExSaFree.c)
 */

__int64 __fastcall ExCleanupAutoExpandPushLock(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 8);
  if ( (result & 1) != 0 )
    return ExSaFree((unsigned int)result & 0xFFFFFFF8, 16LL);
  return result;
}
