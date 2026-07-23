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

void __fastcall sub_1800633D4(__int64 a1, unsigned __int64 a2, char a3)
{
  _RTL_SRWLOCK *v3; // rdi
  int v6; // esi
  unsigned __int64 v7; // rbx

  v3 = (_RTL_SRWLOCK *)(a1 + 72);
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(v3);
  v7 = sub_18006337C(a1, a2);
  if ( !v6 )
    RtlReleaseSRWLockShared(v3);
  *(_QWORD *)(v7 + 32) |= 1uLL;
}
