/*
 * XREFs of IopDeleteIoCompletion @ 0x1405BC810
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x14013E050 (IopDeleteIoCompletionInternal.c)
 */

__int64 __fastcall IopDeleteIoCompletion(KSPIN_LOCK *a1)
{
  return IopDeleteIoCompletionInternal(a1, 0LL);
}
