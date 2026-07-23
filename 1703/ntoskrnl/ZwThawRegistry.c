/*
 * XREFs of ZwThawRegistry @ 0x1401815A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwThawRegistry(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
