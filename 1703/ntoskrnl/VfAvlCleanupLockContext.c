/*
 * XREFs of VfAvlCleanupLockContext @ 0x14006E550
 * Callers:
 *     VfTargetDriversAdd @ 0x14006E474 (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14014885C (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x1402514AC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x140772338 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1407723A4 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1407726AC (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140772724 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140772880 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140772AA8 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140772B94 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140772C38 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140774CDC (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140774EA0 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140774F8C (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140775304 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1407755AC (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1407756DC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x14077578C (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x14077B4F8 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x14077CD08 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14077CD90 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14077CEA4 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14077D5C0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14077D900 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14077DB38 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1407834F0 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14006E6B8 (ViAvlReleaseTableLockFromDpcLevel.c)
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
