/*
 * XREFs of RtlGetPersistedStateLocation @ 0x140648E80
 * Callers:
 *     PiGetFileDirectoryRoot @ 0x140648A5C (PiGetFileDirectoryRoot.c)
 *     PiCreateRedirectedStateRoot @ 0x140648D7C (PiCreateRedirectedStateRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14073D110 (PiDrvDbQuerySyncNodesUpdated.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *PoolWithTag; // rdi
  NTSTATUS v11; // eax
  signed int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  PCWSTR v16; // rdx
  ULONG v18; // esi
  ULONG Length; // ebx
  NTSTATUS v20; // eax
  unsigned __int64 v21; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_1407F9C40[2 * StateLocationType];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v11;
  if ( v11 != -1073741772 )
  {
    if ( v11 < 0 )
      goto LABEL_13;
    RtlInitUnicodeString(&DestinationString, SourceID);
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( v12 != -1073741772 )
      goto LABEL_12;
  }
  if ( !DefaultPath )
  {
LABEL_12:
    if ( v12 < 0 )
      goto LABEL_13;
    if ( !CustomValue )
      CustomValue = L"TargetNtPath";
    RtlInitUnicodeString(&DestinationString, CustomValue);
    v18 = BufferLengthIn;
    Length = BufferLengthIn + 16;
    if ( BufferLengthIn + 16 >= BufferLengthIn )
    {
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, Length, 0x70657373u);
      if ( !PoolWithTag )
      {
        v12 = -1073741801;
        goto LABEL_13;
      }
      v20 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
      v12 = v20;
      if ( v20 < 0 )
      {
        if ( v20 != -2147483643 )
          goto LABEL_13;
      }
      else if ( *((_DWORD *)PoolWithTag + 1) != 1 )
      {
        v12 = -1073741788;
        goto LABEL_13;
      }
      v15 = *((_DWORD *)PoolWithTag + 2);
      ResultLength = v15;
      if ( v20 >= 0 && PoolWithTag[((unsigned __int64)v15 >> 1) + 5] )
      {
        v21 = v15 + 2;
        ResultLength = v21;
        v15 += 2;
        if ( v18 < (unsigned int)v21 )
        {
          v12 = -2147483643;
        }
        else
        {
          PoolWithTag[(v21 >> 1) + 5] = 0;
          v15 = ResultLength;
        }
      }
      if ( BufferLengthOut )
        *BufferLengthOut = v15;
      if ( v12 < 0 )
        goto LABEL_13;
      v16 = PoolWithTag + 6;
      goto LABEL_11;
    }
LABEL_24:
    v12 = -1073741675;
    goto LABEL_13;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( DefaultPath[v13] );
  v14 = v13 + 1;
  v15 = 2 * v14;
  ResultLength = 2 * v14;
  if ( 2 * v14 < v14 )
    goto LABEL_24;
  v12 = BufferLengthIn < v15 ? 0x80000005 : 0;
  if ( BufferLengthOut )
    *BufferLengthOut = v15;
  if ( v15 > BufferLengthIn )
    goto LABEL_13;
  v16 = DefaultPath;
LABEL_11:
  memmove(TargetPath, v16, v15);
LABEL_13:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
