/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x14077BE74
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140765668 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140812904 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x14077BE9C (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
