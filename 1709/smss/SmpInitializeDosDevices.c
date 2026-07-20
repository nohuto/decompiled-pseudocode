/*
 * XREFs of SmpInitializeDosDevices @ 0x140008E7C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140007224 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x140009004 (SmpDeallocSavedRegistryEntry.c)
 */

NTSTATUS SmpInitializeDosDevices()
{
  __int16 v0; // r15
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  struct _UNICODE_STRING *v3; // rdi
  struct _UNICODE_STRING *v4; // rsi
  _QWORD *v5; // rcx
  _QWORD *Buffer; // rax
  int v7; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v8; // [rsp+28h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *SymbolicLinkHandle; // [rsp+90h] [rbp+30h] BYREF

  v7 = 524294;
  ObjectAttributes.Length = 48;
  v8 = L"\\??";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  ObjectAttributes.Attributes = 208;
  v0 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenDirectoryObject(&SmpDosDevicesObjectDirectory, 0xF000Fu, &ObjectAttributes);
  v2 = result;
  if ( result >= 0 )
  {
    v3 = (struct _UNICODE_STRING *)SmpDosDevicesList;
    while ( v3 != (struct _UNICODE_STRING *)&SmpDosDevicesList )
    {
      v4 = v3;
      ObjectAttributes.RootDirectory = SmpDosDevicesObjectDirectory;
      ObjectAttributes.ObjectName = v3 + 1;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 208;
      ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      if ( SmpPrimarySecurityDescriptor )
      {
        v0 = *((_WORD *)SmpPrimarySecurityDescriptor + 1) & 8;
        *((_WORD *)SmpPrimarySecurityDescriptor + 1) |= 8u;
      }
      v2 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, v3 + 2);
      if ( v2 == 0x40000000 )
      {
        NtMakeTemporaryObject(SymbolicLinkHandle);
        NtClose(SymbolicLinkHandle);
        if ( v3[2].Length )
        {
          ObjectAttributes.Attributes &= ~0x80u;
          v2 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, v3 + 2);
        }
        else
        {
          v2 = 0;
        }
      }
      if ( ObjectAttributes.SecurityDescriptor )
        *((_WORD *)ObjectAttributes.SecurityDescriptor + 1) ^= (*((_WORD *)ObjectAttributes.SecurityDescriptor + 1) ^ v0) & 8;
      if ( v2 < 0 )
        break;
      NtClose(SymbolicLinkHandle);
      v5 = *(_QWORD **)&v3->Length;
      v3 = *(struct _UNICODE_STRING **)&v3->Length;
      if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v4->Length + 8LL) != v4
        || (Buffer = v4->Buffer, (struct _UNICODE_STRING *)*Buffer != v4) )
      {
        __fastfail(3u);
      }
      *Buffer = v5;
      v5[1] = Buffer;
      SmpDeallocSavedRegistryEntry(v4);
    }
    return v2;
  }
  return result;
}
