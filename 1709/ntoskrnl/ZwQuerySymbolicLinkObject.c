/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x140180340
 * Callers:
 *     sub_14055FB34 @ 0x14055FB34 (sub_14055FB34.c)
 *     SiTranslateSymbolicLink @ 0x14057DDF8 (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x1405B0AC8 (BiTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x1405D35B4 (SiGetBiosSystemDisk.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406B86A0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14075B52C (ExpTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
