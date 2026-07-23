/*
 * XREFs of sub_18001F6A8 @ 0x18001F6A8
 * Callers:
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     sub_18001F750 @ 0x18001F750 (sub_18001F750.c)
 *     sub_1800217D0 @ 0x1800217D0 (sub_1800217D0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007DC74 @ 0x18007DC74 (sub_18007DC74.c)
 */

void __fastcall sub_18001F6A8(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, char a4)
{
  __int64 v5; // rbx

  v5 = a3;
  if ( *(_WORD *)(a3 + 32) != *(_WORD *)(a3 + 34) )
  {
    RtlAcquireSRWLockExclusive(a2 + 2);
    sub_18007DC74(v5, a2);
    if ( *(_WORD *)(v5 + 32) == *(_WORD *)(v5 + 34) )
      *(_QWORD *)(v5 + 16) = 0LL;
    else
      v5 = sub_1800217D0(a2, v5, 0LL);
    RtlReleaseSRWLockExclusive(a2 + 2);
  }
  if ( v5 )
    sub_18001F750(a1, v5, a2, 2 * (a4 & 1u));
}
