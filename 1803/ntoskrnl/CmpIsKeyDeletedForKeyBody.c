/*
 * XREFs of CmpIsKeyDeletedForKeyBody @ 0x1404AECB0
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400070F8 (CmpLoadKeyCommon.c)
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmEnumerateKey @ 0x1404ACAA0 (CmEnumerateKey.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpCloseKeyObject @ 0x1404E2000 (CmpCloseKeyObject.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1406F09E4 (CmEnumerateValueFromLayeredKey.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1406F2D58 (CmpIsHiveAlreadyLoaded.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1406F3B38 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F5E54 (CmpCheckKeyBodyAccess.c)
 *     CmDumpKey @ 0x1407015A4 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140702BD0 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 */

char __fastcall CmpIsKeyDeletedForKeyBody(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 NextElement; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v8 = 0LL;
  if ( (v2 & 9) != 0 )
  {
    LOBYTE(NextElement) = 1;
  }
  else if ( a2 && (NextElement = CmListGetNextElement(*(_QWORD *)(a1 + 8) + 200LL, &v8, 32LL)) != 0 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(NextElement + 68);
      if ( v6 == 2 || v6 == 11 )
        break;
      NextElement = CmListGetNextElement(v5 + 200, &v8, 32LL);
      if ( !NextElement )
        return NextElement;
    }
    LOBYTE(NextElement) = CmEqualTrans(*(_QWORD *)(NextElement + 56), v4) != 0;
  }
  else
  {
    LOBYTE(NextElement) = 0;
  }
  return NextElement;
}
