/*
 * XREFs of SdbpGetPathAppraiser @ 0x140770F10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407711E8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140772FA8 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(NTSTRSAFE_PWSTR pszDest, size_t cchDest, const WCHAR *a3, __int64 a4)
{
  const WCHAR *v8; // rdx
  int ProcessHostGuestArchitectures; // ebx
  const char *v10; // r9
  int v11; // r8d
  _WORD v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v13; // [rsp+34h] [rbp-CCh] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+48h] [rbp-B8h]
  wchar_t v16; // [rsp+4Ch] [rbp-B4h]
  _WORD v17[264]; // [rsp+50h] [rbp-B0h] BYREF

  v15 = *(_DWORD *)L"er";
  v16 = aAppraiser[10];
  v14 = *(_OWORD *)L"\\appraiser";
  if ( cchDest < 0xB )
    return 3221225507LL;
  v8 = &word_1402CBB00;
  *pszDest = 0;
  v17[0] = 0;
  if ( a3 )
    v8 = a3;
  v13 = -1;
  v12[0] = -1;
  ProcessHostGuestArchitectures = AslPathCombine(&v14, v8, v17, 260LL);
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v13, v12, a4);
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(pszDest, cchDest, (__int64)v12);
    v10 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v11 = 1196;
  }
  else
  {
    v10 = "AslPathCombine failed [%x]";
    v11 = 1190;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppraiser", v11, (_DWORD)v10);
  return (unsigned int)ProcessHostGuestArchitectures;
}
