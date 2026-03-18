/*
 * XREFs of VfIoDetachDevice @ 0x14082156C
 * Callers:
 *     IovDetachDevice @ 0x140811FAC (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x140171A78 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x14082272C (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x1408233E8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14082343C (ViErrorFinishReport.c)
 */

__int64 __fastcall VfIoDetachDevice(_QWORD *a1, const void *a2)
{
  char pszDest[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    ViErrorDisplayDescription(514LL);
    if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(514LL, a2, a1, 0LL);
  }
  return IovUtilFlushStackCache(a1);
}
