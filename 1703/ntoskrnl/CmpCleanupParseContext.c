/*
 * XREFs of CmpCleanupParseContext @ 0x1404D5440
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmUnloadKey @ 0x1404CB114 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x1404D48BC (CmLoadDifferencingKey.c)
 *     CmpParseKey @ 0x1405080E0 (CmpParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405A383C (CmpStartSiloRegistryNamespace.c)
 *     CmpCreatePredefined @ 0x1405A47C8 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x14065EDDC (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14065EFBC (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoReOpenTransKey @ 0x140677CA0 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( !a2 )
      CmpLockRegistry(a1);
    result = CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
    if ( !a2 )
      return CmpUnlockRegistry();
  }
  return result;
}
