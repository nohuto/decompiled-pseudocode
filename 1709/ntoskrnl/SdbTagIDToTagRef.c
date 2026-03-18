/*
 * XREFs of SdbTagIDToTagRef @ 0x1405E8EF4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140544CEC (SdbGetDatabaseMatch.c)
 *     SdbGetDatabaseMatchEx @ 0x140547A18 (SdbGetDatabaseMatchEx.c)
 *     KsepDbGetShimInfo @ 0x1405E8B58 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpFindLocalDatabaseByPDB @ 0x1405E8F4C (SdbpFindLocalDatabaseByPDB.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
    AslLogCallPrintf(1, (unsigned int)"SdbTagIDToTagRef", 246, (unsigned int)"Bad PDB");
    *a4 = 0;
  }
  return v6;
}
