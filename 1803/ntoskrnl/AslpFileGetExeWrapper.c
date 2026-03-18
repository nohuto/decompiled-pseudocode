/*
 * XREFs of AslpFileGetExeWrapper @ 0x1407DCC70
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x1407DD538 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1407DD300 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x1407DDC70 (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x1407DDDAC (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x1407DEA4C (AslpHasStarForceWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // eax
  int HasActiveMarkWrapper; // ebx
  __int64 v7; // rdi
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0;
  v8 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v8, a2);
  HasActiveMarkWrapper = ImageNtHeader;
  if ( ImageNtHeader >= 0 )
  {
    v7 = v8;
    if ( (unsigned int)AslpFileHasSecuromWrapper(v8) )
    {
      *a1 = 1;
    }
    else
    {
      HasActiveMarkWrapper = AslpFileHasActiveMarkWrapper(&v8, v7, a2);
      if ( HasActiveMarkWrapper < 0 )
      {
        if ( HasActiveMarkWrapper == -1073741275 )
          AslLogCallPrintf(
            2LL,
            (unsigned int)"AslpFileGetExeWrapper",
            2916,
            (unsigned int)"AslpFileHasActiveMarkWrapper failed (FileSize: %I64u) [%x]",
            *(_QWORD *)(a2 + 24),
            -1073741275,
            -1073741275);
        else
          AslLogCallPrintf(
            1LL,
            (unsigned int)"AslpFileGetExeWrapper",
            2918,
            (unsigned int)"AslpFileHasActiveMarkWrapper failed [%x]",
            HasActiveMarkWrapper);
        return (unsigned int)HasActiveMarkWrapper;
      }
      if ( (_DWORD)v8 )
      {
        *a1 = 2;
      }
      else if ( *(_DWORD *)v7 == 17744 && *(_BYTE *)(v7 + 26) == 83 && *(_BYTE *)(v7 + 27) == 82 )
      {
        *a1 = 3;
      }
      else if ( (unsigned int)AslpHasStarForceWrapper(v7) )
      {
        *a1 = 4;
      }
    }
    return 0;
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetExeWrapper",
      2891,
      (unsigned int)"AslpFileGetImageNtHeader failed [%x]",
      ImageNtHeader);
  }
  return (unsigned int)HasActiveMarkWrapper;
}
