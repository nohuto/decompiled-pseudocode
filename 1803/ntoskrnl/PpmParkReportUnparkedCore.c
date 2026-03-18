/*
 * XREFs of PpmParkReportUnparkedCore @ 0x140282974
 * Callers:
 *     PpmPerfAction @ 0x140109090 (PpmPerfAction.c)
 * Callees:
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 *     PpmEventCoreParkingStateChange @ 0x14028066C (PpmEventCoreParkingStateChange.c)
 */

_BYTE *__fastcall PpmParkReportUnparkedCore(__int64 a1)
{
  __int64 v2; // rax
  _BYTE *result; // rax

  KeTransitionProcessorParkState(a1);
  v2 = *(unsigned int *)(a1 + 36);
  *(_BYTE *)(a1 + 24226) = 0;
  _InterlockedAnd64(
    &qword_14039BE28[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
  PpmEventCoreParkingStateChange(a1, 0);
  result = *(_BYTE **)(a1 + 23808);
  if ( result )
  {
    if ( *result == 1 )
      *(_BYTE *)(a1 + 23869) = 1;
  }
  return result;
}
