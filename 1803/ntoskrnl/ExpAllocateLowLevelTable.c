/*
 * XREFs of ExpAllocateLowLevelTable @ 0x140553C18
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1405532F0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTable @ 0x14055390C (ExpAllocateHandleTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140553A18 (ExpAllocateHandleTableEntrySlow.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x140553C4C (ExpAllocateTablePagedPoolNoZero.c)
 */

_QWORD *__fastcall ExpAllocateLowLevelTable(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExpAllocateTablePagedPoolNoZero(*(_QWORD *)(a1 + 16), 4096LL);
  if ( result )
  {
    *result = 0LL;
    result[1] = a2;
  }
  return result;
}
