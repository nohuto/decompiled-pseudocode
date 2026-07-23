/*
 * XREFs of ZwRecoverResourceManager @ 0x1401804C0
 * Callers:
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
