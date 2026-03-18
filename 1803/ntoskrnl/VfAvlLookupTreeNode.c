/*
 * XREFs of VfAvlLookupTreeNode @ 0x1401609D8
 * Callers:
 *     VfTargetDriversRemove @ 0x140160844 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x1402AAA9C (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x140821298 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140821304 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x140821688 (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x140821A38 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140821B24 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140821BC8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140821C14 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140821DD4 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140821EC0 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140822108 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140822230 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1408224E8 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140822618 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1408226D4 (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x14082C0A8 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14082C25C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14082C990 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14082CD70 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14082CFFC (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140832E00 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x14006DBC0 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1401615F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140161628 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140161680 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1401616A4 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x140161744 (ViAvlNodeInitializeSessionId.c)
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
