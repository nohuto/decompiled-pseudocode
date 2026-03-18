/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x14072EB48
 * Callers:
 *     SdbOpenDatabaseEx @ 0x14072AD3C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x14072BDB4 (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x14072F8CC (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x1405C70CC (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  __int64 result; // rax
  int *v3; // rsi
  int v4; // eax
  int FileKind; // edi

  if ( *(_DWORD *)(a1 + 80) )
  {
    result = 3221226605LL;
    if ( *(_DWORD *)(a1 + 64) == 1 )
      return 3221225758LL;
  }
  else
  {
    v3 = (int *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 64) == 1 )
    {
      return 3221225758LL;
    }
    else
    {
      v4 = RtlFileMapMapView(a1 + 8, 0);
      FileKind = v4;
      if ( v4 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 59) )
        {
          *v3 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind((_QWORD *)(a1 + 8), v3);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(1LL);
            *v3 = 3;
          }
        }
      }
      else if ( v4 == -1073741554 && !*(_BYTE *)(a1 + 59) )
      {
        return 0;
      }
      return (unsigned int)FileKind;
    }
  }
  return result;
}
