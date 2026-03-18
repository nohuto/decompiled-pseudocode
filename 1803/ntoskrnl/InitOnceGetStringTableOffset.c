/*
 * XREFs of InitOnceGetStringTableOffset @ 0x14064E710
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x1405FD310 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE a1, char *a2, PVOID *a3)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi

  v3 = 0;
  if ( !a2 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceGetStringTableOffset",
      690,
      (unsigned int)"PDB was not supplied for InitOnceGetStringTableOffset");
    return 0LL;
  }
  if ( !a3 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"InitOnceGetStringTableOffset",
      696,
      (unsigned int)"No return context was supplied for InitOnceGetStringTableOffset");
    return 0LL;
  }
  FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 30721);
  v7 = a2 + 1352;
  *v7 = FirstTag;
  if ( FirstTag )
  {
    *a3 = v7;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", 706, (unsigned int)"No stringtable in DB");
  }
  return v3;
}
