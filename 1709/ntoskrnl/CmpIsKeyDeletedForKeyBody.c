/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140482380
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x1400AF5E8 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x140482020 (CmEnumerateKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140482C20 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     NtCompactKeys @ 0x1406876C0 (NtCompactKeys.c)
 *     NtCompressKey @ 0x140687910 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x140687BF0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140687E00 (NtQueryOpenSubKeysEx.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 *     CmMoveKey @ 0x14068C890 (CmMoveKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14068EB9C (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 *     CmDumpKey @ 0x14069C6E4 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14069E158 (CmpRefreshHive.c)
 * Callees:
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 */

bool __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 NextElement; // rax
  __int64 v5; // r10
  int v6; // ecx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v7 = 0LL;
  if ( (v2 & 9) != 0 )
    return 1;
  if ( !a2 )
    return 0;
  NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 200LL, &v7, 32LL);
  if ( !NextElement )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(NextElement + 68);
    if ( v6 == 2 || v6 == 11 )
      break;
    NextElement = CmListGetNextElement(v5 + 200, &v7, 32LL);
    if ( !NextElement )
      return 0;
  }
  return (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56)) != 0;
}
