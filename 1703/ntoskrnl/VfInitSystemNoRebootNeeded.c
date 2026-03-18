/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140765668
 * Callers:
 *     VfAddVerifierEntry @ 0x140787E8C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x14078808C (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140812964 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x14025B0F0 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14025D298 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1404B2580 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x140762968 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140771AF4 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x14077594C (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x14077BE74 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rcx

  v3 = KernelVerifier;
  if ( !ViFullyInitialized )
  {
    if ( !a2 )
    {
      VfInitializedWithoutReboot = 1;
      MmLockPagableDataSection(VfInitVerifierComponents);
      MmLockPagableDataSection(&VfSettingsIrpDeferralTime);
      MmLockPagableDataSection((PVOID)&ViShortTime);
      MmLockPagableDataSection(&ViBugCheckInitialControl);
    }
    if ( v3 || !a2 )
      ExDisableAllLookasideLists();
    VerifierModifyableOptions = 0x1FFF;
    v4 = (unsigned int)MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v4 = 2491LL;
    MmVerifierData = v4;
    if ( v3 == 1 )
    {
      ViVerifyAllDrivers = 1;
      MmVerifierData = v4 & 0xFFFFFFDF;
      MmVerifyDriverLevel &= ~0x20u;
      ExSetPoolFlags(8u);
      v4 = (unsigned int)MmVerifierData;
    }
    qword_140348008 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_1403482F8 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      VfInitVerifierComponents(v4, (unsigned int)ViVerifyAllDrivers, (unsigned int)KernelVerifier);
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
    }
    ViFullyInitialized = 1;
  }
}
