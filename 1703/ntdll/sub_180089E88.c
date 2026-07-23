/*
 * XREFs of sub_180089E88 @ 0x180089E88
 * Callers:
 *     sub_180089DC4 @ 0x180089DC4 (sub_180089DC4.c)
 *     sub_1800F6928 @ 0x1800F6928 (sub_1800F6928.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180089E88(_WORD *BaseAddress)
{
  __int64 v2; // rdi
  char v3; // si
  _QWORD *v5; // rcx
  PVOID *v6; // rax

  v2 = BaseAddress[9] & 0xF;
  v3 = 0;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3F0 + 8 * v2));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = *(_QWORD **)BaseAddress;
    v6 = (PVOID *)*((_QWORD *)BaseAddress + 1);
    if ( *(_WORD **)(*(_QWORD *)BaseAddress + 8LL) != BaseAddress || *v6 != BaseAddress )
      __fastfail(3u);
    *v6 = v5;
    v3 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_18015C0D0);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_18015C3F0 + 8 * v2));
  if ( v3 )
    RtlFreeHeap(qword_18015C450, 0, BaseAddress);
}
