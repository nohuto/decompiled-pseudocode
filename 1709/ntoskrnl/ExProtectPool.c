/*
 * XREFs of ExProtectPool @ 0x140016D30
 * Callers:
 *     HvpProtectBin @ 0x14047D67C (HvpProtectBin.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140064D70 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
