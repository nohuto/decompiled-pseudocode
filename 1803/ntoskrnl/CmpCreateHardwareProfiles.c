/*
 * XREFs of CmpCreateHardwareProfiles @ 0x1408AE8A8
 * Callers:
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1401476F8 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     CmSetAcpiHwProfile @ 0x14062CD80 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14062DB6C (CmpOpenDevicesControlSet.c)
 *     CmpCloneHwProfile @ 0x1406FC0D0 (CmpCloneHwProfile.c)
 *     CmpAddDockingInfo @ 0x1408AECD4 (CmpAddDockingInfo.c)
 *     CmpAddAliasEntry @ 0x1408DD524 (CmpAddAliasEntry.c)
 */

__int64 __fastcall CmpCreateHardwareProfiles(__int64 a1)
{
  bool v1; // r15
  int v3; // eax
  HANDLE v4; // rdi
  int v5; // ebx
  NTSTATUS v6; // eax
  __int64 v7; // r14
  unsigned __int16 v8; // dx
  _WORD *v9; // r12
  __int64 v10; // r8
  unsigned int Data; // [rsp+48h] [rbp-C0h] BYREF
  ULONG Disposition; // [rsp+4Ch] [rbp-BCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v18; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v19[8]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v20; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v21; // [rsp+B8h] [rbp-50h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp-48h] BYREF
  HANDLE v23; // [rsp+C8h] [rbp-40h] BYREF
  UNICODE_STRING String1; // [rsp+D0h] [rbp-38h] BYREF
  HANDLE v25; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD KeyValueInformation[32]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v27[256]; // [rsp+168h] [rbp+60h] BYREF

  v25 = 0LL;
  KeyHandle = 0LL;
  v1 = 0;
  v18 = 0LL;
  v21 = 0LL;
  Handle = 0LL;
  Data = 0;
  v3 = CmpOpenDevicesControlSet(a1, &v25, &String1);
  v4 = v25;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_22;
  ObjectAttributes.RootDirectory = v25;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v6;
  if ( v6 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpControlString;
    ObjectAttributes.RootDirectory = v4;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v20, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_22;
    ZwClose(v20);
    v20 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v4;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_22;
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v20, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( v5 < 0 )
      goto LABEL_22;
    Data = 0;
    DestinationString.Buffer = (wchar_t *)v27;
    *(_DWORD *)&DestinationString.Length = 0x1000000;
    RtlUnicodeStringPrintf(&DestinationString, L"%04d", 0LL);
    ObjectAttributes.RootDirectory = v20;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&v18, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    ZwClose(v20);
    v20 = 0LL;
    if ( v5 < 0 )
      goto LABEL_22;
    ZwClose(v18);
    v18 = 0LL;
    v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &Data, 4u);
    if ( v5 < 0 )
      goto LABEL_22;
  }
  else
  {
    if ( v6 < 0 )
      goto LABEL_22;
    v5 = ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&CmpCurrentConfigString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x80u,
           &ResultLength);
    if ( v5 < 0 || KeyValueInformation[1] != 4 )
      goto LABEL_22;
    Data = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
  ObjectAttributes.RootDirectory = v4;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v21, 0x20019u, &ObjectAttributes);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_22;
    v5 = ZwCreateKey(&v21, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_22;
  DestinationString.Buffer = (wchar_t *)v27;
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  RtlUnicodeStringPrintf(&DestinationString, L"%04d", Data);
  ObjectAttributes.RootDirectory = v21;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&v18, 0x2001Fu, &ObjectAttributes);
  if ( v5 == -1073741772 )
  {
    if ( !CmStateSeparationEnabled )
      goto LABEL_22;
    v5 = ZwCreateKey(&v18, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  }
  if ( v5 < 0 )
    goto LABEL_22;
  v7 = *(_QWORD *)(a1 + 240);
  v8 = *(_WORD *)(v7 + 8);
  v9 = (_WORD *)(v7 + 4);
  if ( v8 == 3 )
  {
    v8 = 1;
    *(_WORD *)(v7 + 8) = 1;
  }
  if ( *v9 == 1 )
    goto LABEL_48;
  if ( *v9 == 2 )
  {
LABEL_15:
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrCurrentDockInfoString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition) >= 0 )
    {
      CmpAddDockingInfo(Handle);
      ZwClose(Handle);
      Handle = 0LL;
    }
    v1 = *(_WORD *)(v7 + 8) == 1;
    goto LABEL_18;
  }
  if ( *v9 != 3 )
  {
LABEL_18:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v4;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"24";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
    if ( v5 >= 0 )
    {
      DestinationString.Buffer = (wchar_t *)v27;
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      RtlUnicodeStringPrintf(
        &DestinationString,
        L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\Hardware Profiles\\%04d",
        &String1,
        Data);
      v5 = ZwSetValueKey(Handle, &CmSymbolicLinkValueName, 0, 6u, DestinationString.Buffer, DestinationString.Length);
      if ( !RtlEqualUnicodeString(&String1, &CmpSystemHiveNameString, 1u) )
      {
        ZwClose(Handle);
        Handle = 0LL;
        DestinationString.Buffer = (wchar_t *)v27;
        *(_DWORD *)&DestinationString.Length = 0x1000000;
        RtlUnicodeStringPrintf(
          &DestinationString,
          L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
          &CmpSystemHiveNameString,
          L"24");
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v5 = ZwCreateKey(&Handle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
        if ( v5 >= 0 )
        {
          *(_DWORD *)&DestinationString.Length = 0x1000000;
          DestinationString.Buffer = (wchar_t *)v27;
          RtlUnicodeStringPrintf(
            &DestinationString,
            L"\\Registry\\Machine\\%wZ\\CurrentControlSet\\%wZ",
            &String1,
            L"24");
          v5 = ZwSetValueKey(
                 Handle,
                 &CmSymbolicLinkValueName,
                 0,
                 6u,
                 DestinationString.Buffer,
                 DestinationString.Length);
        }
      }
    }
    if ( v1 )
    {
      LODWORD(v25) = 131073;
      WORD2(v25) = 0;
      v5 = CmSetAcpiHwProfile(
             (unsigned __int16 *)&v25,
             (__int64 (__fastcall *)(_DWORD *, unsigned int *, _QWORD))CmpHwprofileDefaultSelect,
             v10,
             &v23,
             v19);
      ZwClose(v23);
    }
    goto LABEL_22;
  }
  v5 = CmpCloneHwProfile(KeyHandle, v21, v18, Data, v8, &v18, &Data);
  if ( v5 < 0 )
  {
    v18 = 0LL;
    goto LABEL_22;
  }
  v5 = ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &Data, 4u);
  if ( v5 >= 0 )
  {
LABEL_48:
    CmpAddAliasEntry(KeyHandle, v7 + 4, Data);
    goto LABEL_15;
  }
LABEL_22:
  if ( v4 )
    ZwClose(v4);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v18 )
    ZwClose(v18);
  if ( v21 )
    ZwClose(v21);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v5;
}
