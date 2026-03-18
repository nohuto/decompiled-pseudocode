/*
 * XREFs of ViErrorReport1 @ 0x140277AD0
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1407A79E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1407A7BE0 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1407AF150 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1407AF668 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1407AF990 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1407AFABC (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1407AFEBC (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1407B0018 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1407B0324 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1407B06EC (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1407B0894 (VfIoInitializeIrp.c)
 *     VfPnpVerifyIrpStackDownward @ 0x1407C0260 (VfPnpVerifyIrpStackDownward.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1407C03F0 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1407C05D0 (VfPnpVerifyNewRequest.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1407C06AC (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1407C09D0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1407C0AD0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1407C0B10 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1407C0C10 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1407C0D20 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139C5C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1407B56F4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407B5748 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
