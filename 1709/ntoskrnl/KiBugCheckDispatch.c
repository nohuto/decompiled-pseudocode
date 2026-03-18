/*
 * XREFs of KiBugCheckDispatch @ 0x140191D40
 * Callers:
 *     KxIsrLinkage @ 0x140183F10 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14018BDC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018C840 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14018D180 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14018D440 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14018D700 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14018D9C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14018DC80 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14018E600 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14018EC00 (KiFloatingErrorFault.c)
 *     KiMcheckAbort @ 0x14018F280 (KiMcheckAbort.c)
 *     KiXmmException @ 0x14018FC80 (KiXmmException.c)
 *     KiVirtualizationException @ 0x140190000 (KiVirtualizationException.c)
 *     KiSystemServiceHandler @ 0x140191280 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140191400 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140192080 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192340 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
