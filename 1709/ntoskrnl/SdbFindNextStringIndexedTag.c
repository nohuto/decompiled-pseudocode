/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140771CB8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x1405DB244 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x1405DB2DC (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
