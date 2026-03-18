/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x140160880
 * Callers:
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x1406C6000 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
