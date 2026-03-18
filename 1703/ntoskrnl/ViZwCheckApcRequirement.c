/*
 * XREFs of ViZwCheckApcRequirement @ 0x140787CB4
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x140784AC0 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1407850B0 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x140786100 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x140786E40 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x140787BB0 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1400E2F30 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall ViZwCheckApcRequirement(ULONG_PTR a1)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql || (result = KeAreAllApcsDisabled()) != 0 )
  {
    result = ViZwBreakForIssues;
    if ( ViZwBreakForIssues )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE6uLL, a1, CurrentIrql, KeGetCurrentThread()->SpecialApcDisable);
  }
  return result;
}
