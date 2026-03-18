/*
 * XREFs of SdbpGetIndex @ 0x1405FCD40
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1405FCA24 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14061DFD8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1405FCF94 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1405FD4C0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1405FD574 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, unsigned int a2, unsigned int *a3)
{
  int v7; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int16)SdbGetTagFromTagID() == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, a2) / 0xC;
    return SdbpGetMappedTagData(a1, a2);
  }
  else
  {
    v7 = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetIndex",
      1109,
      (unsigned int)"Index tagid 0x%lx is not referring to the index bits",
      v7);
    return 0LL;
  }
}
