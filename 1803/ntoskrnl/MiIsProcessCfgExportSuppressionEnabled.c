/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14003F064
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1404B3738 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140580C04 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 384LL)
      && (KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase & 2) != 0;
}
