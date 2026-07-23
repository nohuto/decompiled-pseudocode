/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x140180380
 * Callers:
 *     sub_140463398 @ 0x140463398 (sub_140463398.c)
 *     IopProcessSetInterfaceState @ 0x1404E49E8 (IopProcessSetInterfaceState.c)
 *     SiTranslateSymbolicLink @ 0x14056988C (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14057DC20 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiTranslateSymbolicLink @ 0x14058CC78 (BiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x1405D1970 (IoDeleteSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14068C770 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14071BC94 (ExpTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140739A54 (SiOpenArcNameObject.c)
 *     IopStoreSystemPartitionInformation @ 0x1407FA794 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
