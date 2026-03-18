/*
 * XREFs of RtlStringCbPrintfA @ 0x1401556EC
 * Callers:
 *     RtlpVerCompare @ 0x140147B84 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x1402003E0 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x140251260 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402512E4 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140251378 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14025141C (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x14041B230 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x140765E40 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x140766110 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x140772498 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x140772608 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1407737D4 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x14077386C (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x140782C80 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x140782E30 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x140782F80 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140155740 (RtlStringVPrintfWorkerA.c)
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
