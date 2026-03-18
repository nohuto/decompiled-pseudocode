/*
 * XREFs of RtlStringCbPrintfA @ 0x140139C5C
 * Callers:
 *     RtlpVerCompare @ 0x1400F95D8 (RtlpVerCompare.c)
 *     KiDumpParameterImages @ 0x140206870 (KiDumpParameterImages.c)
 *     ViErrorReport1 @ 0x140277AD0 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x140277B54 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x140277BE8 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x140277C8C (ViErrorReport6.c)
 *     ExpSystemErrorHandler2 @ 0x14043AD40 (ExpSystemErrorHandler2.c)
 *     ViGenericVerifyIrpStackDownward @ 0x1407A79E0 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyNewIrp @ 0x1407A7CB0 (ViGenericVerifyNewIrp.c)
 *     VfIoDeleteDevice @ 0x1407B4248 (VfIoDeleteDevice.c)
 *     VfIoDetachDevice @ 0x1407B43B8 (VfIoDetachDevice.c)
 *     VfErrorReport7 @ 0x1407B5588 (VfErrorReport7.c)
 *     VfErrorReport8 @ 0x1407B5620 (VfErrorReport8.c)
 *     VerifierNtCreateFile @ 0x1407C5010 (VerifierNtCreateFile.c)
 *     VerifierNtReadFile @ 0x1407C51C0 (VerifierNtReadFile.c)
 *     VerifierNtWriteFile @ 0x1407C5310 (VerifierNtWriteFile.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     RtlStringVPrintfWorkerA @ 0x140139CB0 (RtlStringVPrintfWorkerA.c)
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
