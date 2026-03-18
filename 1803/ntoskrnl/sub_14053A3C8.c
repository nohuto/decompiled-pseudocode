/*
 * XREFs of sub_14053A3C8 @ 0x14053A3C8
 * Callers:
 *     WbAllocateUserMemory @ 0x14053A19C (WbAllocateUserMemory.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     WbAllocateSlots @ 0x14053A460 (WbAllocateSlots.c)
 */

__int64 __fastcall sub_14053A3C8(__int64 a1, int a2, __int64 *a3)
{
  __int64 Slots; // rax
  unsigned int v6; // ebp
  unsigned __int64 v7; // r14

  Slots = 0LL;
  if ( a2 )
  {
    v6 = (unsigned int)(a2 + 63) >> 6;
    v7 = (ExGenRandom(1) & 0x7FFFFFFFuLL) % (1023 - v6 + 1);
    Slots = WbAllocateSlots(a1, v7, 1023 - v6, v6);
    if ( !Slots )
      Slots = WbAllocateSlots(a1, 0LL, (unsigned int)v7, v6);
  }
  if ( a3 )
    *a3 = Slots;
  return 0LL;
}
