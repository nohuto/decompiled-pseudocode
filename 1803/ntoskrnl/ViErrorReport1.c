/*
 * XREFs of ViErrorReport1 @ 0x1402AAC3C
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140814B70 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140814D70 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x14081C2B8 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14081C7E8 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x14081CB20 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14081CC4C (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x14081D05C (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x14081D1C4 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x14081D4D4 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x14081D89C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14081DA40 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x14082D760 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14082D8F0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x14082DAE0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14082DBBC (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x14082DEF0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x14082DFF0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x14082E030 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x14082E140 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x14082E250 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140171A78 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1408233E8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14082343C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
