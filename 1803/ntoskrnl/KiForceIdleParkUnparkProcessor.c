/*
 * XREFs of KiForceIdleParkUnparkProcessor @ 0x14024A578
 * Callers:
 *     KiForceIdleParkUnparkDpcRoutine @ 0x14024A550 (KiForceIdleParkUnparkDpcRoutine.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14024A7F0 (KiForceIdleUpdateSchedulerParkState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 */

__int64 __fastcall KiForceIdleParkUnparkProcessor(__int64 a1, char a2)
{
  unsigned int v3; // ecx
  struct _KPRCB *CurrentPrcb; // rsi
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( !*(_BYTE *)(a1 + 24226) )
    {
      v3 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      _InterlockedOr64(&qword_14039CB68[v3 >> 6], 1LL << (v3 & 0x3F));
      KeTransitionProcessorParkState(a1);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v6);
      while ( *(_QWORD *)(a1 + 48) );
    }
    *(_BYTE *)(a1 + 11881) = 0;
    *(_BYTE *)(a1 + 11883) = 0;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    return KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  }
  else
  {
    _InterlockedAnd64(
      &qword_14039CB68[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] >> 6],
      ~(1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] & 0x3F)));
    return KeTransitionProcessorParkState(a1);
  }
}
