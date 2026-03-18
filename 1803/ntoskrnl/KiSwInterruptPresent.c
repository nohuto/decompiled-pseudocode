/*
 * XREFs of KiSwInterruptPresent @ 0x1408C90D8
 * Callers:
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14087CB70 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x14087CBB0 (KiFilterFiberContext.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140084C68 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
