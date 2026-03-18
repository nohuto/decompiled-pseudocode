/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x1407DDF44
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1407DD65C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpFileVerBlockGetValueOffset @ 0x1402C2D88 (AslpFileVerBlockGetValueOffset.c)
 *     AslStringXmlSanitize @ 0x1407D9204 (AslStringXmlSanitize.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpFileQueryVersionString @ 0x1407DE540 (AslpFileQueryVersionString.c)
 *     AslpFileVerQueryBlock @ 0x1407DE780 (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int VersionString; // eax
  unsigned __int16 *v8; // rsi
  unsigned int v9; // edi
  const char *v10; // r9
  int v11; // r8d
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-20h]
  const wchar_t *pszSrc; // [rsp+28h] [rbp-18h]
  int v24[2]; // [rsp+30h] [rbp-10h] BYREF
  int v25[2]; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 v27; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  *(_QWORD *)v24 = 0LL;
  *(_QWORD *)v25 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  if ( !a2 )
  {
    v4 = (_DWORD *)(a1 + 184);
    v5 = 8LL;
    do
    {
      *v4 |= 2u;
      v4 += 8;
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
  VersionString = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v27, &v26);
  v6 = VersionString;
  if ( VersionString == -1073741275 )
  {
    v8 = 0LL;
    v9 = 0;
  }
  else
  {
    if ( VersionString < 0 )
    {
      v10 = "AslpFileVerQueryBlock failed [%x]";
      v11 = 1721;
LABEL_28:
      LODWORD(v22) = VersionString;
      AslLogCallPrintf(1LL, (unsigned int)"AslpFileMakeStringVersionAttributes", v11, (_DWORD)v10, v22);
      return v6;
    }
    v12 = v26;
    v13 = v27;
    v8 = 0LL;
    v9 = 0;
    if ( AslpFileVerBlockGetValueOffset(&v28, v27, v26) >= 0 && v12 > v28 )
    {
      v8 = (unsigned __int16 *)(v28 + v13);
      v9 = v12 - v28;
    }
  }
  v14 = 0LL;
  v15 = (unsigned __int64)v9 >> 2;
  do
  {
    v16 = *(int *)((char *)&unk_1402F2640 + v14);
    pszSrc = *(const wchar_t **)((char *)&unk_1402F2640 + v14 + 8);
    LODWORD(v26) = *(_DWORD *)((char *)&unk_1402F2640 + v14);
    VersionString = AslpFileQueryVersionString((int)v24, (int)v25, v2, (int)v8, v15, pszSrc);
    v6 = VersionString;
    if ( VersionString < 0 )
    {
      if ( VersionString != -1073741275 )
      {
        v10 = "AslpFileQueryVersionString failed [%x]";
        v11 = 1776;
        goto LABEL_28;
      }
      *(_DWORD *)(32 * v16 + a1 + 24) |= 2u;
    }
    else
    {
      v17 = *(_QWORD *)v24;
      VersionString = AslStringXmlSanitize(*(_WORD **)v24);
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        v10 = "AslStringXmlSanitize failed [%x]";
        v11 = 1763;
        goto LABEL_28;
      }
      v18 = 32LL * (int)v26;
      v19 = -1LL;
      *(_DWORD *)(v18 + a1) = 4;
      do
        ++v19;
      while ( *(_WORD *)(v17 + 2 * v19) );
      *(_DWORD *)(v18 + a1 + 24) |= 1u;
      *(_QWORD *)(v18 + a1 + 8) = v19;
      *(_QWORD *)(v18 + a1 + 16) = v17;
    }
    v14 += 16LL;
  }
  while ( v14 < 0x80 );
  if ( v8 && v15 == 1 )
  {
    *(_DWORD *)(a1 + 768) = 2;
    *(_QWORD *)(a1 + 776) = 4LL;
    v20 = *v8;
    *(_DWORD *)(a1 + 792) |= 1u;
    *(_QWORD *)(a1 + 784) = v20;
  }
  else
  {
    *(_DWORD *)(a1 + 792) |= 2u;
  }
  return 0;
}
