/*
 * XREFs of LdrSetDllDirectory @ 0x180001F70
 * Callers:
 *     LdrpInitializePolicy @ 0x180082224 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlCreateUnicodeString @ 0x18004EE70 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlpInvalidatePathCache @ 0x180088670 (RtlpInvalidatePathCache.c)
 *     wcschr @ 0x180096780 (wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  wchar_t *Buffer; // rcx
  void *v3; // rdi
  void *v4; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  Buffer = DllDirectory->Buffer;
  if ( !Buffer )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_5;
  }
  if ( wcschr(Buffer, 0x3Bu) )
    return -1073741811;
  if ( !RtlCreateUnicodeString(&DestinationString, DllDirectory->Buffer) )
    return -1073741801;
LABEL_5:
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  UnicodeString = LdrpDllDirectory;
  LdrpDllDirectory = DestinationString;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v3 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v4 = (void *)RtlpInvalidatePathCache(&RtlpDllSearchPathWithOptions);
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1;
}
