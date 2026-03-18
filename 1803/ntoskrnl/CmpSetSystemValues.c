/*
 * XREFs of CmpSetSystemValues @ 0x1408B1414
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     CmpSetSystemRegistryString @ 0x1401775A8 (CmpSetSystemRegistryString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpSetSystemValues(__int64 a1)
{
  NTSTATUS v2; // ebx
  int v4; // ecx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  int Data; // [rsp+40h] [rbp-C8h] BYREF
  int v7; // [rsp+44h] [rbp-C4h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD KeyValueInformation[64]; // [rsp+88h] [rbp-80h] BYREF

  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"df";
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpSystemStartOptionsString,
           0,
           1u,
           CmpLoadOptions.Buffer,
           CmpLoadOptions.Length);
    if ( v2 >= 0 )
    {
      v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpSystemBootDeviceString, *(PCSZ *)(a1 + 184));
      if ( v2 >= 0 )
      {
        v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpFirmwareBootDeviceString, *(PCSZ *)(a1 + 192));
        if ( v2 >= 0 )
        {
          v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpWindowsSysPartString, *(PCSZ *)(a1 + 344));
          if ( v2 >= 0 )
          {
            v2 = CmpSetSystemRegistryString(KeyHandle, (PUNICODE_STRING)&CmpOsBootstatPathString, *(PCSZ *)(a1 + 328));
            if ( v2 >= 0 )
            {
              Data = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 1;
              v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootSucceededString, 0, 4u, &Data, 4u);
              if ( v2 >= 0 )
              {
                Data = (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) >> 1) & 1;
                v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpLastBootShutdownString, 0, 4u, &Data, 4u);
                if ( v2 >= 0 )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 2) == 0 )
                  {
                    if ( ZwQueryValueKey(
                           KeyHandle,
                           (PUNICODE_STRING)&CmpDirtyShutdownCountString,
                           KeyValueFullInformation,
                           KeyValueInformation,
                           0x100u,
                           &ResultLength) >= 0
                      && KeyValueInformation[1] == 4 )
                    {
                      v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]) + 1;
                    }
                    else
                    {
                      v4 = 1;
                    }
                    v7 = v4;
                    v2 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpDirtyShutdownCountString, 0, 4u, &v7, 4u);
                  }
                  if ( v2 >= 0 )
                    v2 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
