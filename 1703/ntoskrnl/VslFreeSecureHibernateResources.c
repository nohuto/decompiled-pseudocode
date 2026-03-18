/*
 * XREFs of VslFreeSecureHibernateResources @ 0x140687E08
 * Callers:
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(1, 34LL, 0LL, (__int64)v1);
}
