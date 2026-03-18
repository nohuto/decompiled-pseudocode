/*
 * XREFs of AslPathSplit @ 0x1405FE68C
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x1405FDB20 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140161D3C (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcsrchr @ 0x14018A7C0 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathSplit(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR a4,
        int a5,
        NTSTRSAFE_PWSTR a6)
{
  unsigned int v8; // ebp
  wchar_t *v10; // rax
  STRSAFE_PCNZWCH v11; // rdi
  NTSTATUS v12; // eax
  unsigned int v13; // ebx
  const wchar_t *v14; // r8
  wchar_t *v15; // rax
  const wchar_t *v16; // rbp
  size_t v17; // rdi
  int v19; // r8d
  const char *v20; // r9
  wchar_t pszDesta[264]; // [rsp+30h] [rbp-258h] BYREF

  *pszDest = 0;
  v8 = cchDest;
  pszDesta[0] = 0;
  *a6 = 0;
  *a4 = 0;
  v10 = wcsrchr(pszSrc, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = RtlStringCchCopyNW(pszDest, v8, pszSrc, v10 - pszSrc + 1);
    v13 = v12;
    if ( v12 < 0 )
    {
      v19 = 1199;
LABEL_14:
      v20 = "RtlStringCchCopyNW failed [%x]";
      goto LABEL_15;
    }
  }
  else
  {
    v11 = pszSrc;
  }
  v14 = v11 + 1;
  if ( *v11 != 92 )
    v14 = v11;
  v12 = RtlStringCchCopyW(pszDesta, 0x105uLL, v14);
  v13 = v12;
  if ( v12 < 0 )
  {
    v20 = "RtlStringCchCopyW failed [%x]";
    v19 = 1219;
    goto LABEL_15;
  }
  v15 = wcsrchr(pszDesta, 0x2Eu);
  v16 = v15;
  if ( !v15 )
  {
    v12 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
    v13 = v12;
    if ( v12 >= 0 )
      return 0;
    v20 = "RtlStringCchCopyW failed [%x]";
    v19 = 1246;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslPathSplit", v19, (_DWORD)v20, v12);
    return v13;
  }
  v17 = v15 - pszDesta;
  v12 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v17);
  v13 = v12;
  if ( v12 < 0 )
  {
    v19 = 1232;
    goto LABEL_14;
  }
  a4[v17] = 0;
  v12 = RtlStringCchCopyW(a6, 0x104uLL, v16);
  v13 = v12;
  if ( v12 < 0 )
  {
    v20 = "RtlStringCchCopyW failed [%x]";
    v19 = 1239;
    goto LABEL_15;
  }
  return 0;
}
