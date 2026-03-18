/*
 * XREFs of CmpProtectPool @ 0x140016570
 * Callers:
 *     HvpFreeBin @ 0x140479E34 (HvpFreeBin.c)
 * Callees:
 *     ExProtectPoolEx @ 0x140064D70 (ExProtectPoolEx.c)
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4LL);
}
