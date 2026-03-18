/*
 * XREFs of MiGetSessionVm @ 0x14012F680
 * Callers:
 *     MmPrefetchVirtualMemory @ 0x140444728 (MmPrefetchVirtualMemory.c)
 *     MiUnloadSystemImage @ 0x140515B1C (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
}
