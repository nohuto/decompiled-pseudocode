/*
 * XREFs of ExpAllocateLowLevelTable @ 0x14046083C
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x14045D090 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14045DC44 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpAllocateHandleTable @ 0x14045FF04 (ExpAllocateHandleTable.c)
 * Callees:
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404608E8 (ExpAllocateTablePagedPoolNoZero.c)
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
