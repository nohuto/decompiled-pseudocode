/*
 * XREFs of MiMarkKernelCfgTarget @ 0x1400AF120
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1404DE7F0 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1406EA2D4 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x1406B3B00 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x80000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
