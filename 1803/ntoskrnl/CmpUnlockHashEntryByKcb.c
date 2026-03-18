/*
 * XREFs of CmpUnlockHashEntryByKcb @ 0x14054DE30
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 */

void __fastcall CmpUnlockHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // rcx
  unsigned __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(*(_QWORD *)(v1 + 1640)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 1648) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9)));
  v4 = (unsigned int)(*(_DWORD *)(v2 + 1648) - 1) & (v3 ^ ((unsigned __int64)(unsigned int)v3 >> 9));
  ExReleasePushLockEx(*(_QWORD *)(v2 + 1640) + 24 * v4, 0LL, v4, v2);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 4288), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)v1);
}
