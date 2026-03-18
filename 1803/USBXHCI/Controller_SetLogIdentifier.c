/*
 * XREFs of Controller_SetLogIdentifier @ 0x1C005602C
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     RtlStringCchPrintfA @ 0x1C0004EAC (RtlStringCchPrintfA.c)
 */

__int64 __fastcall Controller_SetLogIdentifier(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-38h]
  int v4; // [rsp+28h] [rbp-30h]
  char pszDest[24]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 180) == 1 )
    {
      v4 = *(unsigned __int16 *)(a1 + 188);
      v3 = *(unsigned __int16 *)(a1 + 184);
      RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %04x %04x", *(unsigned int *)(a1 + 176), v3, v4);
    }
    else
    {
      RtlStringCchPrintfA(pszDest, 0x18uLL, "%02d %s %s", *(unsigned int *)(a1 + 176), a1 + 240, a1 + 245);
    }
    return imp_WppRecorderLogSetIdentifier(WPP_GLOBAL_Control, *(_QWORD *)(a1 + 72), pszDest);
  }
  return result;
}
