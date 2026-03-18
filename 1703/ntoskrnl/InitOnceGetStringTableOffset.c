/*
 * XREFs of InitOnceGetStringTableOffset @ 0x1405CFB20
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x1404AFF40 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE a1, char *a2, PVOID *a3)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi
  const char *v9; // r9
  int v10; // r8d

  v3 = 0;
  if ( !a2 )
  {
    v9 = "PDB was not supplied for InitOnceGetStringTableOffset";
    v10 = 680;
LABEL_8:
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", v10, (_DWORD)v9);
    return 0LL;
  }
  if ( !a3 )
  {
    v9 = "No return context was supplied for InitOnceGetStringTableOffset";
    v10 = 686;
    goto LABEL_8;
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
    AslLogCallPrintf(1, (unsigned int)"InitOnceGetStringTableOffset", 696, (unsigned int)"No stringtable in DB");
  }
  return v3;
}
