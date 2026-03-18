/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x14022A0FC
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvlNotifyRootCrashdump @ 0x14022A03C (HvlNotifyRootCrashdump.c)
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
    VslpEnterIumSecureMode(2u, 240LL, 0, (__int64)v1);
    if ( (HvlpFlags & 2) != 0 )
      PoAllProcIntrDisabled = 1;
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(1);
  off_140398880[0]();
  return ((__int64 (__fastcall *)(__int64))off_140398778[0])(1LL);
}
