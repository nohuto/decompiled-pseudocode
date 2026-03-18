/*
 * XREFs of PoNotifySystemTimeSet @ 0x14014B7EC
 * Callers:
 *     ExpSetSystemTime @ 0x140409E44 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405A57F4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x140716E0C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14006EED0 (ExNotifyWithProcessing.c)
 *     PopCheckForWork @ 0x140070144 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 *     EtwTraceSystemTimeChange @ 0x14040BBA8 (EtwTraceSystemTimeChange.c)
 */

__int64 PoNotifySystemTimeSet()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  if ( PsWin32CalloutsEstablished )
  {
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
