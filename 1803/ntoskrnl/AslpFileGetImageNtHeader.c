/*
 * XREFs of AslpFileGetImageNtHeader @ 0x1407DD300
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x1407D9A08 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x1407DC868 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x1407DCC70 (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x1407DD3DC (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x1407DE37C (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+20h] [rbp-28h]

  if ( *(_DWORD *)(a2 + 64) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = v5 + v4;
    v7 = v5 + 264;
    if ( *(_QWORD *)(a2 + 24) < v7 || *(_QWORD *)(a2 + 40) < v7 )
    {
      v3 = -1073741701;
      v10 = -1073741701;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslpFileGetImageNtHeader",
        2839,
        (unsigned int)"File mapping invalid [%x]",
        v10);
    }
    else
    {
      *a1 = v6;
      return 0;
    }
  }
  else
  {
    v3 = -1073741637;
    v9 = -1073741637;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslpFileGetImageNtHeader",
      2827,
      (unsigned int)"File mapping not a PE [%x]",
      v9);
  }
  return v3;
}
