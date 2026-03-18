/*
 * XREFs of SdbpGetIndex @ 0x1404B5630
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1404B5314 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405BAE5C (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x140486F3C (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140486FF0 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x1404B5810 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
