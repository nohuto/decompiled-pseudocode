/*
 * XREFs of PoNotifySystemTimeSet @ 0x14015D400
 * Callers:
 *     ExpSetSystemTime @ 0x14043A934 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400AEAC8 (ExNotifyWithProcessing.c)
 *     PopCheckForWork @ 0x1400B0F0C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400B11B4 (PopGetPolicyWorker.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     EtwTraceSystemTimeChange @ 0x14043A5EC (EtwTraceSystemTimeChange.c)
 */

__int64 __fastcall PoNotifySystemTimeSet(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( PsWin32CalloutsEstablished )
  {
    v8[0] = *a1;
    v8[1] = *a2;
    ZwUpdateWnfStateData("u", v8, 16LL);
    EtwTraceSystemTimeChange(a1, a2, a3);
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
