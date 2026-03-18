/*
 * XREFs of VslFreeSecureHibernateResources @ 0x1406B3BC8
 * Callers:
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(2u, 35LL, 0, (__int64)v1);
}
