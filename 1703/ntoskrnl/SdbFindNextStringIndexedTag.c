/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x14072E2F0
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1404B54AC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1404B5980 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x1405BC1DC (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x1405BC47C (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
