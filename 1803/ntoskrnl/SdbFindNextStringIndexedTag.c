/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x1407D8DE8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1405FCBBC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x14061F368 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x14061F60C (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
