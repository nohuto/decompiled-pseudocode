/*
 * XREFs of CmpCleanupParseContext @ 0x1404E322C
 * Callers:
 *     CmUnloadKey @ 0x14046DF74 (CmUnloadKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1404E2CA0 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405BFCC4 (CmpStartSiloRegistryNamespace.c)
 *     CmpCreatePredefined @ 0x1405C1114 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x140687BF0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140687E00 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoReOpenTransKey @ 0x1406A21DC (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpFreeExtraParameter @ 0x14068AACC (CmpFreeExtraParameter.c)
 */

__int64 *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  __int64 **v4; // rbx
  __int64 *result; // rax
  __int64 *v6; // rcx

  if ( *(_QWORD *)(a1 + 88) )
  {
    if ( !a2 )
      CmpLockRegistry();
    CmpDereferenceKeyControlBlock(*(_QWORD *)(a1 + 88));
    if ( !a2 )
      CmpUnlockRegistry();
  }
  v4 = (__int64 **)(a1 + 144);
  result = *v4;
  if ( (__int64 **)(*v4)[1] != v4 || (v6 = (__int64 *)*result, *(__int64 **)(*result + 8) != result) )
    __fastfail(3u);
  while ( 1 )
  {
    *v4 = v6;
    v6[1] = (__int64)v4;
    if ( result == (__int64 *)v4 )
      break;
    CmpFreeExtraParameter(result);
    result = *v4;
    if ( (__int64 **)(*v4)[1] == v4 )
    {
      v6 = (__int64 *)*result;
      if ( *(__int64 **)(*result + 8) == result )
        continue;
    }
    __fastfail(3u);
  }
  return result;
}
