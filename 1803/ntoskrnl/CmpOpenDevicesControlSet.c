/*
 * XREFs of CmpOpenDevicesControlSet @ 0x14062DB6C
 * Callers:
 *     CmpMarkCurrentProfileDirty @ 0x14062CC34 (CmpMarkCurrentProfileDirty.c)
 *     CmSetAcpiHwProfile @ 0x14062CD80 (CmSetAcpiHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1406FCAF8 (CmpMoveBiosAliasTable.c)
 *     CmpCreateHardwareProfiles @ 0x1408AE8A8 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 */

__int64 __fastcall CmpOpenDevicesControlSet(__int64 a1, HANDLE *a2, UNICODE_STRING *a3)
{
  const UNICODE_STRING *v5; // rdi
  NTSTATUS v6; // ebx
  HANDLE v7; // rcx
  HANDLE KeyHandle; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-D8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[256]; // [rsp+70h] [rbp-90h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  KeyHandle = 0LL;
  DestinationString.Buffer = (wchar_t *)v12;
  v5 = &CmpDevicesHiveNameString;
  if ( !CmStateSeparationEnabled )
    v5 = &CmpSystemHiveNameString;
  v6 = RtlUnicodeStringPrintf(&DestinationString, L"\\Registry\\Machine\\%wZ\\CurrentControlSet", v5);
  if ( v6 < 0 )
    goto LABEL_11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_11;
    *(_DWORD *)&DestinationString.Length = 0x1000000;
    DestinationString.Buffer = (wchar_t *)v12;
    v5 = &CmpSystemHiveNameString;
    v6 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"\\Registry\\Machine\\%wZ\\CurrentControlSet",
           &CmpSystemHiveNameString);
    if ( v6 < 0 )
      goto LABEL_11;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
  {
LABEL_11:
    v7 = KeyHandle;
    goto LABEL_8;
  }
  v7 = 0LL;
  *a2 = KeyHandle;
  KeyHandle = 0LL;
  if ( !a3 )
    return (unsigned int)v6;
  *a3 = *v5;
LABEL_8:
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)v6;
}
