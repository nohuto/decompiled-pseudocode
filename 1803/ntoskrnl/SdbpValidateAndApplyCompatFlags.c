/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1405FFA84
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1405FFAF0 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 * Callees:
 *     SdbGetDatabaseID @ 0x1405FC968 (SdbGetDatabaseID.c)
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpValidateAndApplyCompatFlags(__int64 a1, _DWORD *a2, char a3)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( *a2 == 1 )
  {
    *(_DWORD *)(a1 + 1328) |= 1u;
    goto LABEL_7;
  }
  if ( *a2 == 2 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 1328) |= 2u;
    goto LABEL_4;
  }
  if ( *a2 != 3 && (a3 & 1) == 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpValidateAndApplyCompatFlags",
      779,
      (unsigned int)"MajorVersion mismatch, MajorVersion 0x%lx Expected 0x%lx",
      *a2,
      3);
    return v4;
  }
LABEL_4:
  if ( (unsigned int)SdbGetDatabaseID(a1, (void *)(a1 + 28)) )
    return 1;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpValidateAndApplyCompatFlags",
    789,
    (unsigned int)"Failed to get the database ID");
  if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0LL, 28673)) )
    return 1;
  return v4;
}
