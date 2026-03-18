/*
 * XREFs of MiGetSessionVm @ 0x14007D8DC
 * Callers:
 *     MiUnloadSystemImage @ 0x1404B29B4 (MiUnloadSystemImage.c)
 *     MmPrefetchVirtualMemory @ 0x1404C9B00 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MiGetSessionVm()
{
  return KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
}
