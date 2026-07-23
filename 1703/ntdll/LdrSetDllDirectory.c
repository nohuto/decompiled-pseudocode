/*
 * XREFs of LdrSetDllDirectory @ 0x1800038F0
 * Callers:
 *     sub_1800841E4 @ 0x1800841E4 (sub_1800841E4.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     sub_180089230 @ 0x180089230 (sub_180089230.c)
 *     wcschr @ 0x18009BA10 (wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  const wchar_t *Buffer; // rcx
  void *v3; // rdi
  void *v4; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_180158674 & 4) == 0 )
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
  RtlAcquireSRWLockExclusive(&SRWLock);
  UnicodeString = stru_18015BF60;
  stru_18015BF60 = DestinationString;
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlAcquireSRWLockExclusive(&stru_18015C3A0);
  v3 = (void *)sub_180089230(&unk_18015A2E0);
  v4 = (void *)sub_180089230(&unk_18015A2D0);
  RtlReleaseSRWLockExclusive(&stru_18015C3A0);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1;
}
