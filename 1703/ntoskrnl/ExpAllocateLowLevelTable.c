/*
 * XREFs of ExpAllocateLowLevelTable @ 0x14042C124
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x14042B734 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14042B8B0 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x14042BEEC (ExpAllocateHandleTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x14042C158 (ExpAllocateTablePagedPoolNoZero.c)
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
