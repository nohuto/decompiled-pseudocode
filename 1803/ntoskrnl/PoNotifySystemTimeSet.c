/*
 * XREFs of PoNotifySystemTimeSet @ 0x14016E698
 * Callers:
 *     ExpSetSystemTime @ 0x1404710F4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140072E18 (ExNotifyWithProcessing.c)
 *     PopCheckForWork @ 0x14007421C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140074BCC (PopGetPolicyWorker.c)
 *     EtwTraceSystemTimeChange @ 0x1404765F8 (EtwTraceSystemTimeChange.c)
 */

__int64 __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  if ( PsWin32CalloutsEstablished )
  {
    PopTimeChangeInfo = *a1;
    qword_1403ABC98 = *a2;
    EtwTraceSystemTimeChange();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
