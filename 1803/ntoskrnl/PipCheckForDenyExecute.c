/*
 * XREFs of PipCheckForDenyExecute @ 0x1405F58F0
 * Callers:
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PnpConcatPWSTR @ 0x14051A428 (PnpConcatPWSTR.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 */

bool __fastcall PipCheckForDenyExecute(wchar_t *Str2)
{
  WCHAR *v1; // rbx
  bool v2; // di
  int v3; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  v1 = 0LL;
  SourceString = 0LL;
  v2 = 0;
  if ( wcsicmp(L"{53f5630d-b6bf-11d0-94f2-00a0c91efb8b}", Str2) )
  {
    v3 = PnpConcatPWSTR(0x200uLL, 0x47706E50u, (PVOID *)&SourceString, 3uLL);
    v1 = (WCHAR *)SourceString;
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0
        && IopGetRegistryValue(KeyHandle, L"Deny_Execute", 0, &SourceString) >= 0
        && SourceString
        && *((_DWORD *)SourceString + 1) == 4
        && *((_DWORD *)SourceString + 3) == 4 )
      {
        v2 = *(_DWORD *)((char *)SourceString + *((unsigned int *)SourceString + 2)) != 0;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x47706E50u);
  return v2;
}
