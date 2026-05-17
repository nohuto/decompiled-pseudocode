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

signed __int64 __fastcall sub_18005FE60(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 result; // rax
  char v5; // di
  __int64 v6; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v5 = a4;
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16, a2, (unsigned __int64 *)a3, a4);
    sub_18007BA00(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = sub_180073AFC(a2, v6, 0LL);
    result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 16));
  }
  if ( v6 )
    return sub_18005FECC(a1, v6, a2, 2 * (v5 & 1u));
  return result;
}
