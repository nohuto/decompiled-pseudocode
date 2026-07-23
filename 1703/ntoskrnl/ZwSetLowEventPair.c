/*
 * XREFs of ZwSetLowEventPair @ 0x140181220
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
