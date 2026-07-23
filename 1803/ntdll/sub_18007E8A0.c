/*
 * XREFs of sub_18007E8A0 @ 0x18007E8A0
 * Callers:
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180047138 @ 0x180047138 (sub_180047138.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007E9AC @ 0x18007E9AC (sub_18007E9AC.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

LOGICAL __fastcall sub_18007E8A0(char *BaseAddress)
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
  sub_18007E9AC(BaseAddress + 120);
  sub_18007E9AC(BaseAddress + 240);
  ZwClose(*((HANDLE *)BaseAddress + 8));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, *((PVOID *)BaseAddress + 2));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, *((PVOID *)BaseAddress + 5));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, *((PVOID *)BaseAddress + 6));
  RtlAcquireSRWLockExclusive(&stru_18015D398);
  v3 = (char **)*((_QWORD *)BaseAddress + 48);
  v4 = (PVOID *)*((_QWORD *)BaseAddress + 49);
  if ( v3[1] != BaseAddress + 384 || *v4 != BaseAddress + 384 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  RtlReleaseSRWLockExclusive(&stru_18015D398);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, BaseAddress);
}
