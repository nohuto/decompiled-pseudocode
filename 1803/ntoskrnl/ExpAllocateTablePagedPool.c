/*
 * XREFs of ExpAllocateTablePagedPool @ 0x140553364
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x1405532F0 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140553A18 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x1407BD530 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140553C4C (ExpAllocateTablePagedPoolNoZero.c)
 */

void *__fastcall ExpAllocateTablePagedPool(__int64 a1, size_t a2)
{
  void *TablePagedPoolNoZero; // rax
  void *v4; // rbx

  TablePagedPoolNoZero = (void *)ExpAllocateTablePagedPoolNoZero();
  v4 = TablePagedPoolNoZero;
  if ( TablePagedPoolNoZero )
    memset(TablePagedPoolNoZero, 0, a2);
  return v4;
}
