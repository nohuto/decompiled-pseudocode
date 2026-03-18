/*
 * XREFs of KeDeregisterNmiCallback @ 0x140203800
 * Callers:
 *     <none>
 * Callees:
 *     KiDeregisterNmiSxCallback @ 0x140203AB4 (KiDeregisterNmiSxCallback.c)
 */

NTSTATUS __stdcall KeDeregisterNmiCallback(PVOID Handle)
{
  return KiDeregisterNmiSxCallback(Handle);
}
