/*
 * XREFs of MiGetWorkingSetSwapSupport @ 0x14007F460
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x14007F098 (MmInSwapWorkingSet.c)
 *     MiOutlawInswaps @ 0x14007F328 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14007F3AC (MmQueryProcessWorkingSetSwapPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 */

__int64 __fastcall MiGetWorkingSetSwapSupport(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(MiGetSharedVm(a1) + 24);
}
