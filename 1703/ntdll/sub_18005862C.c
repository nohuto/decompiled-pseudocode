/*
 * XREFs of sub_18005862C @ 0x18005862C
 * Callers:
 *     sub_180058BC8 @ 0x180058BC8 (sub_180058BC8.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18005862C(__int64 a1, unsigned __int64 a2)
{
  volatile signed __int64 v2; // rdi
  volatile signed __int64 *v3; // rsi

  v2 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v3 = (volatile signed __int64 *)((char *)&unk_18015C0E0 + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive(v3 + 1);
  *(_QWORD *)(v2 + 8) = *v3;
  *v3 = v2;
  return RtlReleaseSRWLockExclusive(v3 + 1);
}
