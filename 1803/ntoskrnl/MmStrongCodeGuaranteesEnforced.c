/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x1408C951C
 * Callers:
 *     KiVerifyXcpt15 @ 0x14087C330 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14087CB70 (KeFreeInitializationCode.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
