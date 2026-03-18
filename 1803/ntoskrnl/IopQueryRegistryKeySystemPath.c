/*
 * XREFs of IopQueryRegistryKeySystemPath @ 0x1405FB93C
 * Callers:
 *     IopBuildFullDriverPath @ 0x1405FB6D4 (IopBuildFullDriverPath.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14073DA4C (PiDrvDbResolveKeyFilePaths.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401A9980 (ZwOpenSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     NtQueryObject @ 0x1404A7270 (NtQueryObject.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x1404C91A0 (RtlEqualUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall IopQueryRegistryKeySystemPath(HANDLE Handle, PUNICODE_STRING DestinationString)
{
  UNICODE_STRING *Pool; // r14
  NTSTATUS appended; // ebx
  unsigned __int16 Length; // si
  unsigned int v7; // edi
  wchar_t *Buffer; // rax
  wchar_t *v9; // rdx
  unsigned __int16 v10; // si
  unsigned __int16 v11; // di
  UNICODE_STRING DestinationStringa; // [rsp+30h] [rbp-59h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING v16; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  ULONG ReturnLength; // [rsp+100h] [rbp+77h] BYREF
  HANDLE LinkHandle; // [rsp+108h] [rbp+7Fh] BYREF

  *(_DWORD *)&String2.Length = 917516;
  *(_DWORD *)&SourceString.Length = 1703960;
  String2.Buffer = L"System";
  *(_DWORD *)&v16.Length = 1966108;
  SourceString.Buffer = L"\\SystemRoot\\";
  v16.Buffer = L"\\DriverStores\\";
  RtlInitUnicodeString(DestinationString, 0LL);
  RtlInitUnicodeString(&DestinationStringa, 0LL);
  RtlInitUnicodeString(&String1, 0LL);
  Pool = (UNICODE_STRING *)IopVerifierExAllocatePool(PagedPool, 0x1000uLL);
  if ( !Pool )
  {
    appended = -1073741670;
    goto LABEL_19;
  }
  appended = NtQueryObject(Handle, ObjectNameInformation, Pool, 0x1000u, &ReturnLength);
  if ( appended >= 0 )
  {
    Length = Pool->Length;
    v7 = CmRegistryMachineName.Length + 2;
    if ( Pool->Length < (unsigned __int16)(CmRegistryMachineName.Length + 2)
      || !RtlPrefixUnicodeString(&CmRegistryMachineName, Pool, 1u)
      || (Buffer = Pool->Buffer, v9 = &Buffer[(unsigned __int64)v7 >> 1], *(v9 - 1) != 92) )
    {
      appended = -1073741595;
      goto LABEL_18;
    }
    v10 = Length - v7;
    String1.Buffer = &Buffer[(unsigned __int64)v7 >> 1];
    String1.MaximumLength = v10;
    v11 = 0;
    String1.Length = 0;
    if ( v10 )
    {
      do
      {
        if ( v9[(unsigned __int64)v11 >> 1] == 92 )
          break;
        v11 += 2;
      }
      while ( v11 < v10 );
      String1.Length = v11;
    }
    if ( !RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      if ( (unsigned int)v11 + 32 > 0xFFFF )
      {
        appended = -2147483643;
        goto LABEL_18;
      }
      DestinationStringa.Length = 0;
      DestinationStringa.MaximumLength = v11 + 32;
      DestinationStringa.Buffer = (wchar_t *)IopVerifierExAllocatePool(PagedPool, (unsigned __int16)(v11 + 32));
      if ( !DestinationStringa.Buffer )
        goto LABEL_20;
      RtlCopyUnicodeString(&DestinationStringa, &v16);
      appended = RtlAppendUnicodeStringToString(&DestinationStringa, &String1);
      if ( appended < 0 )
        goto LABEL_18;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationStringa;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      if ( appended < 0 )
      {
        DestinationStringa.Length = 0;
      }
      else
      {
        ZwClose(LinkHandle);
        DestinationStringa.Buffer[(unsigned __int64)DestinationStringa.Length >> 1] = 92;
        DestinationStringa.Length += 2;
        DestinationStringa.Buffer[(unsigned __int64)DestinationStringa.Length >> 1] = 0;
      }
    }
    if ( DestinationStringa.Length )
    {
LABEL_17:
      *DestinationString = DestinationStringa;
      RtlInitUnicodeString(&DestinationStringa, 0LL);
      goto LABEL_18;
    }
    if ( DestinationStringa.MaximumLength >= 0x1Au )
      goto LABEL_16;
    if ( DestinationStringa.Buffer )
      ExFreePoolWithTag(DestinationStringa.Buffer, 0);
    DestinationStringa.MaximumLength = 26;
    DestinationStringa.Buffer = (wchar_t *)IopVerifierExAllocatePool(PagedPool, 0x1AuLL);
    if ( DestinationStringa.Buffer )
    {
LABEL_16:
      RtlCopyUnicodeString(&DestinationStringa, &SourceString);
      goto LABEL_17;
    }
LABEL_20:
    appended = -1073741670;
  }
LABEL_18:
  ExFreePoolWithTag(Pool, 0);
LABEL_19:
  RtlFreeAnsiString(&DestinationStringa);
  return (unsigned int)appended;
}
