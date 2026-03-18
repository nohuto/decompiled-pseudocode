/*
 * XREFs of SdbOpenDatabaseEx @ 0x14076DA64
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1407706E0 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1404F5AC8 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpReadMappedData @ 0x140524D2C (SdbpReadMappedData.c)
 *     AslFileMappingDelete @ 0x140544E28 (AslFileMappingDelete.c)
 *     AslFileMappingCreate @ 0x140545E54 (AslFileMappingCreate.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     SdbpOpenCompressedDatabase @ 0x1407713B0 (SdbpOpenCompressedDatabase.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslFileMappingEnsureMappedAs @ 0x14077278C (AslFileMappingEnsureMappedAs.c)
 */

__int64 *SdbOpenDatabaseEx(const WCHAR *a1, __int64 a2, __int64 a3, ...)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  const char *v6; // r9
  int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+38h] [rbp-10h]
  __int64 *v13; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, __int64 *);
  v4 = (__int64 *)AslAlloc((__int64)a1, 0x580uLL);
  v13 = v4;
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x580uLL);
    if ( (int)AslFileMappingCreate(v5, a1, 0LL, 0LL, 0LL) >= 0 )
    {
      v8 = *(_QWORD *)(*v5 + 24);
      if ( (unsigned __int64)(v8 - 42) > 0x7FFFFFD5 )
      {
        v6 = "Failed to open SDB - File size too large or small.";
        v7 = 893;
        goto LABEL_21;
      }
      if ( (int)AslFileMappingEnsureMappedAs() >= 0 )
      {
        *((_DWORD *)v5 + 4) = 0;
        *((_DWORD *)v5 + 5) = v8;
        v9 = *v5;
        if ( *v5 )
          v9 = *(_QWORD *)(v9 + 32);
        v5[1] = v9;
        if ( (unsigned int)SdbpReadMappedData((__int64)v5, 0, &v11, 0xCu) )
        {
          if ( v12 == 1717724275 )
          {
            if ( !(unsigned int)SdbpValidateAndApplyCompatFlags((__int64)v5, &v11, 0) )
              goto LABEL_22;
          }
          else
          {
            if ( v12 != 1717724282 )
            {
              v6 = "Magic does not match a valid value: 0x%lx";
              v7 = 925;
              goto LABEL_21;
            }
            if ( !(unsigned int)SdbpOpenCompressedDatabase((__int64 **)va, 0LL, 0LL) )
            {
              AslLogCallPrintf(
                1,
                (unsigned int)"SdbOpenDatabaseEx",
                931,
                (unsigned int)"SdbpOpenCompressedDatabase failed to open compressed database.");
              v5 = v13;
              goto LABEL_22;
            }
            return v13;
          }
          return v5;
        }
        v6 = "Failed to read database header";
        v7 = 912;
      }
      else
      {
        v6 = "Failed to map SDB [%x]";
        v7 = 899;
      }
    }
    else
    {
      v6 = "Failed to create file mapping [%x]";
      v7 = 884;
    }
LABEL_21:
    AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", v7, (_DWORD)v6);
LABEL_22:
    if ( v5 )
    {
      AslFileMappingDelete((PVOID *)*v5);
      ExFreePoolWithTag(v5, 0x74705041u);
    }
    return 0LL;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbOpenDatabaseEx", 873, (unsigned int)"Failed to allocate DB structure");
  return 0LL;
}
