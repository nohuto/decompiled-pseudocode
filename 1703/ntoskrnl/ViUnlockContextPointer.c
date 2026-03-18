/*
 * XREFs of ViUnlockContextPointer @ 0x140767050
 * Callers:
 *     VfInsertContext @ 0x140250040 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140250240 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
