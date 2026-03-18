/*
 * XREFs of KiBugCheckDispatch @ 0x1401BBA40
 * Callers:
 *     KxIsrLinkage @ 0x1401ADB60 (KxIsrLinkage.c)
 *     KiNmiInterruptStart @ 0x1401B5AC0 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x1401B6540 (KiBoundFault.c)
 *     KiNpxNotAvailableFault @ 0x1401B6E80 (KiNpxNotAvailableFault.c)
 *     KiDoubleFaultAbort @ 0x1401B7140 (KiDoubleFaultAbort.c)
 *     KiNpxSegmentOverrunAbort @ 0x1401B7400 (KiNpxSegmentOverrunAbort.c)
 *     KiInvalidTssFault @ 0x1401B76C0 (KiInvalidTssFault.c)
 *     KiSegmentNotPresentFault @ 0x1401B7980 (KiSegmentNotPresentFault.c)
 *     KiPageFault @ 0x1401B8300 (KiPageFault.c)
 *     KiFloatingErrorFault @ 0x1401B8900 (KiFloatingErrorFault.c)
 *     KiMcheckAbort @ 0x1401B8F80 (KiMcheckAbort.c)
 *     KiXmmException @ 0x1401B9980 (KiXmmException.c)
 *     KiVirtualizationException @ 0x1401B9D00 (KiVirtualizationException.c)
 *     KiSystemServiceHandler @ 0x1401BAF80 (KiSystemServiceHandler.c)
 *     KiSystemCall64 @ 0x1401BB100 (KiSystemCall64.c)
 *     KiFastFailDispatch @ 0x1401BBD80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401BC040 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiBugCheckDispatch(ULONG a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter4; // r10

  KeBugCheckEx(a1, a2, a3, a4, BugCheckParameter4);
}
