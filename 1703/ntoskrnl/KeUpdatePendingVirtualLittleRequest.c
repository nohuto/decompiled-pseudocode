/*
 * XREFs of KeUpdatePendingVirtualLittleRequest @ 0x140203B98
 * Callers:
 *     KiCheckAndApplyVirtualLittle @ 0x14000B920 (KiCheckAndApplyVirtualLittle.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KeUpdatePendingVirtualLittleRequest(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 25575) )
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
  if ( !qword_140356AD8 )
    word_140356AA2 = KiClockTimerOwner + 640;
  return KiInsertQueueDpc((ULONG_PTR)&KiSetVirtualHeteroClockIntervalRequestDpc, 0LL, 0LL, 0LL, 0);
}
