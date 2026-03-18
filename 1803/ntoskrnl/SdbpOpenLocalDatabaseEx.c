/*
 * XREFs of SdbpOpenLocalDatabaseEx @ 0x1407D79BC
 * Callers:
 *     SdbTagRefToTagID @ 0x14061FFD8 (SdbTagRefToTagID.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1407D792C (SdbpCloseLocalDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x1407D7C4C (SdbResolveDatabaseEx.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpOpenLocalDatabaseEx(__int64 a1, __int128 *a2, __int64 a3, __int64 *a4, unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int64 v19; // [rsp+20h] [rbp-268h]
  int v20; // [rsp+30h] [rbp-258h] BYREF
  int v21; // [rsp+34h] [rbp-254h] BYREF
  WCHAR v22[264]; // [rsp+40h] [rbp-248h] BYREF

  v5 = 0;
  v21 = 0;
  v20 = 0;
  v9 = *a5;
  if ( (*a5 & 0xF0000000) != 0 )
    v9 >>= 28;
  if ( v9 >= 0x10 )
  {
    LODWORD(v19) = v9;
    v10 = "Bad index 0x%lx";
    v11 = 1015;
LABEL_19:
    AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", v11, (_DWORD)v10, v19);
    return v5;
  }
  SdbpCloseLocalDatabaseEx(a1, (__int64)a2, v9);
  v13 = SdbResolveDatabaseEx(a1, (_DWORD)a2, (unsigned int)&v21, (unsigned int)&v20, (__int64)v22);
  if ( (unsigned int)(v13 - 1) > 0x102 )
  {
    LODWORD(v19) = v13;
    v10 = "Cannot resolve database, the path length is 0x%lx";
    v11 = 1049;
    goto LABEL_19;
  }
  if ( *(_WORD *)(a1 + 576) == 0x7FFF || (*(_DWORD *)(a1 + 544) & v20) != 0 )
  {
    v15 = SdbOpenDatabaseEx(v22, v12, v14);
    if ( v15 )
    {
      v16 = 32LL * v9;
      *(_QWORD *)(v16 + a1 + 48) = v15;
      *(_DWORD *)(v16 + a1 + 56) = 2;
      *(_DWORD *)(a1 + 28) |= 1 << v9;
      if ( a2 )
      {
        v17 = *a2;
        *(_DWORD *)(v16 + a1 + 56) |= 1u;
        *(_OWORD *)(v16 + a1 + 32) = v17;
      }
      else
      {
        *(_QWORD *)(v16 + a1 + 32) = 0LL;
        *(_QWORD *)(v16 + a1 + 40) = 0LL;
      }
      v5 = 1;
      if ( v9 == 1 )
        *(_QWORD *)(a1 + 16) = v15;
      *a5 = v9 << 28;
      if ( a4 )
        *a4 = v15;
    }
    else
    {
      AslLogCallPrintf(1, (unsigned int)"SdbpOpenLocalDatabaseEx", 1086, (unsigned int)"Failed to open database");
    }
  }
  else
  {
    AslLogCallPrintf(
      3,
      (unsigned int)"SdbpOpenLocalDatabaseEx",
      1070,
      (unsigned int)"Database \"%ws\" is not of the same type as the main EXE",
      v22);
  }
  return v5;
}
