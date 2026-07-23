/*
 * XREFs of sub_1800D7B3C @ 0x1800D7B3C
 * Callers:
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwRaiseException @ 0x18009D670 (ZwRaiseException.c)
 *     sub_1800D7D98 @ 0x1800D7D98 (sub_1800D7D98.c)
 */

void __fastcall sub_1800D7B3C(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord, char a3)
{
  if ( (a3 & 4) == 0 && (unsigned int)sub_1800D7D98() )
  {
    do
      ZwRaiseException(ExceptionRecord, ContextRecord, 0);
    while ( (unsigned int)sub_1800D7D98() );
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
  }
}
