/*
 * XREFs of CmpProtectPool @ 0x14007FD38
 * Callers:
 *     HvpFreeBin @ 0x1404D289C (HvpFreeBin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpProtectPool(__int64 a1, __int64 a2)
{
  return ExProtectPoolEx(a1, a1, a2, 4LL);
}
