/*
 * XREFs of ExProtectPool @ 0x1400BD510
 * Callers:
 *     HvpProtectBin @ 0x140566C48 (HvpProtectBin.c)
 *     sub_14087DE84 @ 0x14087DE84 (sub_14087DE84.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 */

__int64 __fastcall ExProtectPool(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return ExProtectPoolEx(a1, a1, a2, a3);
}
