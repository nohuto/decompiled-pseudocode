/*
 * XREFs of SdbpValidateAndApplyCompatFlags @ 0x1404AFB78
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x1404AFAE0 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x14072AD3C (SdbOpenDatabaseEx.c)
 * Callees:
 *     SdbGetDatabaseID @ 0x1404AFC58 (SdbGetDatabaseID.c)
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
      731,
      (unsigned int)"MajorVersion mismatch, MajorVersion 0x%lx Expected 0x%lx");
    return v4;
  }
LABEL_4:
  if ( (unsigned int)SdbGetDatabaseID(a1, a1 + 28) )
    return 1;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpValidateAndApplyCompatFlags",
    741,
    (unsigned int)"Failed to get the database ID");
  if ( (a3 & 8) == 0 && ((a3 & 4) == 0 || (unsigned int)SdbFindFirstTag(a1, 0LL, 28673LL)) )
    return 1;
  return v4;
}
