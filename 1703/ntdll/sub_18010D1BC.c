/*
 * XREFs of sub_18010D1BC @ 0x18010D1BC
 * Callers:
 *     sub_18010DE7C @ 0x18010DE7C (sub_18010DE7C.c)
 *     sub_18010E294 @ 0x18010E294 (sub_18010E294.c)
 *     sub_18010E330 @ 0x18010E330 (sub_18010E330.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryFullAttributesFile @ 0x1800A7A10 (ZwQueryFullAttributesFile.c)
 */

__int64 __fastcall sub_18010D1BC(const WCHAR *a1, __int64 a2, __int64 a3)
{
  LONG v4; // ecx
  PWCH Buffer; // rsi
  HANDLE ContainingDirectory; // rax
  int v7; // edi
  _UNICODE_STRING NtFileName; // [rsp+20h] [rbp-59h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+30h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _FILE_NETWORK_OPEN_INFORMATION FileInformation; // [rsp+80h] [rbp+7h] BYREF

  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &NtFileName;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwQueryFullAttributesFile(&ObjectAttributes, &FileInformation);
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    if ( v7 >= 0 )
    {
      *(_DWORD *)a3 = FileInformation.FileAttributes;
      *(_QWORD *)(a3 + 4) = FileInformation.CreationTime.QuadPart;
      *(_QWORD *)(a3 + 12) = FileInformation.LastAccessTime.QuadPart;
      *(_QWORD *)(a3 + 20) = FileInformation.LastWriteTime.QuadPart;
      *(_DWORD *)(a3 + 28) = FileInformation.EndOfFile.HighPart;
      *(_DWORD *)(a3 + 32) = FileInformation.EndOfFile.LowPart;
      return 1LL;
    }
    v4 = RtlNtStatusToDosError(v7);
  }
  else
  {
    v4 = 3;
  }
  RtlSetLastWin32Error(v4);
  return 0LL;
}
