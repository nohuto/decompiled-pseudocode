/*
 * XREFs of ZwSetDriverEntryOrder @ 0x140180980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
