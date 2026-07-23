/*
 * XREFs of LdrSetDllDirectory @ 0x180002990
 * Callers:
 *     sub_18007F528 @ 0x18007F528 (sub_18007F528.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     sub_18008367C @ 0x18008367C (sub_18008367C.c)
 *     wcschr @ 0x180090C50 (wcschr.c)
 */

NTSTATUS __cdecl LdrSetDllDirectory(PUNICODE_STRING DllDirectory)
{
  const wchar_t *Buffer; // rcx
  void *v3; // rdi
  void *v4; // rbx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1801596D4 & 4) == 0 )
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
  UnicodeString = stru_18015CFE8;
  stru_18015CFE8 = DestinationString;
  RtlReleaseSRWLockExclusive(&SRWLock);
  RtlAcquireSRWLockExclusive(&stru_18015D3D8);
  v3 = (void *)sub_18008367C(&unk_18015B2E0);
  v4 = (void *)sub_18008367C(&unk_18015B2D0);
  RtlReleaseSRWLockExclusive(&stru_18015D3D8);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1;
}
