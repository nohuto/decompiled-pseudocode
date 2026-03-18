/*
 * XREFs of SdbpGetPathCustomSdb @ 0x140771050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x140770E20 (SdbpGetPathAppPatch.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(NTSTRSAFE_PWSTR pszDest, size_t cchDest, const WCHAR *a3)
{
  const WCHAR *v6; // rdx
  int v7; // ebx
  __int128 v8; // [rsp+30h] [rbp-258h] BYREF
  int v9; // [rsp+40h] [rbp-248h]
  wchar_t v10; // [rsp+44h] [rbp-244h]
  WCHAR v11[264]; // [rsp+50h] [rbp-238h] BYREF

  v9 = *(_DWORD *)L"DB";
  v10 = aCustomsdb[10];
  v8 = *(_OWORD *)L"\\CustomSDB";
  if ( cchDest < 0xB )
    return 3221225507LL;
  v6 = &word_1402CBB00;
  *pszDest = 0;
  v11[0] = 0;
  if ( a3 )
    v6 = a3;
  v7 = AslPathCombine(&v8, v6, v11, 260LL);
  if ( v7 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(pszDest, cchDest, v11);
  else
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdb", 1077, (unsigned int)"AslPathCombine failed [%x]");
  return (unsigned int)v7;
}
