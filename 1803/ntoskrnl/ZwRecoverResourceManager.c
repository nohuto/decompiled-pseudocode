/*
 * XREFs of ZwRecoverResourceManager @ 0x1401AA100
 * Callers:
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
