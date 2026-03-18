/*
 * XREFs of AslpFileQueryExportName @ 0x1407DE37C
 * Callers:
 *     AslpFileGetExportName @ 0x1407DCE0C (AslpFileGetExportName.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     RtlStringCchCopyA @ 0x1400C324C (RtlStringCchCopyA.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1407DD300 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1407DEAD0 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int ImageNtHeader; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  unsigned int *v8; // rax
  unsigned __int64 v9; // rdx
  const char *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  size_t v13; // rdx
  int v15; // [rsp+20h] [rbp-28h]
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  Size = 0;
  v17 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v17, a2);
  v5 = ImageNtHeader;
  if ( ImageNtHeader < 0 )
  {
    v6 = "AslpFileGetImageNtHeader failed [%x]";
    v7 = 3254;
LABEL_3:
    v15 = ImageNtHeader;
    AslLogCallPrintf(1LL, (unsigned int)"AslpFileQueryExportName", v7, (_DWORD)v6, v15);
    return v5;
  }
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 32), *(_BYTE *)(a2 + 59), 0, &Size);
  if ( v8 && Size >= 0x28 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    if ( (unsigned __int64)v8 < v9 || (unsigned __int64)(v8 + 10) > *(_QWORD *)(a2 + 24) + v9 )
    {
      v5 = -1073741701;
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslpFileQueryExportName",
        3285,
        (unsigned int)"Export directory pointer invalid (points to location outside file), invalid image format");
      return v5;
    }
    v10 = (const char *)AslpImageRvaToVa(v17, a2 + 8, v8[3]);
    if ( !v10 || (v11 = *(_QWORD *)(a2 + 32), v12 = *(_QWORD *)(a2 + 24), (unsigned __int64)v10 >= v12 + v11) || !*v10 )
    {
      v5 = -1073741701;
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslpFileQueryExportName",
        3294,
        (unsigned int)"Export directory invalid or invalid image format");
      return v5;
    }
    v13 = (unsigned int)(v11 + v12 - (_DWORD)v10);
    if ( (unsigned int)v13 > 0x100 )
      v13 = 256LL;
    ImageNtHeader = RtlStringCchCopyA(pszDest, v13, v10);
    v5 = ImageNtHeader;
    if ( ImageNtHeader >= 0 )
      return 0;
    v6 = "RtlStringCchCopyA failed [%x]";
    v7 = 3306;
    goto LABEL_3;
  }
  v5 = -1073741275;
  if ( v8 )
    AslLogCallPrintf(
      2LL,
      (unsigned int)"AslpFileQueryExportName",
      3271,
      (unsigned int)"RtlImageDirectoryEntryToData returned ExportDirectory that was too small");
  return v5;
}
