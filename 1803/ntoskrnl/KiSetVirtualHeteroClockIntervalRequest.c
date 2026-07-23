/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x140248F50
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x140247D04 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140248FC0 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140005910 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x140005980 (KiSetClockInterval.c)
 *     KiResetClockInterval @ 0x140184708 (KiResetClockInterval.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( a1 )
  {
    if ( byte_14039CB48 )
      KiResetClockInterval(&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_14039CB48 )
  {
    KiSetClockInterval(10 * PpmPerfQosTransitionHysteresis, 0, (__int64)&KiVirtualHeteroClockRequest);
    KiSendClockInterruptToClockOwner();
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
