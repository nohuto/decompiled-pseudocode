/*
 * XREFs of ZwSetInformationSymbolicLink @ 0x140180AC0
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1405B1FD8 (ObpInitializeRootNamespace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
