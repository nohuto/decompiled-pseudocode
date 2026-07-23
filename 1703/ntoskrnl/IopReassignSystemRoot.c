/*
 * XREFs of IopReassignSystemRoot @ 0x14082144C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x14003DA94 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     NtMakeTemporaryObject @ 0x140422BEC (NtMakeTemporaryObject.c)
 *     NtOpenSymbolicLinkObject @ 0x140435CE0 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x140436C30 (NtQuerySymbolicLinkObject.c)
 *     NtCreateSymbolicLinkObject @ 0x140444E60 (NtCreateSymbolicLinkObject.c)
 *     RtlUnicodeStringToAnsiString @ 0x1404C1180 (RtlUnicodeStringToAnsiString.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 */

char __fastcall IopReassignSystemRoot(__int64 a1, _STRING *a2)
{
  __int64 v2; // r9
  NTSTATUS v4; // eax
  NTSTATUS v5; // ebx
  HANDLE SymbolicLinkHandle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v10; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszDest[256]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  SymbolicLinkHandle = 0LL;
  if ( RtlStringCchPrintfW(pszDest, 0x100uLL, L"\\ArcName\\%S", v2) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, pszDest);
  DestinationString.MaximumLength = 512;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes);
    if ( v4 == -1073741788 )
      break;
    if ( v4 >= 0 )
    {
      DestinationString.Length = 0;
      v5 = NtQuerySymbolicLinkObject(SymbolicLinkHandle, &DestinationString, 0LL);
      ObCloseHandle(SymbolicLinkHandle, 0);
      if ( v5 >= 0 )
        continue;
    }
    return 0;
  }
  if ( RtlUnicodeStringToAnsiString(a2, &DestinationString, 0) < 0 )
    return 0;
  RtlInitUnicodeString(&v10, L"\\Device\\BootDevice");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes) < 0 )
    return 0;
  NtMakeTemporaryObject(SymbolicLinkHandle);
  ObCloseHandle(SymbolicLinkHandle, 0);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 592;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
  ObCloseHandle(SymbolicLinkHandle, 0);
  return 1;
}
