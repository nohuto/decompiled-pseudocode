/*
 * XREFs of ViErrorReport10 @ 0x140277B54
 * Callers:
 *     IovpCallDriver2 @ 0x1407AF668 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1407C03F0 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1407C06AC (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x1407C0C90 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139C5C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1407B56F4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407B5748 (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
