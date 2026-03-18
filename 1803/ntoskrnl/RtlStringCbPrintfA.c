/*
 * XREFs of RtlStringCbPrintfA @ 0x140171A78
 * Callers:
 *     RtlpVerCompare @ 0x14016AF30 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140244050 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x1402AAC3C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402AACC0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x1402AAD54 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x1402AADF8 (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x140487900 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140814B70 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140814E40 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x14082156C (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x14082327C (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x140823314 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140832570 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140832720 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140832870 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140171ACC (RtlStringVPrintfWorkerA.c)
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = 0;
  if ( cbDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 >= 0 )
    return RtlStringVPrintfWorkerA(pszDest, cbDest, 0LL, pszFormat, va);
  if ( cbDest )
    *pszDest = 0;
  return v3;
}
