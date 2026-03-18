/*
 * XREFs of VfAvlCleanupLockContext @ 0x1400F9A6C
 * Callers:
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 *     VfTargetDriversAdd @ 0x1400F9990 (VfTargetDriversAdd.c)
 *     VfTargetDriversGetNode @ 0x140277D1C (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1407B40E8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1407B4154 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1407B445C (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1407B44D4 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407B4630 (VerifierIoInitializeRemoveLockEx.c)
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
 *     VfSuspectDriversGetVerifierInformation @ 0x1407BD404 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1407BEC48 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1407BECDC (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1407BEDFC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1407BF520 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1407BF870 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407BFABC (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1407C58A0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F9B40 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

unsigned __int64 __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    result = ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    result = *(unsigned __int8 *)(a1 + 8);
    __writecr8(result);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return result;
}
