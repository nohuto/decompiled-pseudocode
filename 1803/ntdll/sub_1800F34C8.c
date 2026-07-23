/*
 * XREFs of sub_1800F34C8 @ 0x1800F34C8
 * Callers:
 *     sub_1800F3FB0 @ 0x1800F3FB0 (sub_1800F3FB0.c)
 *     sub_1800F4094 @ 0x1800F4094 (sub_1800F4094.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_1800F34C8(PVOID **BaseAddress)
{
  __int64 v2; // rdi
  char v3; // si
  PVOID *v5; // rax
  PVOID *v6; // rcx

  v2 = *((_WORD *)BaseAddress + 9) & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7E0 + 8 * v2));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = *BaseAddress;
    if ( (*BaseAddress)[1] != BaseAddress || (v6 = BaseAddress[1], *v6 != BaseAddress) )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_18015D728);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015D7E0 + 8 * v2));
  if ( v3 )
    RtlFreeHeap(qword_18015D7E8, 0, BaseAddress);
}
