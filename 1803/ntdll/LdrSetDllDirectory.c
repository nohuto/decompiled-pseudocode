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

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_1801596D4 & 4) == 0 )
    return 3221225485LL;
  v2 = *(const wchar_t **)(a1 + 8);
  if ( !v2 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_5;
  }
  if ( wcschr(v2, 0x3Bu) )
    return 3221225485LL;
  if ( !(unsigned __int8)RtlCreateUnicodeString(&DestinationString, *(_QWORD *)(a1 + 8)) )
    return 3221225495LL;
LABEL_5:
  RtlAcquireSRWLockExclusive(&unk_18015D3E0);
  UnicodeString = (UNICODE_STRING)xmmword_18015CFE8;
  xmmword_18015CFE8 = (__int128)DestinationString;
  RtlReleaseSRWLockExclusive(&unk_18015D3E0);
  RtlAcquireSRWLockExclusive(&unk_18015D3D8);
  v3 = sub_18008367C(&unk_18015B2E0);
  v4 = sub_18008367C(&unk_18015B2D0);
  RtlReleaseSRWLockExclusive(&unk_18015D3D8);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  return 1LL;
}
