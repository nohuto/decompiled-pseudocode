/*
 * XREFs of SdbpReadStringRef @ 0x1404F58E4
 * Callers:
 *     SdbGetStringTagPtr @ 0x1404F5740 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpReadTagData @ 0x1404F5D38 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v2, &v5, 4LL) )
      return v5;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 552, (unsigned int)"Error reading data");
  }
  else
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      547,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type");
  }
  return 0LL;
}
