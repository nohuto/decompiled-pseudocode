/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140857B7C
 * Callers:
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x14080CB64 (KeFreeInitializationCode.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

__int64 MmStrongCodeGuaranteesEnforced()
{
  return BYTE2(MiFlags) & 1;
}
