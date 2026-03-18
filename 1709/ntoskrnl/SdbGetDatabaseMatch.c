/*
 * XREFs of SdbGetDatabaseMatch @ 0x140544CEC
 * Callers:
 *     PiIsDriverBlocked @ 0x140544A88 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AslFileMappingDelete @ 0x140544E28 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x140544E7C (SdbpReleaseSearchDBContext.c)
 *     AslFileMappingCreate @ 0x140545E54 (AslFileMappingCreate.c)
 *     SdbpCreateSearchDBContext @ 0x140547F20 (SdbpCreateSearchDBContext.c)
 *     SdbpSearchDB @ 0x14054AA7C (SdbpSearchDB.c)
 *     AslFileMappingCreateFromImageView @ 0x1405DAF64 (AslFileMappingCreateFromImageView.c)
 *     SdbTagIDToTagRef @ 0x1405E8EF4 (SdbTagIDToTagRef.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // eax
  const char *v10; // r9
  int v11; // r8d
  const char *v12; // r9
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rbx
  int v16; // [rsp+28h] [rbp-D8h]
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v19[24]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v20[32]; // [rsp+A0h] [rbp-60h] BYREF

  memset(&v19[2], 0, 0x58uLL);
  memset(v20, 0, sizeof(v20));
  v17 = 0;
  P = 0LL;
  v19[0] = 10;
  if ( a4 )
    v19[0] = 26;
  if ( (int)AslFileMappingCreate((unsigned int)&P, a2, -1, 0, 0LL) >= 0 )
    goto LABEL_4;
  if ( !a4 )
  {
    v10 = "Failed to create initialize file mapping [%x]";
    v11 = 3936;
    goto LABEL_13;
  }
  if ( (int)AslFileMappingCreateFromImageView(&P, a2, a4, a5) < 0 )
  {
    v10 = "Failed to initialize file mapping from image view [%x]";
    v11 = 3928;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v11, (_DWORD)v10);
    goto LABEL_8;
  }
LABEL_4:
  if ( !(unsigned int)SdbpCreateSearchDBContext(v19, P) )
  {
    v12 = "Failed to create search DB context";
    v13 = 3945;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"SdbGetDatabaseMatch", v13, (_DWORD)v12);
    goto LABEL_8;
  }
  v8 = SdbpSearchDB(a1, *(_QWORD *)(a1 + 8), v20, v16);
  if ( v8 > 0x10 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatch",
      3960,
      (unsigned int)"The database has more matches than SDB_MAX_EXES");
    v8 = 16;
  }
  if ( v8 )
  {
    v14 = v8 - 1;
    v15 = v14;
    if ( v14 >= 0 )
    {
      while ( (v20[2 * v15 + 1] & 2) != 0
           || (unsigned int)SdbTagIDToTagRef(a1, *(_QWORD *)(a1 + 8), (unsigned int)v20[2 * v15], &v17) )
      {
        if ( --v15 < 0 )
          goto LABEL_8;
      }
      v12 = "Failed to convert tagid to tagref";
      v13 = 3979;
      goto LABEL_15;
    }
  }
LABEL_8:
  SdbpReleaseSearchDBContext(v19);
  AslFileMappingDelete(P);
  return v17;
}
