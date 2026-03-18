/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x14061F480
 * Callers:
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1405FCF94 (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14061F4D0 (SdbpGetStringTableItemFromStringRef.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
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
