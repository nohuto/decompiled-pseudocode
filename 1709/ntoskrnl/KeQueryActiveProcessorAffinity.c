/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x140138EE0
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x1406F62E0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
