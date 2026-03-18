/*
 * XREFs of AslFileMappingEnsure @ 0x14072EA74
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x14072EC1C (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x14072EDE0 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x14072F250 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14072FC48 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140730164 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1407302FC (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1407306F4 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x1407308C8 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x1405C70CC (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
