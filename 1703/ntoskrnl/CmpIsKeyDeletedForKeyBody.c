/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x140501430
 * Callers:
 *     CmpLoadKeyCommon @ 0x14007EF3C (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmpNotifyChangeKey @ 0x140491AD8 (CmpNotifyChangeKey.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404FCE78 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     NtCompactKeys @ 0x14065E844 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065EA94 (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x14065EDDC (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14065EFBC (NtQueryOpenSubKeysEx.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140662EF0 (CmEnumerateValueFromLayeredKey.c)
 *     CmMoveKey @ 0x1406631AC (CmMoveKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140665298 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14067309C (CmpRefreshHive.c)
 * Callees:
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  char *NextElement; // rax
  __int64 v6; // r10
  _QWORD *v7; // r11
  int v8; // ecx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0LL;
  if ( (v2 & 9) != 0 )
  {
    LOBYTE(NextElement) = 1;
  }
  else if ( a2 && (NextElement = CmListGetNextElement((_QWORD *)(v4 + 200), &v10, 32)) != 0LL )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)NextElement + 17);
      if ( v8 == 2 || v8 == 11 )
        break;
      NextElement = CmListGetNextElement(v7, &v10, 32);
      if ( !NextElement )
        return (char)NextElement;
    }
    LOBYTE(NextElement) = CmEqualTrans(*((_QWORD *)NextElement + 7), v6) != 0;
  }
  else
  {
    LOBYTE(NextElement) = 0;
  }
  return (char)NextElement;
}
