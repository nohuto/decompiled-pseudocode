/*
 * XREFs of ZwSetLowEventPair @ 0x1401AA840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetLowEventPair(HANDLE EventPair)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPair);
}
