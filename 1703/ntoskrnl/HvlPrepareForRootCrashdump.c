/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1401E77DC
 * Callers:
 *     KeBugCheck2 @ 0x1401FEE60 (KeBugCheck2.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlNotifyRootCrashdump @ 0x1401E771C (HvlNotifyRootCrashdump.c)
 */

__int64 HvlPrepareForRootCrashdump()
{
  char v0; // al
  _BYTE v2[112]; // [rsp+20h] [rbp-88h] BYREF

  v0 = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(0);
    KeStallExecutionProcessor(0xC350u);
    v0 = HvlpFlags;
  }
  if ( VslVsmEnabled )
  {
    VslpEnterIumSecureMode(1, 238LL, 0LL, (__int64)v2);
    v0 = HvlpFlags;
    if ( (HvlpFlags & 2) == 0 )
      goto LABEL_8;
    PoAllProcIntrDisabled = 1;
  }
  if ( (v0 & 2) != 0 )
    HvlNotifyRootCrashdump(1);
LABEL_8:
  off_14033B4B0[0]();
  return ((__int64 (__fastcall *)(__int64))off_14033B3A8[0])(1LL);
}
