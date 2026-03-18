/*
 * XREFs of PpmCheckReInit @ 0x1405B5FE0
 * Callers:
 *     PopIntSteerSetMode @ 0x140137B10 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x14024CC50 (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     PopInterruptSteeringEnabled @ 0x140138500 (PopInterruptSteeringEnabled.c)
 *     PpmCheckArmPeriod @ 0x140138E48 (PpmCheckArmPeriod.c)
 *     PpmPerfResetHistoryAll @ 0x1405B3B0C (PpmPerfResetHistoryAll.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1405B60EC (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x1405B6230 (PpmParkParkingAvailable.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  char v1; // di
  __int64 v2; // rsi
  _BYTE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = PpmCurrentProfile + 2688LL * dword_1403661AC;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfStatesRegistered) )
  {
    v3 = (_BYTE *)(v2 + 66);
    v4 = 2LL;
    do
    {
      if ( *v3 != v3[2] )
      {
        v0 = 1;
        v1 = 1;
      }
      ++v3;
      --v4;
    }
    while ( v4 );
    if ( PpmCheckPollForFeedback )
      v0 = 1;
    if ( PoEnergyEstimationEnabled() )
      v0 = 1;
  }
  if ( (unsigned __int8)PpmParkParkingAvailable() )
  {
    v0 = 1;
    v1 = 1;
  }
  if ( PopInterruptSteeringEnabled() )
    v0 = 1;
  if ( v0 && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  LOBYTE(v5) = v1;
  PpmParkUpdateConcurrencyTracking(v5);
  if ( v0 )
  {
    PpmCheckArmPeriod();
  }
  else if ( PpmCheckArmed )
  {
    _InterlockedExchange64(&PpmCheckLastExecutionTime, 0LL);
    PpmCheckArmed = 0;
  }
  result = PpmCheckHomogeneousPipelines;
  PpmCheckPipelines = (__int64)PpmCheckHomogeneousPipelines;
  if ( PpmHeteroPolicy )
  {
    if ( v1 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
