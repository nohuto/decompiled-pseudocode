/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x14017FF30
 * Callers:
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x14075DF00 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407AB754 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
