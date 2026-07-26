/*
 * XREFs of ndisInitializeStackTraces @ 0x1C00A8B90
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN ndisInitializeStackTraces()
{
  BOOLEAN result; // al
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = &::HashTable;
  KeInitializeSpinLock(&ndisStackTraces);
  byte_1C009207B = 4;
  dword_1C00920A8 = 0;
  unk_1C0092079 = 0;
  result = RtlCreateHashTable(&HashTable, 0, 0);
  byte_1C0092078 = result;
  return result;
}
