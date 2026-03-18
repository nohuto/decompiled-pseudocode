/*
 * XREFs of CmpUnlockHashEntryByKcb @ 0x140472AB8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 */

__int64 __fastcall CmpUnlockHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(*(_QWORD *)(v1 + 2800)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 2808) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9)));
  ExReleasePushLockEx(
    *(_QWORD *)(v2 + 2800)
  + 24 * ((unsigned int)(*(_DWORD *)(v2 + 2808) - 1) & (v3 ^ ((unsigned __int64)(unsigned int)v3 >> 9))),
    0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 5496), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive((PERESOURCE *)v1);
  return result;
}
