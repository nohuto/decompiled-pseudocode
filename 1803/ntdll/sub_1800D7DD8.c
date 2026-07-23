/*
 * XREFs of sub_1800D7DD8 @ 0x1800D7DD8
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D69F0 (RtlReportExceptionEx.c)
 *     sub_1800D6EB8 @ 0x1800D6EB8 (sub_1800D6EB8.c)
 * Callees:
 *     ZwSetInformationProcess @ 0x18009AE40 (ZwSetInformationProcess.c)
 */

NTSTATUS __fastcall sub_1800D7DD8(void *a1)
{
  __int64 ProcessInformation; // [rsp+30h] [rbp+8h] BYREF

  ProcessInformation = 0LL;
  if ( !a1 )
    return -1073741585;
  ProcessInformation = 1LL;
  return ZwSetInformationProcess(a1, ProcessFaultInformation, &ProcessInformation, 8u);
}
