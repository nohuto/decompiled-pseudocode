/*
 * XREFs of PpmCheckReInit @ 0x1405C02B8
 * Callers:
 *     PopIntSteerSetMode @ 0x14015FA70 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x140237BAC (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140047190 (KeIsEmptyAffinityEx.c)
 *     PopInterruptSteeringEnabled @ 0x140160340 (PopInterruptSteeringEnabled.c)
 *     PpmCheckArmPeriod @ 0x140160360 (PpmCheckArmPeriod.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x1405C03D0 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x1405C0510 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x1405C0DC4 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  __int64 *v0; // rsi
  char v1; // bl
  __int64 v2; // rbp
  char v3; // di
  _BYTE *v4; // rcx
  __int64 v5; // rdx
  char v6; // al
  __int64 v7; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = PpmCurrentProfile;
  v1 = 0;
  v2 = 175LL * dword_14034BB2C;
  v3 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfStatesRegistered) )
  {
    v4 = (char *)&v0[v2 + 8] + 2;
    v5 = 2LL;
    do
    {
      if ( *v4 != v4[2] )
      {
        v1 = 1;
        v3 = 1;
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    v6 = v1;
    if ( PpmCheckPollForFeedback )
      v6 = 1;
    v1 = v6;
    if ( !PopEnergyEstimationDisabled )
      v1 = 1;
  }
  if ( (unsigned __int8)PpmParkParkingAvailable() )
  {
    v1 = 1;
    v3 = 1;
  }
  if ( (unsigned __int8)PopInterruptSteeringEnabled() )
    v1 = 1;
  if ( v1 && !PpmCheckArmed )
    PpmPerfResetHistoryAll();
  LOBYTE(v7) = v3;
  PpmParkUpdateConcurrencyTracking(v7);
  if ( v1 )
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
    if ( v3 )
    {
      result = PpmCheckHeterogeneousPipelines;
      PpmCheckPipelines = (__int64)PpmCheckHeterogeneousPipelines;
    }
  }
  return result;
}
