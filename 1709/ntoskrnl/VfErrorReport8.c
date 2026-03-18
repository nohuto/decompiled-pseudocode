/*
 * XREFs of VfErrorReport8 @ 0x1407B5620
 * Callers:
 *     PpvUtilFailDriver @ 0x140200C90 (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140139C5C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140276714 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1407B56F4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407B5748 (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport8(__int64 a1, const void *a2, const void *a3)
{
  unsigned int v5; // ebx
  char pszDest[80]; // [rsp+30h] [rbp-78h] BYREF

  v5 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v5, a2, a3, 0LL);
}
