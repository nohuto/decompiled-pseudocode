/*
 * XREFs of VslpSetupLiveDumpBuffer @ 0x1401F2D98
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x1401F299C (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __fastcall VslpSetupLiveDumpBuffer(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _QWORD v7[14]; // [rsp+20h] [rbp-98h] BYREF

  memset(v7, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(2u, 50LL, 0, (__int64)v7);
  if ( result >= 0 )
  {
    *a1 = v7[2];
    *a2 = v7[3];
    *a3 = v7[4];
  }
  return result;
}
