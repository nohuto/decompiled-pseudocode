/*
 * XREFs of CmpProtectPool @ 0x1400D24AC
 * Callers:
 *     HvpFreeBin @ 0x1405840EC (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(unsigned __int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4u);
}
