/*
 * XREFs of VfSettingsMiscellaneousChecksInitPhase1 @ 0x1407BDD90
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1407A7248 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x14084819C (VerifierInitSystem.c)
 * Callees:
 *     ViSettingsEnableKernelHandleChecking @ 0x1407BDDB8 (ViSettingsEnableKernelHandleChecking.c)
 */

__int64 VfSettingsMiscellaneousChecksInitPhase1()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    return ViSettingsEnableKernelHandleChecking(1LL);
  return result;
}
