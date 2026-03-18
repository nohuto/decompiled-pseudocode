/*
 * XREFs of SdbpGetPathAppPatchPreRS3 @ 0x14028CB70
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x140770E20 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407711E8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
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
  const WCHAR *v13; // rdx
  __int16 v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+48h] [rbp-B8h]
  wchar_t v18; // [rsp+4Ch] [rbp-B4h]
  wchar_t pszDesta[264]; // [rsp+50h] [rbp-B0h] BYREF

  v17 = *(_DWORD *)L"64";
  v18 = aApppatch64[10];
  v16 = *(_OWORD *)L"AppPatch64";
  if ( cchDest < 0xB )
    return 3221225507LL;
  v15 = -1;
  pszDesta[0] = 0;
  v14[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v15, v14, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v14[0] == 9 || v14[0] == 12 )
    {
      v13 = &word_1402CBB00;
      if ( pszSrc )
        v13 = pszSrc;
      ProcessHostGuestArchitectures = AslPathCombine(&v16, v13, pszDesta, 260LL);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "AslPathCombine failed [%x]";
        v11 = 983;
        goto LABEL_5;
      }
    }
    else
    {
      v12 = &word_1402CBB00;
      if ( pszSrc )
        v12 = pszSrc;
      ProcessHostGuestArchitectures = RtlStringCchCopyW(pszDesta, 0x104uLL, v12);
      v9 = ProcessHostGuestArchitectures;
      if ( ProcessHostGuestArchitectures < 0 )
      {
        v10 = "RtlStringCchCopyW failed to copy FileName [%x]";
        v11 = 989;
        goto LABEL_5;
      }
    }
    return (unsigned int)SdbpGetPathAppPatch(pszDest, cchDest);
  }
  v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
  v11 = 971;
LABEL_5:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatchPreRS3", v11, (_DWORD)v10, ProcessHostGuestArchitectures);
  return v9;
}
