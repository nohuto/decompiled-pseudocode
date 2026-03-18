/*
 * XREFs of SdbpGetPathCustomSdbPreRS3 @ 0x14028CCF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x140770E20 (SdbpGetPathAppPatch.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x1407711E8 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdbPreRS3(NTSTRSAFE_PWSTR pszDest, size_t cchDest, const WCHAR *a3, __int64 a4)
{
  __int64 *v8; // rdi
  int ProcessHostGuestArchitectures; // eax
  unsigned int v10; // ebx
  const char *v11; // r9
  int v12; // r8d
  const WCHAR *v13; // rdx
  __int16 v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+40h] [rbp-C0h]
  wchar_t v18; // [rsp+44h] [rbp-BCh]
  _OWORD v19[2]; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v20[264]; // [rsp+70h] [rbp-90h] BYREF

  v16 = *(_QWORD *)L"Custom";
  v17 = *(_DWORD *)L"om";
  v18 = aCustom[6];
  v19[0] = *(_OWORD *)L"Custom\\Custom64";
  v19[1] = *(_OWORD *)L"ustom64";
  if ( cchDest < 7 )
    return 3221225507LL;
  v15 = -1;
  *pszDest = 0;
  v8 = &v16;
  v20[0] = 0;
  v14[0] = -1;
  ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v15, v14, a4);
  v10 = ProcessHostGuestArchitectures;
  if ( ProcessHostGuestArchitectures >= 0 )
  {
    if ( v14[0] == 9 || v14[0] == 12 )
      v8 = (__int64 *)v19;
    v13 = &word_1402CBB00;
    if ( a3 )
      v13 = a3;
    ProcessHostGuestArchitectures = AslPathCombine(v8, v13, v20, 260LL);
    v10 = ProcessHostGuestArchitectures;
    if ( ProcessHostGuestArchitectures >= 0 )
      return (unsigned int)SdbpGetPathAppPatch(pszDest, cchDest);
    v11 = "AslPathCombine failed [%x]";
    v12 = 1140;
  }
  else
  {
    v11 = "SdbpGetProcessHostGuestArchitectures failed [%x]";
    v12 = 1126;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdbPreRS3", v12, (_DWORD)v11, ProcessHostGuestArchitectures);
  return v10;
}
