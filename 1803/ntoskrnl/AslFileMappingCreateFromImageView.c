/*
 * XREFs of AslFileMappingCreateFromImageView @ 0x140644174
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1405FC168 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AslFileMappingDelete @ 0x1405FC298 (AslFileMappingDelete.c)
 *     AslStringDuplicate @ 0x1405FC890 (AslStringDuplicate.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x140644284 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingCreateFromImageView(wchar_t ***a1, const wchar_t *a2, wchar_t *a3, wchar_t *a4)
{
  wchar_t **v8; // rax
  wchar_t **v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  _DWORD *v12; // rdi
  int FileKind; // eax

  if ( !a2 || !*a2 || !a1 || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = (wchar_t **)AslAlloc((__int64)a1, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = AslStringDuplicate(v8, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslFileMappingCreateFromImageView",
        319,
        (unsigned int)"AslStringDuplicate failed [%x]",
        v10);
    }
    else
    {
      *((_DWORD *)v9 + 20) = 1;
      memset(v9 + 1, 0, 0x38uLL);
      v9[1] = 0LL;
      v12 = v9 + 8;
      v9[2] = 0LL;
      v9[3] = a4;
      *((_DWORD *)v9 + 14) = 0x1000000;
      v9[4] = a3;
      v9[5] = a4;
      if ( a4 )
      {
        FileKind = AslpFileMappingGetFileKind(v9 + 1, v9 + 8);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingCreateFromImageView",
            352,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
            *v9,
            FileKind);
          *v12 = 3;
        }
      }
      else
      {
        *v12 = 1;
      }
      *a1 = v9;
      v11 = 0;
      v9 = 0LL;
    }
    if ( v9 )
      AslFileMappingDelete((PVOID *)v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v11;
}
