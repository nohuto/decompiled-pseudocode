/*
 * XREFs of VslAbortLiveDump @ 0x1401ECA34
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x14068F088 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(1, 46LL, 0LL, (__int64)v1);
}
