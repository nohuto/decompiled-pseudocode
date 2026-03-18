/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x1402C25C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x1407D8100 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407D84C8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathAppPatchPreRS3(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        __int64 a4)
{
  NTSTATUS ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  const wchar_t *v12; // r8
  __int16 v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrca[12]; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDesta[264]; // [rsp+50h] [rbp-B0h] BYREF

  wcscpy(pszSrca, L"AppPatch64");
  if ( cchDest < 0xB )
    return 3221225507LL;
  v14 = -1;
  pszDesta[0] = 0;
  v13[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v14, v13, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v13[0] == 9 || v13[0] == 12 )
    {
      ProcessHostGuestArchitectures = AslPathCombine(pszSrca);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 1004;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = &word_1402FDBCC;
      if ( pszSrc )
        v12 = pszSrc;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(pszDesta, 0x104uLL, v12);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v11 = 1010;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(pszDest, cchDest);
  }
  v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v11 = 992;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v11, (_DWORD)v10, ProcessHostGuestArchitectures);
  return v9;
}
