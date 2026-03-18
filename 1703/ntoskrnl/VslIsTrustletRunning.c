/*
 * XREFs of VslIsTrustletRunning @ 0x1401ED2A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __fastcall VslIsTrustletRunning(__int64 a1, _BYTE *a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = a1;
  result = VslpEnterIumSecureMode(1, 20LL, 0LL, (__int64)v5);
  *a2 = v5[2];
  return result;
}
