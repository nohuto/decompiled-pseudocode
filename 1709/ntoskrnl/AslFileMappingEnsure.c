/*
 * XREFs of AslFileMappingEnsure @ 0x1407726B8
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x140772860 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x140772A24 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x140773354 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140773D4C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140774268 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140774400 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1407747F8 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x1407749CC (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x14028CE60 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x1405DB06C (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  int *v4; // rsi

  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( *(_DWORD *)(a1 + 64) == 1 )
      return 3221225758LL;
    return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      return 0;
    }
    else
    {
      v4 = (int *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 64) == 1 )
        return 3221225758LL;
      FileKind = RtlFileMapMapView(a1 + 8, 0);
      if ( FileKind >= 0 )
      {
        if ( *(_BYTE *)(a1 + 59) )
        {
          *v4 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind((_QWORD *)(a1 + 8), v4);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(1LL);
            *v4 = 3;
          }
        }
      }
    }
    return (unsigned int)FileKind;
  }
}
