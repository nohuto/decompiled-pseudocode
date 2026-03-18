/*
 * XREFs of ExpAllocateTablePagedPool @ 0x14045D104
 * Callers:
 *     ExpAllocateMidLevelTable @ 0x14045D090 (ExpAllocateMidLevelTable.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14045DC44 (ExpAllocateHandleTableEntrySlow.c)
 *     ExpSetHandleExtraInfo @ 0x140756A98 (ExpSetHandleExtraInfo.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404608E8 (ExpAllocateTablePagedPoolNoZero.c)
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
