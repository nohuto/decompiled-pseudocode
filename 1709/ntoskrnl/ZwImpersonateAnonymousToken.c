/*
 * XREFs of ZwImpersonateAnonymousToken @ 0x14017F740
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
