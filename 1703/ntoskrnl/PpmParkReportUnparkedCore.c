/*
 * XREFs of PpmParkReportUnparkedCore @ 0x140237B34
 * Callers:
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x14023565C (PpmEventCoreParkingStateChange.c)
 */

_BYTE *__fastcall PpmParkReportUnparkedCore(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *result; // rax

  KeTransitionProcessorParkState(a1);
  v2 = *(unsigned int *)(a1 + 36);
  *(_BYTE *)(a1 + 24354) = 0;
  _InterlockedAnd64(
    &qword_1403401D8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
  PpmEventCoreParkingStateChange(a1, 0);
  result = *(_BYTE **)(a1 + 23936);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 23997) = 1;
  }
  return result;
}
