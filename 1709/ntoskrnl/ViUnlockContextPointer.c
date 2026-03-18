/*
 * XREFs of ViUnlockContextPointer @ 0x1407A8BF4
 * Callers:
 *     VfInsertContext @ 0x140276850 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140276A20 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
