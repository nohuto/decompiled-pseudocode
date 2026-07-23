/*
 * XREFs of sub_18010D2E4 @ 0x18010D2E4
 * Callers:
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 *     sub_18010D87C @ 0x18010D87C (sub_18010D87C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18003BB30 (RtlDosPathNameToNtPathName_U.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall sub_18010D2E4(const WCHAR *a1)
{
  __int64 result; // rax
  PWCH Buffer; // rdi
  NTSTATUS v3; // ebx
  _UNICODE_STRING NtFileName; // [rsp+20h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-68h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+60h] [rbp-38h] BYREF

  if ( RtlDosPathNameToNtPathName_U(a1, &NtFileName, 0LL, 0LL) )
  {
    Buffer = NtFileName.Buffer;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Attributes = 64;
    v3 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    result = 0xFFFFFFFFLL;
    if ( v3 >= 0 )
      return FileInformation.FileAttributes;
  }
  else
  {
    RtlSetLastWin32Error(3);
    return 0xFFFFFFFFLL;
  }
  return result;
}
