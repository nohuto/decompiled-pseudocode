/*
 * XREFs of PpmPerfQueueAction @ 0x14014DC18
 * Callers:
 *     PpmParkReportUnparkedCores @ 0x14008F6E0 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x14008F710 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14008F760 (PpmParkUnblockIdle.c)
 *     PpmPerfApplyProcessorStates @ 0x14014D300 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 24144));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 24144), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 24080, 0LL, 0LL, 0LL, 0);
  return result;
}
