/*
 * XREFs of CmpUnlockDeletedHashEntryByKcb @ 0x14049ABD4
 * Callers:
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockDeletedHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned __int64 v4; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(*(_QWORD *)(v1 + 1656)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 1664) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9)));
  v4 = (unsigned int)(*(_DWORD *)(v2 + 1664) - 1) & (v3 ^ ((unsigned __int64)(unsigned int)v3 >> 9));
  ExReleasePushLockEx(*(_QWORD *)(v2 + 1656) + 24 * v4, 0LL, v4, v2);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4288), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PVOID)v1);
  return result;
}
