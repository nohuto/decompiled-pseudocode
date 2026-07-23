/*
 * XREFs of CmpSetVersionData @ 0x1405A48E0
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1405A3DE0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     sprintf_s @ 0x14016FE70 (sprintf_s.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExFreePool @ 0x140286A00 (ExFreePool.c)
 *     PspWow64GetSharedInformation @ 0x1404267A8 (PspWow64GetSharedInformation.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A4DF0 (CmpHiveRootSecurityDescriptor.c)
 */

void CmpSetVersionData()
{
  void *v0; // rdi
  PCWSTR *i; // rsi
  unsigned __int16 v2; // cx
  NTSTATUS v3; // ebx
  HANDLE v4; // rax
  NTSTATUS v5; // ebx
  NTSTATUS v6; // ebx
  __int64 HostSilo; // rax
  PVOID *ServerSiloGlobals; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v11; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _STRING SourceString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v17[256]; // [rsp+148h] [rbp+40h] BYREF

  v0 = (void *)CmpHiveRootSecurityDescriptor();
  if ( VersionDataKeys )
  {
    for ( i = (PCWSTR *)&unk_14033CC98; *(i - 1); i += 3 )
    {
      v2 = *((_WORD *)i + 4);
      if ( v2 == 0x8664 || PspWow64GetSharedInformation(v2, 6) )
      {
        RtlInitUnicodeString(&DestinationString, *(i - 1));
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = v0;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL) < 0 )
          goto LABEL_24;
        if ( *i )
        {
          RtlInitUnicodeString(&DestinationString, *i);
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityDescriptor = v0;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v3 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
          ZwClose(KeyHandle);
          if ( v3 < 0 )
            goto LABEL_24;
          v4 = Handle;
          KeyHandle = Handle;
        }
        else
        {
          v4 = KeyHandle;
        }
        ObjectAttributes.RootDirectory = v4;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpWindowsNtString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v0;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v5 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
        ZwClose(KeyHandle);
        if ( v5 < 0 )
          goto LABEL_24;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpCurrentVersionString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v0;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v6 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
        ZwClose(Handle);
        if ( v6 < 0 )
          goto LABEL_24;
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpCurrentVersionString,
          0,
          1u,
          CmVersionString.Buffer,
          CmVersionString.Length + 2);
        Data = 10;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMajorVersionString, 0, 4u, &Data, 4u);
        Data = 0;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMinorVersionString, 0, 4u, &Data, 4u);
        Data = 0;
        sprintf_s(DstBuf, 0x80uLL, "%u", 15063);
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&v11.Length = 0x1000000;
        v11.Buffer = (wchar_t *)v17;
        if ( RtlAnsiStringToUnicodeString(&v11, &SourceString, 0) >= 0 )
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildNumberString, 0, 1u, v11.Buffer, v11.Length + 2);
        sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&v11.Length = 0x1000000;
        v11.Buffer = (wchar_t *)v17;
        if ( RtlAnsiStringToUnicodeString(&v11, &SourceString, 0) >= 0 )
        {
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentTypeString, 0, 1u, v11.Buffer, v11.Length + 2);
          if ( CmCSDVersionString.Length )
          {
            ZwSetValueKey(
              KeyHandle,
              (PUNICODE_STRING)&CmpCsdVersionString,
              0,
              1u,
              CmCSDVersionString.Buffer,
              CmCSDVersionString.Length + 2);
            if ( CmCSDVersionString.Buffer )
              ExFreePool(CmCSDVersionString.Buffer);
            RtlInitUnicodeString(&CmCSDVersionString, 0LL);
          }
          else
          {
            ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdVersionString);
          }
        }
        if ( CmNtSpBuildNumber )
        {
          sprintf_s(DstBuf, 0x80uLL, "%u", CmNtSpBuildNumber);
          RtlInitAnsiString(&SourceString, DstBuf);
          *(_DWORD *)&v11.Length = 0x1000000;
          v11.Buffer = (wchar_t *)v17;
          if ( RtlAnsiStringToUnicodeString(&v11, &SourceString, 0) < 0 )
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, v11.Buffer, v11.Length + 2);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString);
        }
        HostSilo = PsGetHostSilo();
        ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals(HostSilo);
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpSystemRootString,
          0,
          1u,
          ServerSiloGlobals[128],
          *((unsigned __int16 *)ServerSiloGlobals + 508) + 2);
        ZwClose(KeyHandle);
      }
    }
  }
  if ( CmCSDVersionString.Buffer )
    ExFreePool(CmCSDVersionString.Buffer);
  RtlInitUnicodeString(&CmCSDVersionString, 0LL);
LABEL_24:
  ExFreePoolWithTag(v0, 0);
}
