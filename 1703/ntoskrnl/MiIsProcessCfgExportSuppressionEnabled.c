/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x1400014EC
 * Callers:
 *     MiValidateUserCallTarget @ 0x14041DF28 (MiValidateUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x14049AE2C (MiCfgMarkValidEntries.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return !*(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 280LL)
      || (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x400000000000000LL) != 0;
}
