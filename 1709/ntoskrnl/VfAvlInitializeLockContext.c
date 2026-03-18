/*
 * XREFs of VfAvlInitializeLockContext @ 0x14027812C
 * Callers:
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
 *     <none>
 */

__int64 __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) |= 4u;
  return result;
}
