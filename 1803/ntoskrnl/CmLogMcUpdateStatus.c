/*
 * XREFs of CmLogMcUpdateStatus @ 0x140222194
 * Callers:
 *     HvlpLogMicrocodeUpdateStatus @ 0x140717B14 (HvlpLogMicrocodeUpdateStatus.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     RtlIntegerToChar @ 0x14053E9C0 (RtlIntegerToChar.c)
 *     CmpInitializeRegistryNode @ 0x14062E0B4 (CmpInitializeRegistryNode.c)
 */

__int64 __fastcall CmLogMcUpdateStatus(ULONG Value, __int64 a2)
{
  NTSTATUS v4; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v9; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v11; // [rsp+98h] [rbp-68h] BYREF
  _STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v13[18]; // [rsp+C0h] [rbp-40h] BYREF
  CHAR String[16]; // [rsp+110h] [rbp+10h] BYREF
  char v15; // [rsp+120h] [rbp+20h] BYREF

  ObjectAttributes.Length = 48;
  Handle = (HANDLE)-1LL;
  v9 = (HANDLE)-1LL;
  KeyHandle = (HANDLE)-1LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_140863760;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(&v9, 0x20019u, &ObjectAttributes);
    if ( v4 >= 0 )
    {
      RtlIntegerToChar(Value, 0xAu, 0xCu, String);
      RtlInitAnsiString(&DestinationString, String);
      *(_DWORD *)&v11.Length = 1572864;
      v11.Buffer = (wchar_t *)&v15;
      RtlAnsiStringToUnicodeString(&v11, &DestinationString, 0);
      ObjectAttributes.RootDirectory = v9;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v11;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes) >= 0 )
        goto LABEL_7;
      CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      if ( !CmpConfigurationData )
      {
        v4 = -1073741670;
        goto LABEL_12;
      }
      memset(v13, 0, sizeof(v13));
      v13[6] = 1;
      v13[7] = 1;
      v13[10] = Value;
      v4 = CmpInitializeRegistryNode(
             (unsigned int)v13,
             (_DWORD)KeyHandle,
             (unsigned int)&Handle,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
      ExFreePoolWithTag(CmpConfigurationData, 0);
      CmpConfigurationData = 0LL;
      if ( v4 >= 0 )
      {
LABEL_7:
        RtlInitUnicodeString(&ValueName, L"Update Revision");
        v4 = ZwSetValueKey(Handle, &ValueName, 0, 3u, (PVOID)(a2 + 8), 8u);
        if ( v4 >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Previous Update Revision");
          v4 = ZwSetValueKey(Handle, &ValueName, 0, 3u, (PVOID)(a2 + 16), 8u);
          if ( v4 >= 0 )
          {
            RtlInitUnicodeString(&ValueName, L"Update Status");
            v4 = ZwSetValueKey(Handle, &ValueName, 0, 4u, (PVOID)(a2 + 4), 4u);
            if ( v4 >= 0 )
            {
              RtlInitUnicodeString(&ValueName, L"Platform Specific Field 1");
              v4 = ZwSetValueKey(Handle, &ValueName, 0, 4u, (PVOID)(a2 + 24), 4u);
              if ( v4 >= 0 )
              {
                RtlInitUnicodeString(&ValueName, L"Platform Specific Field 2");
                v4 = ZwSetValueKey(Handle, &ValueName, 0, 3u, (PVOID)(a2 + 28), 4u);
              }
            }
          }
        }
      }
    }
  }
LABEL_12:
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v9 != (HANDLE)-1LL )
    ZwClose(v9);
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
