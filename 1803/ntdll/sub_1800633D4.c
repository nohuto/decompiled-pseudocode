/*
 * XREFs of sub_1800633D4 @ 0x1800633D4
 * Callers:
 *     sub_1800113A0 @ 0x1800113A0 (sub_1800113A0.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18006337C @ 0x18006337C (sub_18006337C.c)
 */

unsigned __int64 __fastcall sub_1800633D4(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rdi
  int v7; // esi
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rbx

  v4 = (volatile signed __int64 *)(a1 + 72);
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(v4, a2, a3, a4);
  result = sub_18006337C(a1, (unsigned __int64)a2);
  v9 = result;
  if ( !v7 )
    result = RtlReleaseSRWLockShared(v4);
  *(_QWORD *)(v9 + 32) |= 1uLL;
  return result;
}
