/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x14017BD30
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400C75F8 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x1400D08FC (MmStealTopLevelPage.c)
 *     MmInSwapProcess @ 0x140114710 (MmInSwapProcess.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1404FB5AC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
