/*
 * XREFs of ZwPropagationComplete @ 0x140180520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPropagationComplete(
        HANDLE ResourceManagerHandle,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
