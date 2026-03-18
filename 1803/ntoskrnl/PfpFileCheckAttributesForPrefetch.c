/*
 * XREFs of PfpFileCheckAttributesForPrefetch @ 0x1400078F8
 * Callers:
 *     PfpFileBuildReadSupport @ 0x1404A14F8 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1404A1E78 (PfSnGetSectionObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall PfpFileCheckAttributesForPrefetch(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+58h] [rbp+10h] BYREF

  v2.Pointer = 0LL;
  v2.Information = 0LL;
  result = NtQueryInformationFile(a1, &v2, &v3, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    if ( result == 259 )
      KeBugCheckEx(0x191u, 0x26C2uLL, 0LL, 0LL, 0LL);
    return (v3 & 0x5300) != 0 ? 0xC00000A4 : 0;
  }
  return result;
}
