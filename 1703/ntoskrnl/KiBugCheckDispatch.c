/*
 * XREFs of KiBugCheckDispatch @ 0x140191B80
 * Callers:
 *     KxIsrLinkage @ 0x140184490 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x14018C080 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14018CB00 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x14018D440 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x14018D700 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x14018D9C0 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x14018DC80 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x14018DF40 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x14018E8C0 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x14018EEC0 (KiFloatingErrorFault.c)
 *     KiMcheckAbort @ 0x14018F540 (KiMcheckAbort.c)
 *     KiXmmException @ 0x14018FF40 (KiXmmException.c)
 *     KiSystemServiceHandler @ 0x1401910C0 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x140191240 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x140191EC0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140192180 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
