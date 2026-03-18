/*
 * XREFs of SdbGetDatabaseMatch @ 0x1405FC168
 * Callers:
 *     PiIsDriverBlocked @ 0x1405FBF00 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x1405FC2EC (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     SdbpSearchDB @ 0x1405FD77C (SdbpSearchDB.c)
 *     SdbpCreateSearchDBContext @ 0x1405FDB20 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreateFromImageView @ 0x140644174 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x1406508F4 (SdbTagIDToTagRef.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  const char *v12; // r9
  int v13; // r8d
  const char *v14; // r9
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rbx
  char v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+28h] [rbp-D8h]
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v22[24]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v23[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  P = 0LL;
  v8 = 10;
  v20 = 0;
  if ( a4 )
    v8 = 26;
  v22[0] = v8;
  v9 = AslFileMappingCreate((unsigned int)&P, a2, -1, 0, 0LL);
  if ( v9 >= 0 )
    goto LABEL_4;
  if ( !a4 )
  {
    v12 = "Failed to create initialize file mapping [%x]";
    v13 = 4332;
    goto LABEL_13;
  }
  v9 = AslFileMappingCreateFromImageView(&P, a2, a4, a5);
  if ( v9 < 0 )
  {
    v12 = "Failed to initialize file mapping from image view [%x]";
    v13 = 4324;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v13, (_DWORD)v12, v9);
    goto LABEL_8;
  }
LABEL_4:
  if ( !(unsigned int)SdbpCreateSearchDBContext(v22, P) )
  {
    v14 = "Failed to create search DB context";
    v15 = 4341;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v15, (_DWORD)v14, v18);
    goto LABEL_8;
  }
  v10 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), v23, v19);
  if ( v10 > 0x10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatch",
      4356,
      (unsigned int)"The database has more matches than SDB_MAX_EXES",
      v18);
    v10 = 16;
  }
  if ( v10 )
  {
    v16 = v10 - 1;
    v17 = v16;
    if ( v16 >= 0 )
    {
      while ( (v23[2 * v17 + 1] & 2) != 0
           || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), (unsigned int)v23[2 * v17], &v20) )
      {
        if ( --v17 < 0 )
          goto LABEL_8;
      }
      v14 = "Failed to convert tagid to tagref";
      v15 = 4375;
      goto LABEL_15;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v22);
  AslFileMappingDelete(P);
  return v20;
}
