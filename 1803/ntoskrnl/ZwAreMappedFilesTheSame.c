/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x1401A8640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAreMappedFilesTheSame(PVOID File1MappedAsAnImage, PVOID File2MappedAsFile)
{
  _disable();
  __readeflags();
  return KiServiceInternal(File1MappedAsAnImage);
}
