/*
 * XREFs of WmipGetRegistryHideMachine @ 0x14058A504
 * Callers:
 *     WmipGetSMBiosTableData @ 0x14058A404 (WmipGetSMBiosTableData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

bool WmipGetRegistryHideMachine()
{
  int v0; // edi
  _DWORD *PoolWithTag; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+18h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\WMI\\Restrictions");
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HideMachine");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x70696D57u);
      if ( PoolWithTag )
      {
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               PoolWithTag,
               ResultLength,
               &ResultLength) >= 0
          && PoolWithTag[1] == 4
          && PoolWithTag[2] == 4 )
        {
          v0 = PoolWithTag[3];
        }
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0 != 0;
}
