/*
 * XREFs of GreLockRegion @ 0x1C00FCA30
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C002F7C0 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(unsigned int a1)
{
  return HmgLock(a1, 4) != 0;
}
