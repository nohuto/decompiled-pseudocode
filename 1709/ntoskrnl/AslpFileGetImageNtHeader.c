/*
 * XREFs of AslpFileGetImageNtHeader @ 0x1407745C0
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x140772A24 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x140773B74 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x140773F7C (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x14077469C (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x140775620 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax

  if ( *(_DWORD *)(a2 + 64) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = v5 + v4;
    v7 = v5 + 264;
    if ( *(_QWORD *)(a2 + 24) < v7 || *(_QWORD *)(a2 + 40) < v7 )
    {
      v3 = -1073741701;
      AslLogCallPrintf(1LL);
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
    AslLogCallPrintf(1LL);
  }
  return v3;
}
