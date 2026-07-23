/*
 * XREFs of sub_180008F44 @ 0x180008F44
 * Callers:
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 *     sub_1801006CC @ 0x1801006CC (sub_1801006CC.c)
 * Callees:
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

void __fastcall sub_180008F44(_RTL_SRWLOCK *a1, __int64 a2, char a3)
{
  int v4; // esi
  __int64 v5; // rdi

  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
  v5 = sub_180009380(a1);
  if ( !v4 )
    RtlReleaseSRWLockShared(a1 + 6);
  *(_QWORD *)(v5 + 32) |= 1uLL;
}
