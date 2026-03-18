/*
 * XREFs of PpmPerfQueueAction @ 0x140147208
 * Callers:
 *     PpmParkReportUnparkedCores @ 0x1400457F0 (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x140045820 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140045870 (PpmParkUnblockIdle.c)
 *     PpmPerfApplyProcessorStates @ 0x140146A10 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 24272));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 24272), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 24208, 0LL, 0LL, 0LL, 0);
  return result;
}
