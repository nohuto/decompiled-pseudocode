/*
 * XREFs of AslFileMappingCreateFromImageView @ 0x1405DAF64
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140544CEC (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     AslFileMappingDelete @ 0x140544E28 (AslFileMappingDelete.c)
 *     AslStringDuplicate @ 0x140547940 (AslStringDuplicate.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x1405DB06C (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingCreateFromImageView(wchar_t ***a1, const wchar_t *a2, wchar_t *a3, wchar_t *a4)
{
  wchar_t **v8; // rax
  wchar_t **v9; // rbx
  int v10; // edi

  if ( !a2 || !*a2 || !a1 || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = (wchar_t **)AslAlloc((__int64)a1, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = AslStringDuplicate(v8, a2);
    if ( v10 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslFileMappingCreateFromImageView",
        319,
        (unsigned int)"AslStringDuplicate failed [%x]");
    }
    else
    {
      *((_DWORD *)v9 + 20) = 1;
      memset(v9 + 1, 0, 0x38uLL);
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[3] = a4;
      *((_DWORD *)v9 + 14) = 0x1000000;
      v9[4] = a3;
      v9[5] = a4;
      if ( a4 )
      {
        if ( (int)AslpFileMappingGetFileKind(v9 + 1, v9 + 8) < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingCreateFromImageView",
            352,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
          *((_DWORD *)v9 + 16) = 3;
        }
      }
      else
      {
        *((_DWORD *)v9 + 16) = 1;
      }
      *a1 = v9;
      v10 = 0;
      v9 = 0LL;
    }
    if ( v9 )
      AslFileMappingDelete((PVOID *)v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
