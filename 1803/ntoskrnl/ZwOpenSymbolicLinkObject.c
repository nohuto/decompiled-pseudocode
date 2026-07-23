/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1401A9980
 * Callers:
 *     SiTranslateSymbolicLink @ 0x140569D28 (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14056FE18 (SepCleanupLUIDDeviceMapDirectory.c)
 *     sub_1405E366C @ 0x1405E366C (sub_1405E366C.c)
 *     SiOpenArcNameObject @ 0x1405F175C (SiOpenArcNameObject.c)
 *     IopProcessSetInterfaceState @ 0x1405F4C6C (IopProcessSetInterfaceState.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 *     IoDeleteSymbolicLink @ 0x140605560 (IoDeleteSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140607504 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14071D3C0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1407C24A4 (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x1408B7144 (IopStoreSystemPartitionInformation.c)
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
