/*
 * XREFs of MiMarkKernelCfgTarget @ 0x14017D2BC
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1404C0520 (MmGetSystemRoutineAddress.c)
 *     MiMarkKernelCfgAddressTakenImports @ 0x1406BD4F4 (MiMarkKernelCfgAddressTakenImports.c)
 * Callees:
 *     VslEnableKernelCfgTarget @ 0x140687D40 (VslEnableKernelCfgTarget.c)
 */

__int64 MiMarkKernelCfgTarget()
{
  if ( (MiFlags & 0x80000) != 0 )
    VslEnableKernelCfgTarget();
  return 0LL;
}
