/*
 * XREFs of ExpAllocateTablePagedPool @ 0x14042B7A8
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x14042B734 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14042B8B0 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x140717328 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x14042C158 (ExpAllocateTablePagedPoolNoZero.c)
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
