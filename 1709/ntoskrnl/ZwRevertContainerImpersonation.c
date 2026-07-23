/*
 * XREFs of ZwRevertContainerImpersonation @ 0x140180700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwRevertContainerImpersonation(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
