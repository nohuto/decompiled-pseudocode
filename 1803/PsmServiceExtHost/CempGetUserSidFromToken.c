/*
 * XREFs of CempGetUserSidFromToken @ 0x18002B514
 * Callers:
 *     CempRpcQueryClientInformation @ 0x18002B3B0 (CempRpcQueryClientInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

int __fastcall CempGetUserSidFromToken(void *a1, void *a2)
{
  int result; // eax
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-88h] BYREF
  PSID TokenInformation[12]; // [rsp+40h] [rbp-78h] BYREF

  result = NtQueryInformationToken(a1, TokenUser, TokenInformation, 0x58u, ReturnLength);
  if ( result >= 0 )
    return RtlCopySid(0x44u, a2, TokenInformation[0]);
  return result;
}
