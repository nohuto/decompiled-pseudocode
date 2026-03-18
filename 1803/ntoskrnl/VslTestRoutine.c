/*
 * XREFs of VslTestRoutine @ 0x140230670
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

NTSTATUS VslTestRoutine()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  return VslpEnterIumSecureMode(2u, 1792LL, 0, (__int64)v1);
}
