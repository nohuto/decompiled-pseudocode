/*
 * XREFs of sub_14054B65C @ 0x14054B65C
 * Callers:
 *     ExpTimeRefreshWork @ 0x1404777B0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x140548390 (ExUpdateLicenseDataInternal.c)
 *     ExSetLicenseTamperState @ 0x1407BDF20 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 */

void sub_14054B65C()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
