/*
 * XREFs of SdbOpenDatabaseEx @ 0x1407D4BA8
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1407D79BC (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     SdbpReadMappedData @ 0x1405FD5A8 (SdbpReadMappedData.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1405FFA84 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpOpenCompressedDatabase @ 0x1407D8690 (SdbpOpenCompressedDatabase.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x1407D9770 (AslFileMappingEnsureMappedAs.c)
 */

__int64 SdbOpenDatabaseEx(const WCHAR *a1, __int64 a2, __int64 a3, ...)
{
  PVOID v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  const char *v7; // r9
  int v8; // r8d
  __int64 v9; // rdi
  PVOID *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v4 = AslAlloc((__int64)a1, 0x580uLL);
  v15 = (__int64)v4;
  v5 = (__int64)v4;
  if ( v4 )
  {
    memset(v4, 0, 0x580uLL);
    v6 = AslFileMappingCreate((PVOID **)v5, a1, 0LL, 0LL, 0LL);
    if ( v6 < 0 )
    {
      v7 = "Failed to create file mapping [%x]";
      v8 = 884;
LABEL_5:
      LODWORD(v12) = v6;
      AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v8, (_DWORD)v7, v12);
      goto LABEL_22;
    }
    v9 = *(_QWORD *)(*(_QWORD *)v5 + 24LL);
    if ( (unsigned __int64)(v9 - 42) > 0x7FFFFFD5 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbOpenDatabaseEx",
        893,
        (unsigned int)"Failed to open SDB - File size too large or small.");
    }
    else
    {
      v6 = AslFileMappingEnsureMappedAs();
      if ( v6 < 0 )
      {
        v7 = "Failed to map SDB [%x]";
        v8 = 899;
        goto LABEL_5;
      }
      *(_DWORD *)(v5 + 16) = 0;
      *(_DWORD *)(v5 + 20) = v9;
      v10 = *(PVOID **)v5;
      if ( *(_QWORD *)v5 )
        v10 = (PVOID *)v10[4];
      *(_QWORD *)(v5 + 8) = v10;
      if ( !(unsigned int)SdbpReadMappedData(v5, 0, &v13, 0xCu) )
      {
        AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 912, (unsigned int)"Failed to read database header");
        goto LABEL_22;
      }
      v6 = v14;
      if ( v14 != 1717724275 )
      {
        if ( v14 != 1717724282 )
        {
          v7 = "Magic does not match a valid value: 0x%lx";
          v8 = 925;
          goto LABEL_5;
        }
        if ( !(unsigned int)SdbpOpenCompressedDatabase((__int64 *)va, 0LL, 0LL) )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbOpenDatabaseEx",
            931,
            (unsigned int)"SdbpOpenCompressedDatabase failed to open compressed database.");
          v5 = v15;
          goto LABEL_22;
        }
        return v15;
      }
      if ( (unsigned int)SdbpValidateAndApplyCompatFlags(v5, &v13, 0) )
        return v5;
    }
LABEL_22:
    if ( v5 )
    {
      AslFileMappingDelete(*(PVOID **)v5);
      ExFreePoolWithTag((PVOID)v5, 0x74705041u);
    }
    return 0LL;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 873, (unsigned int)"Failed to allocate DB structure");
  return 0LL;
}
