/*
 * XREFs of CmpCleanupParseContext @ 0x14049FF18
 * Callers:
 *     CmLoadDifferencingKey @ 0x14049ED68 (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14049F9B0 (CmCreateKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     NtQueryOpenSubKeysEx @ 0x1405ED870 (NtQueryOpenSubKeysEx.c)
 *     CmpStartSiloRegistryNamespace @ 0x140620458 (CmpStartSiloRegistryNamespace.c)
 *     CmpCreatePredefined @ 0x14062EBFC (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x1406EC1AC (NtQueryOpenSubKeys.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoReOpenTransKey @ 0x1407073A8 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 * Callees:
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x1406EEEF8 (CmpFreeExtraParameter.c)
 */

__int64 *__fastcall CmpCleanupParseContext(__int64 a1, char a2)
{
  ULONG_PTR v4; // rcx
  __int64 **v5; // rbx
  __int64 *result; // rax
  __int64 *v7; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    if ( !a2 )
    {
      CmpLockRegistry();
      v4 = *(_QWORD *)(a1 + 88);
    }
    CmpDereferenceKeyControlBlock(v4);
    if ( !a2 )
      CmpUnlockRegistry();
  }
  v5 = (__int64 **)(a1 + 144);
  result = *v5;
  if ( (__int64 **)(*v5)[1] != v5 || (v7 = (__int64 *)*result, *(__int64 **)(*result + 8) != result) )
    __fastfail(3u);
  while ( 1 )
  {
    *v5 = v7;
    v7[1] = (__int64)v5;
    if ( result == (__int64 *)v5 )
      break;
    CmpFreeExtraParameter(result);
    result = *v5;
    if ( (__int64 **)(*v5)[1] == v5 )
    {
      v7 = (__int64 *)*result;
      if ( *(__int64 **)(*result + 8) == result )
        continue;
    }
    __fastfail(3u);
  }
  return result;
}
