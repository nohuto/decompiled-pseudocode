/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x14063EA98
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x14016A670 (PpmPerfClearBootOverrides.c)
 *     PopSetupHighPerfPowerRequest @ 0x14062754C (PopSetupHighPerfPowerRequest.c)
 *     PopPpmHeteroPolicyCallback @ 0x14063EA10 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmEnableProfile @ 0x14064A9B4 (PpmEnableProfile.c)
 *     PpmUpdatePerfStates @ 0x140761350 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14076ED30 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmReinitializeHeteroEngine(char a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(v2) = 0;
  if ( a1 )
    v2 |= 0x1000u;
  else
    v2 |= 0x2000u;
  return PpmReapplyPerfPolicy(&v2);
}
