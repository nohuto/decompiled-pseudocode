/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x14017FD40
 * Callers:
 *     IopProcessSetInterfaceState @ 0x140556128 (IopProcessSetInterfaceState.c)
 *     sub_14055FB34 @ 0x14055FB34 (sub_14055FB34.c)
 *     SiTranslateSymbolicLink @ 0x14057DDF8 (SiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x14059E0E0 (IoDeleteSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1405A7C54 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiTranslateSymbolicLink @ 0x1405B0AC8 (BiTranslateSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x1405D36D8 (SiOpenArcNameObject.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406B86A0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14075B52C (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140844774 (IopStoreSystemPartitionInformation.c)
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
