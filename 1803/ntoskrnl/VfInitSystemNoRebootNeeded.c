/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x1408143C8
 * Callers:
 *     VfAddVerifierEntry @ 0x140837854 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140837A60 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x1408C58B4 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x1402B8EAC (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x1402BB080 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1405BB660 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x1408115A8 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140814500 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140820A44 (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1408249D8 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x14082B164 (VfSettingsMiscellaneousChecksInitPhase1.c)
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
    qword_1403A4E98 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_1403A5398 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
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
