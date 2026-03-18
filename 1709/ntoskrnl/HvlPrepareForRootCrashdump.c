/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1401ECA5C
 * Callers:
 *     KeBugCheck2 @ 0x1402052B0 (KeBugCheck2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlNotifyRootCrashdump @ 0x1401EC99C (HvlNotifyRootCrashdump.c)
 */

__int64 HvlPrepareForRootCrashdump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(0);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( VslVsmEnabled )
  {
    VslpEnterIumSecureMode(2u, 239LL, 0, (__int64)v1);
    if ( (HvlpFlags & 2) != 0 )
      PoAllProcIntrDisabled = 1;
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(1);
  off_1403534E0[0]();
  return ((__int64 (__fastcall *)(__int64))off_1403533D8[0])(1LL);
}
