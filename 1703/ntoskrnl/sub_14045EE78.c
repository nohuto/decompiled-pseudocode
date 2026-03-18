/*
 * XREFs of sub_14045EE78 @ 0x14045EE78
 * Callers:
 *     ExpTimeRefreshWork @ 0x14041A8E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1404AEAB0 (ExUpdateLicenseDataInternal.c)
 *     ExSetLicenseTamperState @ 0x140717B30 (ExSetLicenseTamperState.c)
 * Callees:
 *     ExNotifyCallback @ 0x14006EEC0 (ExNotifyCallback.c)
 */

void sub_14045EE78()
{
  if ( CallbackObject )
    ExNotifyCallback(CallbackObject, 0LL, 0LL);
}
