/*
 * XREFs of ZwFreezeTransactions @ 0x14017F5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreezeTransactions(PLARGE_INTEGER FreezeTimeout, PLARGE_INTEGER ThawTimeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FreezeTimeout);
}
