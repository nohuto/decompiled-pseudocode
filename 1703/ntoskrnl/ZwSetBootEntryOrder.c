/*
 * XREFs of ZwSetBootEntryOrder @ 0x140180E80
 * Callers:
 *     BiSetBootEntryOrder @ 0x140738388 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
