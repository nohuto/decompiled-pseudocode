/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1405BC2F0
 * Callers:
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetStringTableItemFromStringRef @ 0x1405BC340 (SdbpGetStringTableItemFromStringRef.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetMappedStringFromTable",
    880,
    (unsigned int)"SdbpGetStringTableItemFromStringRef failed to get tagid for string ref");
  return 0LL;
}
