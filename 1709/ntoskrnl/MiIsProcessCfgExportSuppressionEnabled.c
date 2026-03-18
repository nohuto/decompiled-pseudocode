/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14000715C
 * Callers:
 *     MiValidateUserCallTarget @ 0x1404453C8 (MiValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1404D3370 (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return !*(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 280LL)
      || (KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase & 2) != 0;
}
