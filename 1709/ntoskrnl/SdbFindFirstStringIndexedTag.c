/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x14054A6A4
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x14054A748 (SdbpGetFirstIndexedRecord.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14054A85C (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x14054AB9C (SdbGetIndex.c)
 *     SdbpFindMatchingName @ 0x1405DB244 (SdbpFindMatchingName.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(void *a1, __int64 a2, __int16 a3, __int64 a4, unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v10; // rdx
  unsigned int FirstIndexedRecord; // eax

  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbFindFirstStringIndexedTag",
      235,
      (unsigned int)"Index not found 0x%lx Key 0x%lx");
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v10, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
