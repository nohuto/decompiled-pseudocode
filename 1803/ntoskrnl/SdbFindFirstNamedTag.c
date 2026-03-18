/*
 * XREFs of SdbFindFirstNamedTag @ 0x1407D712C
 * Callers:
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x1407D4E20 (SdbQueryDataExTagID.c)
 * Callees:
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1405FD384 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x1405FD5F4 (SdbGetFirstChild.c)
 *     SdbGetStringTagPtr @ 0x14061F404 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindFirstNamedTag(__int64 a1, __int64 a2, __int16 a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  unsigned int i; // eax
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax
  unsigned int v13; // edi

  v5 = 0;
  v8 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v8, v13) )
  {
    v13 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
    {
      FirstTag = SdbFindFirstTag(a1, v13, a4);
      if ( FirstTag )
      {
        StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1, (unsigned int)"SdbFindFirstNamedTag", 152, (unsigned int)"Can't get the name string");
          return v5;
        }
        if ( !wcsicmp(Str1, StringTagPtr) )
          return v13;
      }
    }
  }
  return v5;
}
