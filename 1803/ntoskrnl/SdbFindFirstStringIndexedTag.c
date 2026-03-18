/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x1405FCDAC
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1405FCBBC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x1405FCE50 (SdbpGetFirstIndexedRecord.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1405FD650 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x1405FD89C (SdbGetIndex.c)
 *     SdbpFindMatchingName @ 0x14061F368 (SdbpFindMatchingName.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(
        void *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v11; // rdx
  unsigned int FirstIndexedRecord; // eax
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]

  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    v15 = a3;
    v14 = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbFindFirstStringIndexedTag",
      235,
      (unsigned int)"Index not found 0x%lx Key 0x%lx",
      v14,
      v15);
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v11 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v11, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
