/*
 * XREFs of RtlGetFullPathName_UEx @ 0x18003C1A0
 * Callers:
 *     RtlGetFileMUIPath @ 0x18004EF20 (RtlGetFileMUIPath.c)
 *     RtlGetFullPathName_U @ 0x180080740 (RtlGetFullPathName_U.c)
 *     RtlDosSearchPath_U @ 0x180087400 (RtlDosSearchPath_U.c)
 * Callees:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
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
    v10 = sub_18003D640(&DestinationString, BufferLength, Buffer, FilePart, 0LL, &BytesRequired);
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
