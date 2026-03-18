/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x1400A7F08
 * Callers:
 *     MmQueryProcessWorkingSetSwapPages @ 0x1400340C4 (MmQueryProcessWorkingSetSwapPages.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiOutPageSingleKernelStack @ 0x14007C8D0 (MiOutPageSingleKernelStack.c)
 *     MmInSwapWorkingSet @ 0x14007D3E4 (MmInSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x14007E91C (MiOutlawInswaps.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 * Callees:
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
    return 0LL;
  else
    return *((_QWORD *)MiGetSharedVm(a1) + 3);
}
