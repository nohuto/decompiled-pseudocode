/*
 * XREFs of AdtpInitializeDriveLetters @ 0x1405A74A8
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1405A6F94 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtOpenSymbolicLinkObject @ 0x140435CE0 (NtOpenSymbolicLinkObject.c)
 *     NtQuerySymbolicLinkObject @ 0x140436C30 (NtQuerySymbolicLinkObject.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 */

__int64 AdtpInitializeDriveLetters()
{
  unsigned int v0; // edi
  WCHAR *v1; // rcx
  __int64 v2; // rdx
  WCHAR v3; // ax
  WCHAR *v4; // rax
  wchar_t *Buffer; // r13
  int v6; // esi
  NTSTATUS SymbolicLinkObject; // ebx
  unsigned int v8; // ebx
  char v9; // r14
  UNICODE_STRING *v10; // rsi
  UNICODE_STRING *v12; // r14
  PVOID PoolWithTag; // rax
  void *v14; // r15
  HANDLE v15; // rcx
  HANDLE SymbolicLinkHandle; // [rsp+28h] [rbp-59h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  WCHAR SourceString[32]; // [rsp+70h] [rbp-11h] BYREF

  SymbolicLinkHandle = 0LL;
  v0 = 0;
  v1 = SourceString;
  v2 = 31LL;
  do
  {
    if ( v2 == -2147483615 )
      break;
    v3 = *(WCHAR *)((char *)v1 + (char *)L"\\DosDevices\\A:" - (char *)SourceString);
    if ( !v3 )
      break;
    *v1++ = v3;
    --v2;
  }
  while ( v2 );
  v4 = v1 - 1;
  if ( v2 )
    v4 = v1;
  *v4 = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  Buffer = DestinationString.Buffer;
  v6 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    Buffer[12] = v6 + 65;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 1u, &ObjectAttributes);
    if ( SymbolicLinkObject >= 0 )
      break;
LABEL_9:
    if ( (unsigned int)++v6 >= 0x1A )
      goto LABEL_10;
  }
  *((_WORD *)&DriveMappingArray + 12 * v0) = Buffer[12];
  v12 = (UNICODE_STRING *)((char *)&DriveMappingArray + 24 * v0 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6B416553u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    v15 = SymbolicLinkHandle;
    *(_DWORD *)&v12->Length = 0x1000000;
    *((_QWORD *)&DriveMappingArray + 3 * v0 + 2) = PoolWithTag;
    SymbolicLinkObject = NtQuerySymbolicLinkObject(v15, v12, 0LL);
    NtClose(SymbolicLinkHandle);
    if ( SymbolicLinkObject < 0 )
    {
      ExFreePoolWithTag(v14, 0);
      RtlInitUnicodeString(v12, 0LL);
    }
    else
    {
      ++v0;
    }
    goto LABEL_9;
  }
  SymbolicLinkObject = -1073741801;
LABEL_10:
  if ( SymbolicLinkObject == -1073741801 )
    return 3221225495LL;
  v8 = 0;
  while ( v8 < v0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    v9 = 0;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = (UNICODE_STRING *)((char *)&DriveMappingArray + 16 * v8 + 8 * v8 + 8);
    ObjectAttributes.ObjectName = v10;
    if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 1u, &ObjectAttributes) >= 0 )
    {
      if ( NtQuerySymbolicLinkObject(SymbolicLinkHandle, v10, 0LL) < 0 )
      {
        ExFreePoolWithTag(v10->Buffer, 0);
        RtlInitUnicodeString(v10, 0LL);
      }
      else
      {
        v9 = 1;
      }
      NtClose(SymbolicLinkHandle);
      if ( v9 )
        continue;
    }
    ++v8;
  }
  return 0LL;
}
