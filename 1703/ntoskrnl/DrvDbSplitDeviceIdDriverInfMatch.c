/*
 * XREFs of DrvDbSplitDeviceIdDriverInfMatch @ 0x14058FB54
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140743E28 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x14004CE10 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x14016BB40 (wcschr.c)
 *     wcstol @ 0x14016C0C4 (wcstol.c)
 */

__int64 __fastcall DrvDbSplitDeviceIdDriverInfMatch(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        __int64 a4)
{
  NTSTATUS v5; // r15d
  unsigned int v7; // r14d
  char v9; // r12
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  __int64 v12; // rsi
  wchar_t *v13; // rax
  wchar_t *v14; // r14
  int v15; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+80h] [rbp+18h]

  v19 = cchDest;
  v5 = 0;
  v7 = cchDest;
  v9 = -1;
  v10 = wcschr(pszSrc, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 - pszSrc;
    if ( !a4 )
      goto LABEL_11;
    v13 = wcschr(v10 + 1, 0x5Cu);
    v14 = v13;
    if ( v13 )
    {
      *v13 = 0;
      v17 = wcstol(v13 + 1, 0LL, 16);
      if ( v17 > 0xFF )
        LOBYTE(v17) = -1;
      v9 = v17;
    }
    if ( v11[1] == 42 )
    {
      *(_BYTE *)a4 = 3;
    }
    else
    {
      v15 = wcstol(v11 + 1, 0LL, 16);
      if ( v15 )
      {
        v18 = v15 - 1;
        *(_BYTE *)a4 = 2;
        if ( v18 > 0xFFFF )
          LOWORD(v18) = -1;
        *(_WORD *)(a4 + 2) = v18;
        goto LABEL_8;
      }
      *(_BYTE *)a4 = 1;
    }
    *(_WORD *)(a4 + 2) = 0;
LABEL_8:
    if ( v14 )
      *v14 = 92;
    v7 = v19;
    goto LABEL_11;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( pszSrc[v12] );
  if ( a4 )
  {
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
LABEL_11:
  if ( !pszDest || (v5 = RtlStringCchCopyNExW(pszDest, v7, pszSrc, (unsigned int)v12, 0LL, 0LL, 0x900u), v5 >= 0) )
  {
    if ( a4 )
      *(_BYTE *)(a4 + 1) = v9;
  }
  return (unsigned int)v5;
}
