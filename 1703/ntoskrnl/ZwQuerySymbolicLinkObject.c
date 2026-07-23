/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x140180960
 * Callers:
 *     sub_140463398 @ 0x140463398 (sub_140463398.c)
 *     SiTranslateSymbolicLink @ 0x14056988C (SiTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x14058CC78 (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x14068C770 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14071BC94 (ExpTranslateSymbolicLink.c)
 *     SiGetBiosSystemDisk @ 0x1407396C8 (SiGetBiosSystemDisk.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
