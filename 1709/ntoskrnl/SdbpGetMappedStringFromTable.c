/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1404F57BC
 * Callers:
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetStringTableItemFromStringRef @ 0x1404F580C (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x14054A818 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetMappedStringFromTable",
    890,
    (unsigned int)"SdbpGetStringTableItemFromStringRef failed to get tagid for string ref");
  return 0LL;
}
