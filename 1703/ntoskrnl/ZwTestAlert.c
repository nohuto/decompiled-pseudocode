/*
 * XREFs of ZwTestAlert @ 0x140181580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
