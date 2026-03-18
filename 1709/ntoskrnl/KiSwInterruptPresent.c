/*
 * XREFs of KiSwInterruptPresent @ 0x140857940
 * Callers:
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14080CB64 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x14080CBA0 (KiFilterFiberContext.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
