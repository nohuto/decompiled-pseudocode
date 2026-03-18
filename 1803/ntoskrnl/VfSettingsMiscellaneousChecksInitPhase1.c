/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x14082B164
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1408143C8 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1408C5854 (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x14082B190 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x800) != 0 && (MmVerifierData & 0x400000) == 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
