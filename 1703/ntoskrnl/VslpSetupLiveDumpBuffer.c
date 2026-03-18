/*
 * XREFs of VslpSetupLiveDumpBuffer @ 0x1401EE04C
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x1401EDB1C (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __fastcall VslpSetupLiveDumpBuffer(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _QWORD v7[14]; // [rsp+20h] [rbp-98h] BYREF

  memset(v7, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(1, 44LL, 0LL, (__int64)v7);
  if ( result >= 0 )
  {
    *a1 = v7[2];
    *a2 = v7[3];
    *a3 = v7[4];
  }
  return result;
}
