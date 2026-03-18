/*
 * XREFs of ZwSetBootEntryOrder @ 0x140180860
 * Callers:
 *     BiSetBootEntryOrder @ 0x14077CAAC (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Ids, Count, v2);
}
