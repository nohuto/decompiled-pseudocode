/*
 * XREFs of CmpCreateControlSet @ 0x14081E0AC
 * Callers:
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     sprintf_s @ 0x14016FE70 (sprintf_s.c)
 *     NtCreateKey @ 0x14042DEB0 (NtCreateKey.c)
 *     NtOpenKey @ 0x14043BFF0 (NtOpenKey.c)
 *     NtSetValueKey @ 0x14048EDA0 (NtSetValueKey.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     CmSetAcpiHwProfile @ 0x1405C97A8 (CmSetAcpiHwProfile.c)
 *     CmpCloneHwProfile @ 0x14066E3A0 (CmpCloneHwProfile.c)
 *     CmpAddDockingInfo @ 0x14081E5F0 (CmpAddDockingInfo.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 */

NTSTATUS __fastcall CmpCreateControlSet(__int64 a1)
{
  HANDLE v2; // rdi
  bool v3; // r15
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  int v6; // ebx
  NTSTATUS v7; // eax
  HANDLE v8; // rsi
  NTSTATUS v9; // ebx
  HANDLE v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 Data; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v18; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp-58h] BYREF
  HANDLE v22; // [rsp+B8h] [rbp-50h] BYREF
  _STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  ULONG Disposition; // [rsp+D0h] [rbp-38h] BYREF
  __int16 v25; // [rsp+D4h] [rbp-34h]
  _DWORD KeyValueInformation[2]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+E0h] [rbp-28h]
  char DstBuf[128]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v29[256]; // [rsp+1D8h] [rbp+D0h] BYREF

  v22 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  v2 = 0LL;
  v3 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  v5 = NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&CmpCurrentString,
         KeyValueFullInformation,
         KeyValueInformation,
         0x80u,
         &ResultLength);
  NtClose(KeyHandle);
  if ( v5 < 0 )
    return v5;
  v6 = *(_DWORD *)((char *)KeyValueInformation + v27);
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"TV";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateKey(&KeyHandle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
  if ( result < 0 )
    return result;
  sprintf_s(DstBuf, 0x80uLL, "\\Registry\\Machine\\System\\ControlSet%03d", v6);
  RtlInitAnsiString(&DestinationString, DstBuf);
  *(_DWORD *)&v16.Length = 0x1000000;
  v16.Buffer = (wchar_t *)v29;
  v7 = RtlAnsiStringToUnicodeString(&v16, &DestinationString, 0);
  v8 = KeyHandle;
  v5 = v7;
  if ( v7 < 0 || (v5 = NtSetValueKey(KeyHandle, &CmSymbolicLinkValueName, 0, 6u, v16.Buffer, v16.Length), v5 < 0) )
  {
    NtClose(v8);
    return v5;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"$&";
  ObjectAttributes.RootDirectory = v8;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = NtOpenKey(&v22, 0x20019u, &ObjectAttributes);
  NtClose(v8);
  if ( v9 >= 0 )
  {
    v10 = v22;
    if ( NtQueryValueKey(
           v22,
           (PUNICODE_STRING)&CmpCurrentConfigString,
           KeyValueFullInformation,
           KeyValueInformation,
           0x80u,
           &ResultLength) >= 0
      && KeyValueInformation[1] == 4 )
    {
      LODWORD(Data) = *(_DWORD *)((char *)KeyValueInformation + v27);
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"xz";
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        sprintf_s(DstBuf, 0x80uLL, "%04d", Data);
        RtlInitAnsiString(&DestinationString, DstBuf);
        *(_DWORD *)&v16.Length = 0x1000000;
        v16.Buffer = (wchar_t *)v29;
        RtlAnsiStringToUnicodeString(&v16, &DestinationString, 0);
        v2 = Handle;
        ObjectAttributes.ObjectName = &v16;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( NtOpenKey(&v18, 0x2001Fu, &ObjectAttributes) < 0 )
          goto LABEL_29;
        v11 = *(_QWORD *)(a1 + 240);
        if ( *(_WORD *)(v11 + 8) == 3 )
          *(_WORD *)(v11 + 8) = 1;
        v12 = *(_QWORD *)(a1 + 240);
        if ( *(_WORD *)(v12 + 4) == 1 )
          goto LABEL_33;
        if ( *(_WORD *)(v12 + 4) == 2 )
        {
LABEL_15:
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpStrCurrentDockInfoString;
          ObjectAttributes.RootDirectory = v10;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, &Disposition);
          CmpAddDockingInfo(KeyHandle);
          NtClose(KeyHandle);
          v3 = *(_WORD *)(*(_QWORD *)(a1 + 240) + 8LL) == 1;
LABEL_16:
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpHardwareProfilesCurrentPathString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtCreateKey(&KeyHandle, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition) >= 0 )
          {
            sprintf_s(DstBuf, 0x80uLL, "\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\%04d", Data);
            RtlInitAnsiString(&DestinationString, DstBuf);
            *(_DWORD *)&v16.Length = 0x1000000;
            v16.Buffer = (wchar_t *)v29;
            RtlAnsiStringToUnicodeString(&v16, &DestinationString, 0);
            NtSetValueKey(KeyHandle, &CmSymbolicLinkValueName, 0, 6u, v16.Buffer, v16.Length);
            NtClose(KeyHandle);
          }
          if ( v3 )
          {
            Disposition = 131073;
            v25 = 0;
            CmSetAcpiHwProfile(
              (unsigned __int16 *)&Disposition,
              (__int64 (__fastcall *)(_DWORD *, unsigned int *, _QWORD))CmpHwprofileDefaultSelect,
              v13,
              &Handle,
              &v17);
            NtClose(Handle);
          }
          goto LABEL_20;
        }
        if ( *(_WORD *)(v12 + 4) != 3 )
          goto LABEL_16;
        if ( (int)CmpCloneHwProfile(v10, v2, v18, Data, *(_WORD *)(v12 + 8), &v18, (unsigned int *)&Data) < 0 )
        {
LABEL_29:
          v18 = 0LL;
        }
        else if ( NtSetValueKey(v10, (PUNICODE_STRING)&CmpCurrentConfigString, 0, 4u, &Data, 4u) >= 0 )
        {
LABEL_33:
          CmpAddAliasEntry(v10, *(_QWORD *)(a1 + 240) + 4LL, (unsigned int)Data);
          goto LABEL_15;
        }
      }
    }
LABEL_20:
    if ( v10 )
      NtClose(v10);
  }
  if ( v18 )
    NtClose(v18);
  if ( v2 )
    NtClose(v2);
  return 0;
}
