/*
 * XREFs of RtlWriteReleaseTickLock @ 0x140149278
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140404FC0 (KiCalibrateTimeAdjustment.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140410C0C (KiConfigureCpuSetSchedulingInformation.c)
 *     KiCreateCpuSetForProcessor @ 0x140411A90 (KiCreateCpuSetForProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWriteReleaseTickLock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
