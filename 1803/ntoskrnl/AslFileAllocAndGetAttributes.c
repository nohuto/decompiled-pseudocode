/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x1407DC024
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407D8878 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407D969C (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x1407DC6B4 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1407DCA40 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1407DCED8 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1407DCF5C (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1407DD0F4 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1407DD538 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionAttributes @ 0x1407DD65C (AslpFileGetVersionAttributes.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1407DEB48 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // edx
  int *i; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // rcx
  int PeExportNameExeWrapper; // eax
  const char *v13; // r9
  int v14; // r8d
  int v15; // edi
  __int64 j; // r13
  int VersionAttributes; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-38h]

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 64) == 1 )
    {
      v6 = 0;
      for ( i = (int *)(a1 + 24); ; i += 8 )
      {
        v8 = *i;
        if ( !v6 || v6 == 17 )
          break;
        if ( v6 == 28 )
        {
          *((_QWORD *)i - 1) = 1LL;
LABEL_11:
          *(i - 6) = 2;
          v9 = v8 | 1;
          *((_QWORD *)i - 2) = 4LL;
          goto LABEL_12;
        }
        v9 = v8 | 2;
LABEL_12:
        *i = v9;
        if ( ++v6 >= 33 )
          return 0;
      }
      *((_QWORD *)i - 1) = 0LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a2 + 80) )
    {
      v10 = 0;
      v11 = (_DWORD *)(a1 + 24);
      do
      {
        if ( v10 != 1 && (v10 <= 16 || v10 > 19 && v10 != 22 && (v10 <= 27 || v10 > 31)) )
          *v11 |= 2u;
        ++v10;
        v11 += 8;
      }
      while ( v10 < 33 );
    }
    PeExportNameExeWrapper = AslFileMappingEnsure(a2);
    v5 = PeExportNameExeWrapper;
    if ( PeExportNameExeWrapper == -1073741801 )
    {
      if ( !*(_DWORD *)(a2 + 80) )
      {
        PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, a2);
        v5 = PeExportNameExeWrapper;
        if ( PeExportNameExeWrapper < 0 )
        {
          v13 = "AslpFileLargeEnsureLargeFileMapping failed [%x]";
          v14 = 491;
LABEL_28:
          LODWORD(v21) = PeExportNameExeWrapper;
          AslLogCallPrintf(1LL, (unsigned int)"AslFileAllocAndGetAttributes", v14, (_DWORD)v13, v21);
          return v5;
        }
        goto LABEL_31;
      }
    }
    else if ( PeExportNameExeWrapper >= 0 )
    {
LABEL_31:
      v15 = 0;
      for ( j = 0LL; ; j += 32LL )
      {
        if ( ((a3 >> v15) & 1) == 0 || (*(_DWORD *)(a1 + j + 24) & 3) != 0 )
          goto LABEL_45;
        if ( v15 > 23 )
        {
          switch ( v15 )
          {
            case 24:
              goto LABEL_42;
            case 25:
LABEL_75:
              PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v13 = "AslpFileGetPeExportNameExeWrapper failed [%x]";
                v14 = 611;
                goto LABEL_28;
              }
              break;
            case 26:
              goto LABEL_73;
            case 27:
              PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v13 = "AslpFileGetClrVersionAttribute failed [%x]";
                v14 = 620;
                goto LABEL_28;
              }
              break;
            case 28:
              PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v13 = "AslpFileGetFileKindDetailAttribute failed [%x]";
                v14 = 586;
                goto LABEL_28;
              }
              break;
            default:
              if ( v15 > 31 )
                goto LABEL_68;
LABEL_58:
              PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
              v5 = PeExportNameExeWrapper;
              if ( PeExportNameExeWrapper < 0 )
              {
                v13 = "AslpFileGetHeaderAttributesPE failed [%x]";
                v14 = 601;
                goto LABEL_28;
              }
              break;
          }
        }
        else
        {
          if ( v15 == 23 )
            goto LABEL_75;
          if ( v15 <= 17 )
          {
            switch ( v15 )
            {
              case 17:
                switch ( *(_DWORD *)(a2 + 64) )
                {
                  case 4:
                    v19 = 1LL;
                    break;
                  case 5:
                    v19 = 2LL;
                    break;
                  case 6:
                    v19 = 3LL;
                    break;
                  default:
                    v19 = 0LL;
                    break;
                }
                *(_DWORD *)(a1 + 568) |= 1u;
                *(_DWORD *)(a1 + 544) = 2;
                *(_QWORD *)(a1 + 552) = 4LL;
                *(_QWORD *)(a1 + 560) = v19;
                goto LABEL_45;
              case 0:
LABEL_68:
                v20 = *(_QWORD *)(a2 + 24);
                *(_DWORD *)(a1 + 1048) |= 1u;
                *(_DWORD *)(a1 + 24) |= 1u;
                *(_QWORD *)(a1 + 1040) = v20;
                *(_QWORD *)(a1 + 16) = (unsigned int)v20;
                *(_DWORD *)(a1 + 1024) = 3;
                *(_QWORD *)(a1 + 1032) = 8LL;
                *(_DWORD *)a1 = 2;
                *(_QWORD *)(a1 + 8) = 4LL;
                goto LABEL_45;
              case 1:
                goto LABEL_58;
            }
            if ( v15 != 2 )
            {
              if ( v15 <= 2 )
                return (unsigned int)-1073741595;
LABEL_42:
              VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
              if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
              {
                LODWORD(v21) = VersionAttributes;
                AslLogCallPrintf(
                  1LL,
                  (unsigned int)"AslFileAllocAndGetAttributes",
                  558,
                  (unsigned int)"AslpFileGetVersionAttributes failed [%x]",
                  v21);
              }
              goto LABEL_45;
            }
LABEL_73:
            PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
            v5 = PeExportNameExeWrapper;
            if ( PeExportNameExeWrapper < 0 )
            {
              v13 = "AslpFileGetChecksumAttributes failed [%x]";
              v14 = 640;
              goto LABEL_28;
            }
            goto LABEL_45;
          }
          if ( v15 <= 19 || v15 > 21 )
            goto LABEL_58;
          PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
          v5 = PeExportNameExeWrapper;
          if ( PeExportNameExeWrapper < 0 )
          {
            v13 = "AslpFileGetHeaderAttributesNE failed [%x]";
            v14 = 630;
            goto LABEL_28;
          }
        }
LABEL_45:
        if ( ++v15 >= 33 )
          return 0;
      }
    }
    v13 = "AslFileMappingEnsure failed [%x]";
    v14 = 495;
    goto LABEL_28;
  }
  return 0;
}
