/*
 * XREFs of CmpSetVersionData @ 0x14062ED3C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14062E4B0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     sprintf_s @ 0x14018E540 (sprintf_s.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ExFreePool @ 0x1402EA010 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     PsWow64IsMachineSupported @ 0x14055FEF0 (PsWow64IsMachineSupported.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14062F244 (CmpHiveRootSecurityDescriptor.c)
 */

void CmpSetVersionData()
{
  wchar_t **v0; // rdi
  void *v1; // rsi
  __int16 v2; // cx
  const WCHAR *v3; // rdx
  NTSTATUS v4; // ebx
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  NTSTATUS v7; // ebx
  __int64 HostSilo; // rax
  PVOID *ServerSiloGlobals; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v12; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _STRING SourceString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v18[256]; // [rsp+148h] [rbp+40h] BYREF

  v0 = &VersionDataKeys;
  v1 = (void *)CmpHiveRootSecurityDescriptor();
  if ( VersionDataKeys )
  {
    do
    {
      v2 = *((_WORD *)v0 + 8);
      if ( v2 == -31132 || (unsigned int)PsWow64IsMachineSupported(v2) )
      {
        RtlInitUnicodeString(&DestinationString, *v0);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = v1;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL) < 0 )
          goto LABEL_23;
        v3 = v0[1];
        if ( v3 )
        {
          RtlInitUnicodeString(&DestinationString, v3);
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityDescriptor = v1;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v4 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
          ZwClose(KeyHandle);
          if ( v4 < 0 )
            goto LABEL_23;
          v5 = Handle;
          KeyHandle = Handle;
        }
        else
        {
          v5 = KeyHandle;
        }
        ObjectAttributes.RootDirectory = v5;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpWindowsNtString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v1;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v6 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
        ZwClose(KeyHandle);
        if ( v6 < 0 )
          goto LABEL_23;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpCurrentVersionString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v1;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v7 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
        ZwClose(Handle);
        if ( v7 < 0 )
          goto LABEL_23;
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
        sprintf_s(DstBuf, 0x80uLL, "%u", 17134);
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&v12.Length = 0x1000000;
        v12.Buffer = (wchar_t *)v18;
        if ( RtlAnsiStringToUnicodeString(&v12, &SourceString, 0) >= 0 )
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildNumberString, 0, 1u, v12.Buffer, v12.Length + 2);
        sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&v12.Length = 0x1000000;
        v12.Buffer = (wchar_t *)v18;
        if ( RtlAnsiStringToUnicodeString(&v12, &SourceString, 0) >= 0 )
        {
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentTypeString, 0, 1u, v12.Buffer, v12.Length + 2);
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
          *(_DWORD *)&v12.Length = 0x1000000;
          v12.Buffer = (wchar_t *)v18;
          if ( RtlAnsiStringToUnicodeString(&v12, &SourceString, 0) < 0 )
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, v12.Buffer, v12.Length + 2);
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
          ServerSiloGlobals[132],
          *((unsigned __int16 *)ServerSiloGlobals + 524) + 2);
        ZwClose(KeyHandle);
      }
      v0 += 3;
    }
    while ( *v0 );
  }
  if ( CmCSDVersionString.Buffer )
    ExFreePool(CmCSDVersionString.Buffer);
  RtlInitUnicodeString(&CmCSDVersionString, 0LL);
LABEL_23:
  ExFreePoolWithTag(v1, 0);
}
