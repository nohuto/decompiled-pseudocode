/*
 * XREFs of AslpFileGetExeWrapper @ 0x140773F7C
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x1407747F8 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1407745C0 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x140774F28 (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x140775064 (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x140775CF0 (AslpHasStarForceWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  __int64 v6; // rdi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0;
  v7 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v7, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_4;
  v6 = v7;
  if ( (unsigned int)AslpFileHasSecuromWrapper(v7) )
  {
    *a1 = 1;
    return 0;
  }
  ImageNtHeader = AslpFileHasActiveMarkWrapper(&v7, v6, a2);
  if ( ImageNtHeader >= 0 )
  {
    if ( (_DWORD)v7 )
    {
      *a1 = 2;
    }
    else if ( *(_DWORD *)v6 == 17744 && *(_BYTE *)(v6 + 26) == 83 && *(_BYTE *)(v6 + 27) == 82 )
    {
      *a1 = 3;
    }
    else if ( (unsigned int)AslpHasStarForceWrapper(v6) )
    {
      *a1 = 4;
    }
    return 0;
  }
  if ( ImageNtHeader == -1073741275 )
  {
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
LABEL_4:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
