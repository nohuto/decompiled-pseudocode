/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x1407D9770
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407D4BA8 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407D5CE4 (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x1407DC6B4 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x140644284 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  int *v1; // rsi
  int v2; // edx
  __int64 result; // rax
  int v5; // eax
  unsigned int v6; // ebx
  int FileKind; // eax

  v1 = (int *)(a1 + 64);
  v2 = *(_DWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) )
  {
    result = 3221226605LL;
    if ( v2 == 1 )
      return 3221225758LL;
  }
  else if ( v2 == 1 )
  {
    return 3221225758LL;
  }
  else
  {
    v5 = RtlFileMapMapView(a1 + 8, 0);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 59) )
      {
        *v1 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind((_QWORD *)(a1 + 8), v1);
        v6 = FileKind;
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(
            1LL,
            (unsigned int)"AslFileMappingEnsureMappedAs",
            503,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
            *(_QWORD *)a1,
            FileKind);
          *v1 = 3;
        }
      }
    }
    else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 59) )
    {
      return 0;
    }
    return v6;
  }
  return result;
}
