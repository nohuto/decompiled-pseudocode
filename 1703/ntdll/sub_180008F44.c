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

__int64 __fastcall sub_180008F44(__int64 a1, __int64 a2, char a3)
{
  int v4; // esi
  __int64 result; // rax
  __int64 v6; // rdi

  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 48);
  result = sub_180009380(a1);
  v6 = result;
  if ( !v4 )
    result = RtlReleaseSRWLockShared(a1 + 48);
  *(_QWORD *)(v6 + 32) |= 1uLL;
  return result;
}
