/*
 * XREFs of sub_1800DE578 @ 0x1800DE578
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 * Callees:
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 */

NTSTATUS __fastcall sub_1800DE578(void *a1)
{
  __int64 ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = 0LL;
  if ( !a1 )
    return -1073741585;
  ProcessInformation = 1LL;
  return ZwSetInformationProcess(a1, ProcessFaultInformation, &ProcessInformation, 8u);
}
