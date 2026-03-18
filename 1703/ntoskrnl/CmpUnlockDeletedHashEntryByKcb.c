/*
 * XREFs of CmpUnlockDeletedHashEntryByKcb @ 0x1404D0178
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404910B0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpUnlockDeletedHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(*(_QWORD *)(v1 + 2816)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 2824) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9)));
  ExReleasePushLockEx(
    *(_QWORD *)(v2 + 2816)
  + 24 * ((unsigned int)(*(_DWORD *)(v2 + 2824) - 1) & (v3 ^ ((unsigned __int64)(unsigned int)v3 >> 9))),
    0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 5496), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(v1);
  return result;
}
