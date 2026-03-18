/*
 * XREFs of ViZwCheckApcRequirement @ 0x140837674
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1408343D0 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1408349E0 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x140835A60 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1408367D0 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x140837570 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400F0AD0 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViZwCheckApcRequirement(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x100) != 0 && (CurrentIrql || KeAreAllApcsDisabled()) )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xE6uLL,
      BugCheckParameter2,
      CurrentIrql,
      KeGetCurrentThread()->SpecialApcDisable);
}
