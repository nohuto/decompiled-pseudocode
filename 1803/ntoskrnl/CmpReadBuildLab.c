/*
 * XREFs of CmpReadBuildLab @ 0x1406F06A0
 * Callers:
 *     CmpRecordShutdownStopTime @ 0x1406F0804 (CmpRecordShutdownStopTime.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall CmpReadBuildLab(_QWORD *a1, ULONG *a2)
{
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  NTSTATUS v5; // ebx
  PVOID v6; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+30h] BYREF
  ULONG v12; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  TransientPoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BuildLab");
    v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v5 == -1073741789 )
    {
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                        PagedPool,
                                                        ResultLength,
                                                        0x30384D43u);
      if ( !TransientPoolWithTag )
      {
LABEL_4:
        v5 = -1073741670;
        goto LABEL_8;
      }
      v5 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             TransientPoolWithTag,
             ResultLength,
             &v12);
      if ( v5 >= 0 )
      {
        v6 = CmpAllocateTransientPoolWithTag(PagedPool, TransientPoolWithTag->Privilege[0].Luid.LowPart, 0x30384D43u);
        *a1 = v6;
        if ( !v6 )
          goto LABEL_4;
        memmove(v6, &TransientPoolWithTag->Privilege[0].Luid.HighPart, TransientPoolWithTag->Privilege[0].Luid.LowPart);
        *a2 = TransientPoolWithTag->Privilege[0].Luid.LowPart;
      }
    }
  }
LABEL_8:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( TransientPoolWithTag )
    CmSiFreeMemory(TransientPoolWithTag);
  return (unsigned int)v5;
}
