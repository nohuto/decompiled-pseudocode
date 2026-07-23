/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1401A9F80
 * Callers:
 *     SiTranslateSymbolicLink @ 0x140569D28 (SiTranslateSymbolicLink.c)
 *     sub_1405E366C @ 0x1405E366C (sub_1405E366C.c)
 *     SiGetBiosSystemDisk @ 0x1405F1638 (SiGetBiosSystemDisk.c)
 *     BiTranslateSymbolicLink @ 0x140607504 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14071D3C0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1407C24A4 (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
