/*
 * XREFs of VslIsTrustletRunning @ 0x14022FBD8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

NTSTATUS __fastcall VslIsTrustletRunning(__int64 a1, _BYTE *a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  result = VslpEnterIumSecureMode(2u, 20LL, 0, (__int64)v5);
  *a2 = v5[2];
  return result;
}
