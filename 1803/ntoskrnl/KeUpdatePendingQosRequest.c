/*
 * XREFs of KeUpdatePendingQosRequest @ 0x140247D04
 * Callers:
 *     KiUpdateRunTime @ 0x1401099B0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x14010A200 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     KeCheckAndApplyBamQos @ 0x140247AD0 (KeCheckAndApplyBamQos.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140039020 (KiInsertQueueDpc.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140248F50 (KiSetVirtualHeteroClockIntervalRequest.c)
 */

__int64 __fastcall KeUpdatePendingQosRequest(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 236) & 0xC) != 0 )
  {
    result = (unsigned int)_InterlockedIncrement(&KiPendingVirtualHeteroRequest);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
      a1 = 0LL;
      return KiSetVirtualHeteroClockIntervalRequest(a1);
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd(&KiPendingVirtualHeteroRequest, 0xFFFFFFFF);
    if ( (_DWORD)result != 1 )
      return result;
    if ( *(_BYTE *)(a1 + 33) )
    {
      LOBYTE(a1) = 1;
      return KiSetVirtualHeteroClockIntervalRequest(a1);
    }
  }
  if ( !qword_1403B47D8 )
    word_1403B47A2 = KiClockTimerOwner + 1280;
  return KiInsertQueueDpc((ULONG_PTR)&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL, 0LL, 0);
}
