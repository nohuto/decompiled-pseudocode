/*
 * XREFs of sub_1405488E8 @ 0x1405488E8
 * Callers:
 *     WbAllocateUserMemory @ 0x1405486B8 (WbAllocateUserMemory.c)
 * Callees:
 *     WbAllocateSlots @ 0x140548924 (WbAllocateSlots.c)
 */

__int64 __fastcall sub_1405488E8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 Slots; // rax

  Slots = 0LL;
  if ( (_DWORD)a2 )
    Slots = WbAllocateSlots(a1, a2, 1023 - ((unsigned int)(a2 + 63) >> 6));
  if ( a3 )
    *a3 = Slots;
  return 0LL;
}
