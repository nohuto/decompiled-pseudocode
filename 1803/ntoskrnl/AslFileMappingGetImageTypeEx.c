/*
 * XREFs of AslFileMappingGetImageTypeEx @ 0x1407D9A08
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1407D9844 (AslFileMappingGetFileKindDetail.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407D969C (AslFileMappingEnsure.c)
 *     AslpFileGetImageNtHeader @ 0x1407DD300 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1407DEAD0 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslFileMappingGetImageTypeEx(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  unsigned int v7; // r14d
  __int16 v8; // r8
  __int16 v9; // r15
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  int ImageNtHeader; // eax
  const char *v14; // r9
  int v15; // r8d
  __int64 v16; // rax
  __int16 v18; // [rsp+30h] [rbp-68h]
  _QWORD v19[10]; // [rsp+48h] [rbp-50h] BYREF
  _WORD *v21; // [rsp+A8h] [rbp+10h]

  v21 = a2;
  v19[0] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(a5 + 64) == 1 )
  {
    v12 = -1073741701;
    goto LABEL_24;
  }
  ImageNtHeader = AslFileMappingEnsure(a5);
  v12 = ImageNtHeader;
  if ( ImageNtHeader < 0 )
  {
    v14 = "AslFileMappingEnsure failed [%x]";
    v15 = 1102;
LABEL_5:
    AslLogCallPrintf(1LL, (unsigned int)"AslFileMappingGetImageTypeEx", v15, (_DWORD)v14, ImageNtHeader);
LABEL_6:
    v11 = 0;
    v10 = 0;
    a2 = v21;
    v8 = 0;
    goto LABEL_24;
  }
  if ( *(_DWORD *)(a5 + 64) != 6 )
  {
    v12 = -1073741701;
    goto LABEL_6;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(v19, a5);
  v12 = ImageNtHeader;
  if ( ImageNtHeader < 0 )
  {
    v14 = "AslpFileGetImageNtHeader failed [%x]";
    v15 = 1122;
    goto LABEL_5;
  }
  v8 = *(_WORD *)(v19[0] + 4LL);
  v18 = v8;
  v9 = *(_WORD *)(v19[0] + 24LL);
  if ( *(_DWORD *)(a5 + 80) || !a3 && !a4 )
    goto LABEL_12;
  if ( v9 == 267 )
  {
    v7 = *(_DWORD *)(v19[0] + 232LL);
  }
  else if ( v9 == 523 )
  {
    v7 = *(_DWORD *)(v19[0] + 248LL);
  }
  if ( v7 )
  {
    v16 = AslpImageRvaToVa(v19[0], a5 + 8, v7);
    if ( v16 )
    {
      v10 = 1;
      v11 = *(_DWORD *)(v16 + 16);
      v12 = 0;
    }
    else
    {
      AslLogCallPrintf(
        2LL,
        (unsigned int)"AslFileMappingGetImageTypeEx",
        1176,
        (unsigned int)"Failed to find the Cor20Header");
      v12 = 0;
      v11 = 0;
      v10 = 0;
    }
    a2 = v21;
    v8 = v18;
  }
  else
  {
LABEL_12:
    v12 = 0;
    v11 = 0;
    v10 = 0;
    a2 = v21;
  }
LABEL_24:
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  return v12;
}
