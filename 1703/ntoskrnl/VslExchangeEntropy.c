/*
 * XREFs of VslExchangeEntropy @ 0x1401674B0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall VslExchangeEntropy(void *a1)
{
  NTSTATUS v2; // ebx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  v4[1] = 0LL;
  memmove(&v4[2], a1, 0x40uLL);
  v2 = VslpEnterIumSecureMode(1, 32LL, 0LL, (__int64)v4);
  if ( v2 >= 0 )
    memmove(a1, &v4[2], 0x40uLL);
  return (unsigned int)v2;
}
