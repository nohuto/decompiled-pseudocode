/*
 * XREFs of AslPathSplit @ 0x1405450C4
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x140547F20 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x1400F9D6C (RtlStringCchCopyNW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcsrchr @ 0x140160610 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
  NTSTATUS v12; // ebx
  const wchar_t *v13; // r8
  wchar_t *v14; // rax
  const wchar_t *v15; // rbp
  size_t v16; // rdi
  int v18; // r8d
  const char *v19; // r9
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
    if ( v12 < 0 )
    {
      v18 = 727;
LABEL_14:
      v19 = "RtlStringCchCopyNW failed [%x]";
      goto LABEL_15;
    }
  }
  else
  {
    v11 = pszSrc;
  }
  v13 = v11 + 1;
  if ( *v11 != 92 )
    v13 = v11;
  v12 = RtlStringCchCopyW(pszDesta, 0x105uLL, v13);
  if ( v12 < 0 )
  {
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 747;
    goto LABEL_15;
  }
  v14 = wcsrchr(pszDesta, 0x2Eu);
  v15 = v14;
  if ( !v14 )
  {
    v12 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
    if ( v12 >= 0 )
      return 0;
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 774;
LABEL_15:
    AslLogCallPrintf(1, (unsigned int)"AslPathSplit", v18, (_DWORD)v19);
    return (unsigned int)v12;
  }
  v16 = v14 - pszDesta;
  v12 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v16);
  if ( v12 < 0 )
  {
    v18 = 760;
    goto LABEL_14;
  }
  a4[v16] = 0;
  v12 = RtlStringCchCopyW(a6, 0x104uLL, v15);
  if ( v12 < 0 )
  {
    v19 = "RtlStringCchCopyW failed [%x]";
    v18 = 767;
    goto LABEL_15;
  }
  return 0;
}
