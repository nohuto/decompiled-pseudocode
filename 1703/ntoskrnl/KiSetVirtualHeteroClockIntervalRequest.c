/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x140204AB4
 * Callers:
 *     KeUpdatePendingVirtualLittleRequest @ 0x140203B98 (KeUpdatePendingVirtualLittleRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x140204B20 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x14002EA08 (KiSendClockInterruptToClockOwner.c)
 *     KiResetClockInterval @ 0x140067A68 (KiResetClockInterval.c)
 *     KiSetClockInterval @ 0x140067A94 (KiSetClockInterval.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( a1 )
  {
    if ( byte_140356878 )
      KiResetClockInterval(&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_140356878 )
  {
    KiSetClockInterval(0x2710u, 0, (__int64)&KiVirtualHeteroClockRequest);
    KiSendClockInterruptToClockOwner();
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
