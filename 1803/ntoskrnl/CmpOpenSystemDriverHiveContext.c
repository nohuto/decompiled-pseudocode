/*
 * XREFs of CmpOpenSystemDriverHiveContext @ 0x1408B7BC8
 * Callers:
 *     CmGetSystemDriverList @ 0x1408B7D44 (CmGetSystemDriverList.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400BAE30 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 */

__int64 __fastcall CmpOpenSystemDriverHiveContext(PCUNICODE_STRING Source, __int64 a2)
{
  __int16 v2; // ax
  PVOID v5; // rdi
  int appended; // ebx
  void *v7; // r8
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  PVOID v12; // [rsp+B0h] [rbp+40h] BYREF

  v2 = Source->Length + 4;
  v12 = 0LL;
  Destination.MaximumLength = CmRegistryMachineName.Length + v2;
  KeyHandle = 0LL;
  v5 = 0LL;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(CmRegistryMachineName.Length + v2),
                                    0x20204D43u);
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineName);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&Destination, Source);
        if ( appended >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          appended = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          if ( appended >= 0 )
          {
            appended = CmObReferenceObjectByHandle(KeyHandle, 1u, v7, 0, &v12, 0LL);
            if ( appended >= 0 )
            {
              if ( RtlCreateUnicodeString((PUNICODE_STRING)(a2 + 16), Source->Buffer) )
              {
                *(_QWORD *)(a2 + 32) = KeyHandle;
                *(_QWORD *)(a2 + 40) = v12;
                KeyHandle = 0LL;
                goto LABEL_9;
              }
              appended = -1073741801;
            }
            v5 = v12;
          }
        }
      }
    }
  }
  else
  {
    appended = -1073741801;
  }
LABEL_9:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)appended;
}
