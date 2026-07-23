/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x14017FDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwImpersonateAnonymousToken(HANDLE Thread)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Thread);
}
