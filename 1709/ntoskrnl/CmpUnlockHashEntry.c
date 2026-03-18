/*
 * XREFs of CmpUnlockHashEntry @ 0x140478118
 * Callers:
 *     CmpDelayCloseWorker @ 0x140477EE0 (CmpDelayCloseWorker.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntry(PVOID P, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)P + 350)
     + 24
     * ((unsigned int)(*((_DWORD *)P + 702) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)));
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockEx(v3, 0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PERESOURCE *)P);
  return result;
}
