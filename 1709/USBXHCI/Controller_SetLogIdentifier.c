/*
 * XREFs of Controller_SetLogIdentifier @ 0x1C00590A0
 * Callers:
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     RtlStringCchPrintfA @ 0x1C000E0D8 (RtlStringCchPrintfA.c)
 */

__int64 __fastcall Controller_SetLogIdentifier(__int64 a1)
{
  __int64 v2; // r9
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+28h] [rbp-30h]
  char pszDest[24]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 72) )
  {
    v2 = *(unsigned int *)(a1 + 176);
    if ( *(_DWORD *)(a1 + 180) == 1 )
    {
      v5 = *(unsigned __int16 *)(a1 + 188);
      v4 = *(unsigned __int16 *)(a1 + 184);
      RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %04x %04x", v2, v4, v5);
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %s %s", v2, a1 + 240, a1 + 245);
    }
    return imp_WppRecorderLogSetIdentifier(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 72), pszDest);
  }
  return result;
}
