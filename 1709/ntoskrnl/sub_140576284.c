/*
 * XREFs of sub_140576284 @ 0x140576284
 * Callers:
 *     WbAllocateUserMemory @ 0x140576058 (WbAllocateUserMemory.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     WbAllocateSlots @ 0x1405036B0 (WbAllocateSlots.c)
 */

__int64 __fastcall sub_140576284(__int64 a1, int a2, __int64 *a3)
{
  __int64 Slots; // rax
  unsigned int v6; // ebp
  unsigned int v7; // r14d

  Slots = 0LL;
  if ( a2 )
  {
    v6 = (unsigned int)(a2 + 63) >> 6;
    v7 = (ExGenRandom(1) & 0x7FFFFFFFuLL) % (1023 - v6 + 1);
    Slots = WbAllocateSlots(a1, v7, 1023 - v6, v6);
    if ( !Slots )
      Slots = WbAllocateSlots(a1, 0, v7, v6);
  }
  if ( a3 )
    *a3 = Slots;
  return 0LL;
}
