/*
 * XREFs of sub_18005862C @ 0x18005862C
 * Callers:
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18005862C(__int64 a1, unsigned __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdi
  _RTL_SRWLOCK *v3; // rsi

  v2 = (_RTL_SRWLOCK *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = a2;
  v3 = (_RTL_SRWLOCK *)((char *)&unk_18015C0E0 + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  v2[1].Ptr = v3->Ptr;
  v3->Ptr = v2;
  RtlReleaseSRWLockExclusive(v3 + 1);
}
