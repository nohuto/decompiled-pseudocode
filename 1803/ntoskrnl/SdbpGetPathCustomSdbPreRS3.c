/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x1402C2740
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x1407D8100 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407D84C8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  wchar_t *v7; // rdi
  int ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  __int16 v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[8]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v15[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v16; // [rsp+70h] [rbp-90h]

  wcscpy(pszSrc, L"Custom");
  v15[0] = *(_OWORD *)L"Custom\\Custom64";
  v15[1] = *(_OWORD *)L"ustom64";
  if ( cchDest < 7 )
    return 3221225507LL;
  v13 = -1;
  *pszDest = 0;
  v7 = pszSrc;
  v16 = 0;
  v12[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v13, v12, a4);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v12[0] == 9 || v12[0] == 12 )
      v7 = (wchar_t *)v15;
    ProcessHostGuestArchitectures = AslPathCombine(v7);
    v9 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(pszDest, cchDest);
    v10 = "AslPathCombine failed [%x]";
    v11 = 1161;
  }
  else
  {
    v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v11 = 1147;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v11, (_DWORD)v10, ProcessHostGuestArchitectures);
  return v9;
}
