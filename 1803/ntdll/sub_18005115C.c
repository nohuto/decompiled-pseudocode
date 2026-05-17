/*
 * XREFs of sub_18005115C @ 0x18005115C
 * Callers:
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18005115C(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  volatile signed __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi

  v4 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v5 = (volatile signed __int64 *)((char *)&unk_18015D120 + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive((unsigned __int64)(v5 + 1), a2, a3, a4);
  *(_QWORD *)(v4 + 8) = *v5;
  *v5 = v4;
  return RtlReleaseSRWLockExclusive(v5 + 1);
}
