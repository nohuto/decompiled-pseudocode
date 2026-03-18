/*
 * XREFs of SdbpGetPathAppraiser @ 0x1407D81F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407D84C8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407DBC78 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // eax
  unsigned int v9; // ebx
  const char *v10; // r9
  int v11; // r8d
  int v12; // [rsp+20h] [rbp-E0h]
  _WORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[276]; // [rsp+38h] [rbp-C8h] BYREF

  wcscpy(pszSrc, L"\\appraiser");
  if ( cchDest < 0xB )
    return 3221225507LL;
  *pszDest = 0;
  pszSrc[12] = 0;
  v14 = -1;
  v13[0] = -1;
  ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
  v9 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v14, v13, a4);
    v9 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(pszDest, cchDest, (__int64)v13);
    v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v11 = 1217;
  }
  else
  {
    v10 = "AslPathCombine failed [%x]";
    v11 = 1211;
  }
  v12 = ProcessHostGuestArchitectures;
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppraiser", v11, (_DWORD)v10, v12);
  return v9;
}
