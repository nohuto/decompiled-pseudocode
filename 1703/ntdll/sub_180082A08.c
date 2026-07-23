/*
 * XREFs of sub_180082A08 @ 0x180082A08
 * Callers:
 *     sub_180011C88 @ 0x180011C88 (sub_180011C88.c)
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_1800186FC @ 0x1800186FC (sub_1800186FC.c)
 *     TpReleasePool @ 0x1800827E0 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180082B14 @ 0x180082B14 (sub_180082B14.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

LOGICAL __fastcall sub_180082A08(char *BaseAddress)
{
  void *v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx

  v2 = (void *)*((_QWORD *)BaseAddress + 7);
  if ( v2 )
  {
    ZwClose(v2);
    *((_QWORD *)BaseAddress + 7) = 0LL;
  }
  sub_180082B14(BaseAddress + 120);
  sub_180082B14(BaseAddress + 240);
  ZwClose(*((HANDLE *)BaseAddress + 8));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, *((PVOID *)BaseAddress + 2));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, *((PVOID *)BaseAddress + 5));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, *((PVOID *)BaseAddress + 6));
  RtlAcquireSRWLockExclusive(&stru_18015C360);
  v3 = (char **)*((_QWORD *)BaseAddress + 48);
  v4 = (PVOID *)*((_QWORD *)BaseAddress + 49);
  if ( v3[1] != BaseAddress + 384 || *v4 != BaseAddress + 384 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  RtlReleaseSRWLockExclusive(&stru_18015C360);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, BaseAddress);
}
