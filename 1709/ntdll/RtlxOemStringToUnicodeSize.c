/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x1800E90E0
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18002BE98 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180030EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlOemStringToUnicodeString @ 0x18007B400 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180087780 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(char **a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, a1[1], *(unsigned __int16 *)a1);
  return (unsigned int)(v2 + 2);
}
