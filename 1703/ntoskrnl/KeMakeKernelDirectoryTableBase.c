/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x14017C610
 * Callers:
 *     MmInSwapProcess @ 0x1400411F0 (MmInSwapProcess.c)
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x14013497C (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
