/*
 * XREFs of RtlInitAnsiString @ 0x180022B80
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180015A3C (LdrpGetShimEngineInterface.c)
 *     LdrpLogDelayLoadTrigger @ 0x1800228B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpGetDelayloadExportDll @ 0x180022A6C (LdrpGetDelayloadExportDll.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpReportError @ 0x180052C64 (LdrpReportError.c)
 *     AVrfpDetectVerifiedExports @ 0x1800DAA3C (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB874 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitAnsiString(PSTRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( SourceString )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( SourceString[v2] );
    if ( v2 >= 0xFFFF )
      LOWORD(v2) = -2;
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
  }
}
