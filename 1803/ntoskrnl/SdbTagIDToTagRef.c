/*
 * XREFs of SdbTagIDToTagRef @ 0x1406508F4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1405FC168 (SdbGetDatabaseMatch.c)
 *     SdbGetDatabaseMatchEx @ 0x1405FCBBC (SdbGetDatabaseMatchEx.c)
 *     KsepDbGetShimInfo @ 0x140744DE8 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpFindLocalDatabaseByPDB @ 0x14065094C (SdbpFindLocalDatabaseByPDB.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v9[6]; // [rsp+20h] [rbp-18h] BYREF

  v9[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v9) )
  {
    v6 = 1;
    v7 = v5 | (v9[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbTagIDToTagRef", 246, (unsigned int)"Bad PDB");
    v7 = 0;
  }
  *a4 = v7;
  return v6;
}
