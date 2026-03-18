/*
 * XREFs of CmpUnlockHashEntry @ 0x14049D070
 * Callers:
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayCloseWorker @ 0x14049CE20 (CmpDelayCloseWorker.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntry(PVOID P, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // rcx
  __int64 result; // rax

  v5 = (unsigned int)(*((_DWORD *)P + 412) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9));
  v6 = *((_QWORD *)P + 205) + 24 * v5;
  *(_QWORD *)(v6 + 8) = 0LL;
  ExReleasePushLockEx(v6, 0LL, v5, a4);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)P + 1072, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(P);
  return result;
}
