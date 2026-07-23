/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x14020ACEC
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x14020A080 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x14020AD60 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x14010F0C8 (KiSendClockInterruptToClockOwner.c)
 *     KiResetClockInterval @ 0x14010F138 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x14010F168 (KiSetClockInterval.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( a1 )
  {
    if ( byte_140371358 )
      KiResetClockInterval(&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_140371358 )
  {
    KiSetClockInterval(10 * PpmPerfQosTransitionHysteresis, 0, (__int64)&KiVirtualHeteroClockRequest);
    KiSendClockInterruptToClockOwner();
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
