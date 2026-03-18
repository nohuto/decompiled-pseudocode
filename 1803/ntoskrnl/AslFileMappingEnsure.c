/*
 * XREFs of AslFileMappingEnsure @ 0x1407D969C
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1407D9844 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x1407D9A08 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x1407DC024 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1407DCA40 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1407DCF5C (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1407DD0F4 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1407DD538 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x1407DD710 (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1402C28B0 (RtlFileMapMapView.c)
 *     AslpFileMappingGetFileKind @ 0x140644284 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int v3; // edi
  int *v4; // rsi
  int FileKind; // eax
  int v6; // [rsp+28h] [rbp-10h]

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
      v3 = RtlFileMapMapView(a1 + 8, 0);
      if ( v3 >= 0 )
      {
        if ( *(_BYTE *)(a1 + 59) )
        {
          *v4 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind((_QWORD *)(a1 + 8), v4);
          v3 = FileKind;
          if ( FileKind < 0 )
          {
            v6 = FileKind;
            AslLogCallPrintf(
              1LL,
              (unsigned int)"AslFileMappingEnsure",
              591,
              (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
              *(_QWORD *)a1,
              v6);
            *v4 = 3;
          }
        }
      }
    }
    return (unsigned int)v3;
  }
}
