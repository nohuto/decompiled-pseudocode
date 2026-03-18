/*
 * XREFs of PopDiagReadRegKeyValue @ 0x1406CC2C4
 * Callers:
 *     PopDiagTracePerfTrackData @ 0x140577E00 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceDirtyTransition @ 0x14083523C (PopDiagTraceDirtyTransition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopDiagReadRegKeyValue(PCWSTR SourceString, PCWSTR a2, size_t Size, void *a4)
{
  _DWORD *PoolWithTag; // rdi
  NTSTATUS v8; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  KeyHandle = 0LL;
  PoolWithTag = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v8 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x50455654u);
      if ( !PoolWithTag )
      {
        v8 = -1073741801;
        goto LABEL_10;
      }
      v8 = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             PoolWithTag,
             ResultLength,
             &ResultLength);
    }
    if ( v8 >= 0 )
    {
      if ( PoolWithTag[2] == Size )
        memmove(a4, PoolWithTag + 3, Size);
      else
        v8 = -1073741789;
    }
  }
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x50455654u);
  return (unsigned int)v8;
}
