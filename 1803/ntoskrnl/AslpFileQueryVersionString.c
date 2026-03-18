/*
 * XREFs of AslpFileQueryVersionString @ 0x1407DE540
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1407DDF44 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14009F42C (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140161C60 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpFileVerQueryBlock @ 0x1407DE780 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x1407DE994 (AslpFileVerStringBlockGetValue.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        NTSTRSAFE_PCWSTR pszSrc)
{
  __int64 v10; // rdi
  NTSTATUS v11; // ebx
  int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // eax
  const char *v15; // r9
  int v16; // r8d
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PCWSTR v23; // [rsp+50h] [rbp-B0h]
  wchar_t pszDest[128]; // [rsp+60h] [rbp-A0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v23 = pszSrc;
  pszDest[0] = 0;
  v22 = 0LL;
  v10 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    v11 = RtlStringCchCopyW(pszDest, 0x80uLL, off_1402F3F88[v10]);
    if ( v11 < 0 )
    {
      v15 = "RtlStringCchCopyW failed [%x]";
      v16 = 2264;
      goto LABEL_23;
    }
    v11 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc);
    if ( v11 < 0 )
    {
      v15 = "RtlStringCchCatW failed [%x]";
      v16 = 2270;
      goto LABEL_23;
    }
    v12 = AslpFileVerQueryBlock(a3, pszDest, &v20, &v19);
    v11 = v12;
    if ( v12 >= 0 )
      break;
    if ( v12 != -1073741275 )
    {
      v15 = "AslpFileVerQueryBlock failed [%x]";
      v16 = 2300;
LABEL_23:
      LODWORD(v18) = v11;
      AslLogCallPrintf(1LL, (unsigned int)"AslpFileQueryVersionString", v16, (_DWORD)v15, v18);
      return (unsigned int)v11;
    }
    if ( (unsigned __int64)++v10 >= 4 )
      goto LABEL_7;
  }
  if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) >= 0 )
  {
LABEL_16:
    *a2 = v21;
    *a1 = v22;
    return 0LL;
  }
LABEL_7:
  if ( a4 )
  {
    v13 = 0LL;
    if ( a5 )
    {
      while ( 1 )
      {
        LODWORD(v18) = a4[1];
        v11 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v18, v23);
        if ( v11 < 0 )
        {
          v15 = "RtlStringCchPrintfW failed [%x]";
          v16 = 2318;
          goto LABEL_23;
        }
        v14 = AslpFileVerQueryBlock(a3, pszDest, &v20, &v19);
        v11 = v14;
        if ( v14 >= 0 )
          break;
        if ( v14 != -1073741275 )
        {
          v15 = "AslpFileVerQueryBlock failed [%x]";
          v16 = 2348;
          goto LABEL_23;
        }
        ++v13;
        a4 += 2;
        if ( v13 >= a5 )
          return 3221226021LL;
      }
      if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) >= 0 )
        goto LABEL_16;
    }
  }
  return 3221226021LL;
}
