/*
 * XREFs of sub_18005FE60 @ 0x18005FE60
 * Callers:
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_180073AFC @ 0x180073AFC (sub_180073AFC.c)
 *     sub_18007BA00 @ 0x18007BA00 (sub_18007BA00.c)
 */

void __fastcall sub_18005FE60(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    sub_18007BA00(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = sub_180073AFC(a2, v5, 0LL);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
    sub_18005FECC(a1, v5, a2, 2 * (a4 & 1u));
}
