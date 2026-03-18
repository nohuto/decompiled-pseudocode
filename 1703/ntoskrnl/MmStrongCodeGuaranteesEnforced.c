/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140826844
 * Callers:
 *     KeFreeInitializationCode @ 0x1407DCB08 (KeFreeInitializationCode.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
