/*
 * XREFs of SdbpReadStringRef @ 0x1405BC418
 * Callers:
 *     SdbGetStringTagPtr @ 0x1405BC274 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404B0084 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v2, &v5, 4u) )
      return v5;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 542, (unsigned int)"Error reading data");
  }
  else
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      537,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type");
  }
  return 0LL;
}
