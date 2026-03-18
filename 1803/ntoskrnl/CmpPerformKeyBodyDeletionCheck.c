/*
 * XREFs of CmpPerformKeyBodyDeletionCheck @ 0x1404AD468
 * Callers:
 *     CmpQueryKeySecurity @ 0x140007C08 (CmpQueryKeySecurity.c)
 *     CmpDoQueryKeyName @ 0x1400080A0 (CmpDoQueryKeyName.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtQueryOpenSubKeysEx @ 0x1405ED870 (NtQueryOpenSubKeysEx.c)
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 *     CmpSaveBootControlSet @ 0x1406EB510 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1406EBADC (NtCompactKeys.c)
 *     NtCompressKey @ 0x1406EBDBC (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1406EC1AC (NtQueryOpenSubKeys.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1406F0CB4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpAcquireSystemDriverHiveContext @ 0x1408B8294 (CmpAcquireSystemDriverHiveContext.c)
 * Callees:
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpPerformKeyBodyDeletionCheck(__int64 a1, __int64 a2)
{
  char IsKeyDeletedForKeyBody; // al
  unsigned int v4; // edx

  IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, a2);
  v4 = 0;
  if ( IsKeyDeletedForKeyBody )
    return (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
  return v4;
}
