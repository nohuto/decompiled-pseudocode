/*
 * XREFs of SdbFindFirstNamedTag @ 0x14076FE2C
 * Callers:
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x14076DCDC (SdbQueryDataExTagID.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140526D20 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x140529448 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1405298B8 (SdbGetFirstChild.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
