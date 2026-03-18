/*
 * XREFs of PpmCheckReInit @ 0x14063F71C
 * Callers:
 *     PopIntSteerSetMode @ 0x14017F220 (PopIntSteerSetMode.c)
 *     PpmParkSetLpiCap @ 0x1402829EC (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     PpmCheckArmPeriod @ 0x14017FAC0 (PpmCheckArmPeriod.c)
 *     PopInterruptSteeringEnabled @ 0x14017FB5C (PopInterruptSteeringEnabled.c)
 *     PpmParkUpdateConcurrencyTracking @ 0x14063F818 (PpmParkUpdateConcurrencyTracking.c)
 *     PpmParkParkingAvailable @ 0x14063F8D0 (PpmParkParkingAvailable.c)
 *     PpmPerfResetHistoryAll @ 0x140640644 (PpmPerfResetHistoryAll.c)
 */

__int64 (__fastcall ***PpmCheckReInit())()
{
  char v0; // bl
  char v1; // di
  __int64 *v2; // rsi
  _BYTE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall ***result)(); // rax

  v0 = 0;
  v1 = 0;
  v2 = &PpmCurrentProfile[336 * dword_1403AAA2C];
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmPerfStatesRegistered) )
  {
    v3 = (char *)v2 + 66;
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
