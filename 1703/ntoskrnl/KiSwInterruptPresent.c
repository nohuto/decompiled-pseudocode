/*
 * XREFs of KiSwInterruptPresent @ 0x1408265EC
 * Callers:
 *     KeFreeInitializationCode @ 0x1407DCB08 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x1407DCB40 (KiFilterFiberContext.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
