/*
 * XREFs of sub_180008F9C @ 0x180008F9C
 * Callers:
 *     sub_1800072C4 @ 0x1800072C4 (sub_1800072C4.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     sub_180009014 @ 0x180009014 (sub_180009014.c)
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall sub_180008F9C(_RTL_SRWLOCK *a1, __int64 a2, char a3, __int64 a4)
{
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 6);
  v7 = sub_180009380(a1);
  if ( v7 )
    v9 = sub_180009014(v8, v7, a4);
  else
    v9 = -1LL;
  if ( !v6 )
    RtlReleaseSRWLockShared(a1 + 6);
  return v9;
}
