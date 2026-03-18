/*
 * XREFs of SdbpGetIndex @ 0x140547EB4
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1404F4EE0 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140547B48 (SdbpFindFirstIndexedWildCardTag.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x140524C44 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140524CF8 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x14054A818 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, v4) / 0xC;
    return SdbpGetMappedTagData(a1, v4);
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetIndex",
      1109,
      (unsigned int)"Index tagid 0x%lx is not referring to the index bits");
    return 0LL;
  }
}
