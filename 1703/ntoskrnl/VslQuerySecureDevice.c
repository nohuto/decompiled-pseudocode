/*
 * XREFs of VslQuerySecureDevice @ 0x1405CB440
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __fastcall VslQuerySecureDevice(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  NTSTATUS result; // eax
  _QWORD v6[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_DWORD *)(a1 + 8);
  v6[1] = *(_QWORD *)a1;
  LODWORD(v6[2]) = v4;
  result = VslpEnterIumSecureMode(1, 52LL, 0LL, (__int64)v6);
  if ( result >= 0 )
  {
    *(_WORD *)a2 = WORD2(v6[2]);
    a2[1] = v6[3];
  }
  return result;
}
