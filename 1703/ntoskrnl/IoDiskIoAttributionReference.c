/*
 * XREFs of IoDiskIoAttributionReference @ 0x1401F38CC
 * Callers:
 *     IoDiskIoAttributionAllocate @ 0x14054DE04 (IoDiskIoAttributionAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoDiskIoAttributionReference(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 32));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
