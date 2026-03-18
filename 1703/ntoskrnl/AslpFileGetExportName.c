/*
 * XREFs of AslpFileGetExportName @ 0x140730014
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x1407306F4 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AslStringAnsiToUnicode @ 0x14072E47C (AslStringAnsiToUnicode.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 *     AslpFileQueryExportName @ 0x1407314AC (AslpFileQueryExportName.c)
 */

__int64 __fastcall AslpFileGetExportName(wchar_t **a1)
{
  int ExportName; // eax
  int v3; // ebx
  char pszDest[256]; // [rsp+30h] [rbp-118h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  ExportName = AslpFileQueryExportName(pszDest);
  v3 = ExportName;
  if ( ExportName >= 0 )
  {
    v3 = AslStringAnsiToUnicode(a1, pszDest);
    if ( v3 >= 0 )
      return 0;
    goto LABEL_4;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
LABEL_4:
    AslLogCallPrintf(1LL);
  return (unsigned int)v3;
}
