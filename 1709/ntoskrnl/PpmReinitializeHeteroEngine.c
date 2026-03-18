/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x1405B4FD8
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x140137B80 (PpmPerfClearBootOverrides.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405B3BE0 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmEnableProfile @ 0x1405E2108 (PpmEnableProfile.c)
 *     PopSetupHighPerfPowerRequest @ 0x1405EF820 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1406F9EC0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x14070B87C (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
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
