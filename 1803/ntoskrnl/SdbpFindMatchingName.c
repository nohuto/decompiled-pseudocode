/*
 * XREFs of SdbpFindMatchingName @ 0x14061F368
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x1405FCDAC (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x1407D8DE8 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     SdbpGetNextIndexedRecord @ 0x14061F60C (SdbpGetNextIndexedRecord.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindMatchingName(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  int v7; // esi
  const wchar_t *StringTagPtr; // rcx
  bool v9; // zf
  int v11; // eax

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    v7 = FirstTag;
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( !StringTagPtr )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpFindMatchingName",
        266,
        (unsigned int)"Can't get the name string for tagid 0x%x",
        v7);
      return 0LL;
    }
    if ( (a3[5] & 1) != 0 )
    {
      v11 = wcsicmp(*((const wchar_t **)a3 + 4), StringTagPtr);
      v9 = v11 == 0;
      if ( v11 < 0 )
        return 0LL;
    }
    else
    {
      v9 = wcsicmp(StringTagPtr, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( !v9 )
    {
      NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, a3);
      if ( NextIndexedRecord )
        continue;
    }
    return NextIndexedRecord;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpFindMatchingName",
    256,
    (unsigned int)"The tag 0x%x was not found under tag 0x%x",
    NextIndexedRecord,
    *((unsigned __int16 *)a3 + 6));
  return 0LL;
}
