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

__int64 __fastcall sub_18001F6A8(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rbx

  result = *(unsigned __int16 *)(a3 + 34);
  v6 = a3;
  if ( *(_WORD *)(a3 + 32) != (_WORD)result )
  {
    RtlAcquireSRWLockExclusive(a2 + 16);
    sub_18007DC74(v6, a2);
    if ( *(_WORD *)(v6 + 32) == *(_WORD *)(v6 + 34) )
      *(_QWORD *)(v6 + 16) = 0LL;
    else
      v6 = sub_1800217D0(a2, v6, 0LL);
    result = RtlReleaseSRWLockExclusive(a2 + 16);
  }
  if ( v6 )
    return sub_18001F750(a1, v6, a2, 2 * (a4 & 1u));
  return result;
}
