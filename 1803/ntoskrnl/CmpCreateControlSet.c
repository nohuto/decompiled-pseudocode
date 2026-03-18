/*
 * XREFs of CmpCreateControlSet @ 0x1408AE63C
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     CmpCreateExtendedControlSets @ 0x1408B1638 (CmpCreateExtendedControlSets.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpCreateControlSet(__int64 a1, char a2)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  unsigned int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Disposition; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v11; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v16[256]; // [rsp+130h] [rbp+30h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  KeyHandle = 0LL;
  v11 = 0LL;
  Handle = 0LL;
  Data = 0;
  DestinationString.Buffer = (wchar_t *)v16;
  v4 = RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%ws", a1);
  if ( v4 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpSelectString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&v11, 0x20019u, &ObjectAttributes);
      v4 = v5;
      if ( v5 == -1073741772 )
      {
        if ( !a2 )
          goto LABEL_10;
        v4 = ZwCreateKey(&v11, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v4 < 0 )
          goto LABEL_10;
        Data = 1;
        v4 = ZwSetValueKey(v11, (PUNICODE_STRING)&CmpCurrentString, 0, 4u, &Data, 4u);
        if ( v4 < 0 )
          goto LABEL_10;
        DestinationString.Buffer = (wchar_t *)v16;
        *(_DWORD *)&DestinationString.Length = 0x1000000;
        RtlUnicodeStringPrintf(&DestinationString, L"ControlSet%03d", Data);
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( v4 < 0 )
          goto LABEL_10;
        ZwClose(Handle);
        Handle = 0LL;
      }
      else if ( v5 < 0 )
      {
        goto LABEL_10;
      }
      if ( !Data )
      {
        v4 = ZwQueryValueKey(
               v11,
               (PUNICODE_STRING)&CmpCurrentString,
               KeyValueFullInformation,
               KeyValueInformation,
               0x80u,
               &ResultLength);
        if ( v4 < 0 )
          goto LABEL_10;
        Data = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
      }
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
      if ( v4 >= 0 )
      {
        DestinationString.Buffer = (wchar_t *)v16;
        *(_DWORD *)&DestinationString.Length = 0x1000000;
        RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%ws\\ControlSet%03d", a1, Data);
        v4 = ZwSetValueKey(Handle, &CmSymbolicLinkValueName, 0, 6u, DestinationString.Buffer, DestinationString.Length);
      }
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( v11 )
    ZwClose(v11);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
