/*
 * XREFs of GreLockRegion @ 0x1C00FCE90
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C004CF70 (HmgLock.c)
 */

_BOOL8 __fastcall GreLockRegion(struct HOBJ__ *a1)
{
  return HmgLock(a1, 4) != 0;
}
