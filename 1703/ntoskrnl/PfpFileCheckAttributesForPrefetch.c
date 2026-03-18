/*
 * XREFs of PfpFileCheckAttributesForPrefetch @ 0x14010C0C4
 * Callers:
 *     PfSnGetSectionObject @ 0x14053DFD0 (PfSnGetSectionObject.c)
 *     PfpFileBuildReadSupport @ 0x14053E99C (PfpFileBuildReadSupport.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
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
      KeBugCheckEx(0x191u, 0x26A1uLL, 0LL, 0LL, 0LL);
    return (v3 & 0x5300) != 0 ? 0xC00000A4 : 0;
  }
  return result;
}
