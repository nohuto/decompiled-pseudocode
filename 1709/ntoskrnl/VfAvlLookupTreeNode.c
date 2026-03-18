/*
 * XREFs of VfAvlLookupTreeNode @ 0x1400F90E8
 * Callers:
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x140277D1C (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1407B40E8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1407B4154 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x1407B44D4 (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x1407B4868 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407B4954 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1407B49F8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1407B6A98 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1407B6C5C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1407B6D48 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1407B6F9C (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1407B70C4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1407B71D8 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1407B7378 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1407B74A8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1407B754C (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x1407BEC48 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1407BECDC (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1407BEDFC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1407BF520 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1407BF870 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407BFABC (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1407C58A0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x1400DF180 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F9B40 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F9B74 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400F9BD0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400F9BF4 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F9C94 (ViAvlNodeInitializeSessionId.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 i; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r13
  __int64 v23; // rcx
  PVOID NodeOrParent; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v26; // [rsp+30h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  __int64 v28; // [rsp+98h] [rbp+58h]

  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v18 = v5;
  if ( v10 > 1 )
    v18 = 4096LL;
  v26 = v18;
  ViAvlNodeInitializeSessionId(a1, &Buffer);
  v19 = ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2, v20, v19);
  v22 = 192 * v21;
  v23 = 192 * v21 + a1[2];
  v28 = 192 * v21;
  ViAvlAcquireTableLockAtDpcLevelSafe(v23, a2);
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v22 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v28 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_4:
    v11 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v28 = v9 + 4096;
      if ( v9 + 4096 <= v11 )
        v26 = 4096LL;
      else
        v26 = v11 - v9;
      ViAvlNodeInitializeSessionId(a1, &Buffer);
      v13 = ViAvlTableIndex(a1, Buffer);
      ViAvlRaiseIrqlSafe(a2, v14, v13);
      v16 = 192 * v15;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v15 + a1[2], a2);
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v16 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v16 + a1[2], a2);
      v9 = v28;
    }
  }
  return v4;
}
