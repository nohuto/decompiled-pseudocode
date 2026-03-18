/*
 * XREFs of SdbpFindMatchingName @ 0x1405DB244
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14054A6A4 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x140771CB8 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1405DB2DC (SdbpGetNextIndexedRecord.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindMatchingName(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rcx
  bool v8; // zf
  int v10; // eax

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( !StringTagPtr )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpFindMatchingName",
        266,
        (unsigned int)"Can't get the name string for tagid 0x%x");
      return 0LL;
    }
    if ( (a3[5] & 1) != 0 )
    {
      v10 = wcsicmp(*((const wchar_t **)a3 + 4), StringTagPtr);
      v8 = v10 == 0;
      if ( v10 < 0 )
        return 0LL;
    }
    else
    {
      v8 = wcsicmp(StringTagPtr, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( !v8 )
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
    (unsigned int)"The tag 0x%x was not found under tag 0x%x");
  return 0LL;
}
