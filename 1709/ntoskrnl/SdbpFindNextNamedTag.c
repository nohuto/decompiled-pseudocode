/*
 * XREFs of SdbpFindNextNamedTag @ 0x14076FEF4
 * Callers:
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140526D20 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpFindNextNamedTag(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v7; // edi
  unsigned int v9; // ebx
  __int16 TagFromTagID; // r15
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax
  unsigned int NextChild; // eax

  v7 = a3;
  v9 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v7);
      v7 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
      {
        FirstTag = SdbFindFirstTag(a1, v7, a4);
        if ( FirstTag )
        {
          StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
          if ( !StringTagPtr )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpFindNextNamedTag",
              215,
              (unsigned int)"Can't get the name string tagid 0x%lx");
            return v9;
          }
          if ( !wcsicmp(Str1, StringTagPtr) )
            return v7;
        }
      }
    }
    return v9;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpFindNextNamedTag", 198, (unsigned int)"Invalid tagid 0x%lx");
    return 0LL;
  }
}
