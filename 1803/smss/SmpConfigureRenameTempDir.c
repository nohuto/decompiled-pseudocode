/*
 * XREFs of SmpConfigureRenameTempDir @ 0x140011F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureRenameTempDir(__int64 a1, int a2, const WCHAR *a3, int a4)
{
  struct _UNICODE_STRING NtPathName; // [rsp+20h] [rbp-18h] BYREF

  NtPathName.Buffer = 0LL;
  if ( (unsigned int)(a4 - 1) <= 0x208 && a2 == 1 && RtlDosPathNameToNtPathName_U(a3, &NtPathName, 0LL, 0LL) )
  {
    if ( NtPathName.Length < 0x20Au )
    {
      SmpTempFilesDir.MaximumLength = 522;
      RtlCopyUnicodeString(&SmpTempFilesDir, &NtPathName);
    }
    if ( NtPathName.Buffer )
      RtlFreeUnicodeString(&NtPathName);
  }
  return 0LL;
}
