/*
 * XREFs of ?GetSymbolicLink@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0072468
 * Callers:
 *     GetWindowsDirectoryDevicePath @ 0x1C007233C (GetWindowsDirectoryDevicePath.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall GetSymbolicLink(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  WCHAR *v4; // rbx
  NTSTATUS v5; // edi
  struct _UNICODE_STRING LinkTarget; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationStringa; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *LinkHandle; // [rsp+A0h] [rbp+30h] BYREF

  v4 = (WCHAR *)Win32AllocPool(520LL, 0x626B7355u);
  if ( !v4 )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationStringa, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationStringa;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x80000000, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    LinkTarget.Buffer = v4;
    *(_DWORD *)&LinkTarget.Length = 34078720;
    v5 = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, 0LL);
    ZwClose(LinkHandle);
    if ( v5 >= 0 )
      RtlCopyUnicodeString(DestinationString, &LinkTarget);
  }
  Win32FreePool((__int64)v4);
  return (unsigned int)v5;
}
