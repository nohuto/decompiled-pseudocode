/*
 * XREFs of KiForceIdleParkUnparkProcessor @ 0x140205D78
 * Callers:
 *     KiForceIdleParkUnparkDpcRoutine @ 0x140205D50 (KiForceIdleParkUnparkDpcRoutine.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x140205F44 (KiForceIdleUpdateSchedulerParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 */

__int64 __fastcall KiForceIdleParkUnparkProcessor(__int64 a1, char a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 24354) )
    {
      _InterlockedOr64(
        &qword_140340768[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6],
        1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F));
      result = KeTransitionProcessorParkState(a1);
    }
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v4);
        result = *(_QWORD *)(a1 + 48);
      }
      while ( result );
    }
    *(_BYTE *)(a1 + 11881) = 0;
    *(_BYTE *)(a1 + 11883) = 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    _InterlockedAnd64(
      &qword_140340768[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6],
      ~(1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F)));
    return KeTransitionProcessorParkState(a1);
  }
  return result;
}
