/*
 * XREFs of ViZwCheckApcRequirement @ 0x1407CA114
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1407C6E70 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1407C7480 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x1407C8500 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1407C9270 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1407CA010 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400890C0 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViZwCheckApcRequirement(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x800) != 0 && (CurrentIrql || KeAreAllApcsDisabled()) )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xE6uLL,
      BugCheckParameter2,
      CurrentIrql,
      KeGetCurrentThread()->SpecialApcDisable);
}
