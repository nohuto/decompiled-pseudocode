/*
 * XREFs of VslFreeSecureHibernateResources @ 0x1407187F8
 * Callers:
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS VslFreeSecureHibernateResources()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(2u, 35LL, 0, (__int64)v1);
}
