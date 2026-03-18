/*
 * XREFs of CmpUnlockHashEntryByKcb @ 0x1404CFE70
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 */

__int64 __fastcall CmpUnlockHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9));
  *(_QWORD *)(*(_QWORD *)(v1 + 2800)
            + 24 * ((unsigned int)(*(_DWORD *)(v1 + 2808) - 1) & (v2 ^ ((unsigned __int64)v2 >> 9)))
            + 8) = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 8) ^ (*(_DWORD *)(a1 + 8) >> 9)));
  ExReleasePushLockEx(
    *(_QWORD *)(v3 + 2800)
  + 24 * ((unsigned int)(*(_DWORD *)(v3 + 2808) - 1) & (v4 ^ ((unsigned __int64)(unsigned int)v4 >> 9))),
    0LL);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 5496), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return CmpDeleteHive(v1);
  return result;
}
