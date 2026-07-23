/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x1401A9360
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
