/*
 * XREFs of RtlWriteReleaseTickLock @ 0x140139E44
 * Callers:
 *     KiCreateCpuSetForProcessor @ 0x1404262B0 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x14042E2D0 (KiCalibrateTimeAdjustment.c)
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
