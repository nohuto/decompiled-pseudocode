/*
 * XREFs of ?IsSameAsTarget@DWMNullInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800228B0
 * Callers:
 *     <none>
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180024078 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall DWMNullInputTarget::IsSameAsTarget(DWMNullInputTarget *this, const struct tagMsgRoutingInfo *a2)
{
  _BYTE v4[40]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  return operator==(a2, v4);
}
