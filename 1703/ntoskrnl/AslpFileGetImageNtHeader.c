/*
 * XREFs of AslpFileGetImageNtHeader @ 0x1407304BC
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x14072EDE0 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x14072FA70 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x14072FE78 (AslpFileGetExeWrapper.c)
 *     AslpFileGetNtHeaderAttributes @ 0x140730598 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileQueryExportName @ 0x1407314AC (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
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
