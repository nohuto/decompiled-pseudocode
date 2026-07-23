/*
 * XREFs of RtlGetFullPathName_UEx @ 0x18003BAA0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180056E50 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180085620 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x18008DA50 (RtlDosSearchPath_U.c)
 * Callees:
 *     sub_18003E520 @ 0x18003E520 (sub_18003E520.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 */

NTSTATUS __cdecl RtlGetFullPathName_UEx(
        PCWSTR FileName,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart,
        ULONG *BytesRequired)
{
  ULONG *v5; // rbx
  NTSTATUS result; // eax
  ULONG v10; // eax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = BytesRequired;
  if ( BytesRequired )
    *BytesRequired = 0;
  result = RtlInitUnicodeStringEx(&DestinationString, FileName);
  if ( result >= 0 )
  {
    v10 = sub_18003E520(&DestinationString, BufferLength, Buffer, FilePart, 0LL, &BytesRequired);
    if ( v10 )
    {
      if ( v5 )
        *v5 = v10;
      return 0;
    }
    else
    {
      return -1073741773;
    }
  }
  return result;
}
