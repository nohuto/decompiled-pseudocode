/*
 * XREFs of ViErrorReport1 @ 0x140251260
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x140765E40 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x140766040 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x14076D9A8 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x14076DCC4 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x14076DDF0 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x14076E1F4 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x14076E350 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x14076E534 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x14076E8CC (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x14076EA74 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x14077E290 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x14077E420 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x14077E600 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14077E6DC (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x14077EA00 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x14077EB00 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x14077EB40 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x14077EC40 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x14077ED50 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1401556EC (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14024FF14 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x140773940 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x140773998 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
