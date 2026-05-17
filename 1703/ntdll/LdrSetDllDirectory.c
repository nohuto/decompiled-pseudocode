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

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_180158674 & 4) == 0 )
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
  RtlAcquireSRWLockExclusive(&unk_18015C3A8);
  UnicodeString = (UNICODE_STRING)xmmword_18015BF60;
  xmmword_18015BF60 = (__int128)DestinationString;
  RtlReleaseSRWLockExclusive(&unk_18015C3A8);
  RtlAcquireSRWLockExclusive(&unk_18015C3A0);
  v3 = sub_180089230(&unk_18015A2E0);
  v4 = sub_180089230(&unk_18015A2D0);
  RtlReleaseSRWLockExclusive(&unk_18015C3A0);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  return 1LL;
}
