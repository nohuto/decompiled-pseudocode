/*
 * XREFs of SdbTagIDToTagRef @ 0x1405D4354
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1404B41A0 (SdbGetDatabaseMatch.c)
 *     SdbGetDatabaseMatchEx @ 0x1404B54AC (SdbGetDatabaseMatchEx.c)
 *     KsepDbGetShimInfo @ 0x140599338 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpFindLocalDatabaseByPDB @ 0x1405D43AC (SdbpFindLocalDatabaseByPDB.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbTagIDToTagRef(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = -1;
  v5 = a3;
  v6 = 0;
  if ( (unsigned int)SdbpFindLocalDatabaseByPDB(a1, a2, a3, v8) )
  {
    v6 = 1;
    *a4 = v5 | (v8[0] << 28);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbTagIDToTagRef", 220, (unsigned int)"Bad PDB");
    *a4 = 0;
  }
  return v6;
}
