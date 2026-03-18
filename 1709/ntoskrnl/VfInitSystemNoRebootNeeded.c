/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x1407A7248
 * Callers:
 *     VfAddVerifierEntry @ 0x1407CA2F4 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1407CA500 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140848008 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x1402848EC (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x140286DB0 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x140516060 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x1407A45E8 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x1407B3894 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1407B7798 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1407BDD90 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2)
{
  int v3; // edi
  int v4; // eax

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
    v4 = MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v4 = 2491;
    MmVerifierData = v4;
    if ( v3 == 1 )
    {
      ViVerifyAllDrivers = 1;
      MmVerifyDriverLevel &= ~0x20u;
      MmVerifierData = v4 & 0xFFFFFFDF;
      ExSetPoolFlags(8u);
    }
    qword_140361A98 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_140361D68 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      VfInitVerifierComponents(
        (unsigned int)MmVerifierData,
        (unsigned int)ViVerifyAllDrivers,
        (unsigned int)KernelVerifier);
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
    }
    ViFullyInitialized = 1;
  }
}
